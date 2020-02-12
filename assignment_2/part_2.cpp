// assignment_2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

int main()
{   // Initialize the random number generator
    std::srand(time(NULL));

    // Define input file locations and name.
    std::string input_file_location = "";
    std::string input_file_name = "dice_part_2.txt";

    // Define output file location and name
    std::string output_file_location = "";
    std::string output_file_name = "output_2.txt";

    // Open the input file 
    std::ifstream input;
    input.open(input_file_name);

    //Create output file with the given name
    std::ofstream output;
    output.open(output_file_name);

    // Check to see if file is open
    if (!input.good()) {
        std::cout << "Stream is not good :( " << input_file_name << ".\n";
        return 0;
    }

    std::string line;
    std::string count_str;
    std::string faces_str;
    std::string output_str;
    std::string num = "0123456789"; 
    int count;
    int faces;
    int modifier;
    
    
    while (!input.eof()) {
        std::srand(time(NULL));
        std::getline(input, line);
        int output_sum = 0;
        int pos = 0;
        int key = 0;
        bool found = false;
            //std::cout << " Line: " << line << std::endl;
            while (found == false && key <= line.length()){
                key = line.find("d", pos);
                int end_key = 0;
                int start_key = 0;
                if (key != -1) {
                    std::string search_str;
                    search_str = line.substr(key+1, 1);
                    //std::cout << "Search Stirng: " << search_str << std::endl;
                    if (search_str.find_first_of("0123456789") != std::string::npos) {
                        end_key = line.find(" ", key);
                        start_key = line.rfind(" ", key);
                        //std::cout << start_key << " " << key << " " << end_key << std::endl;
                        count_str = line.substr(start_key, key - start_key);
                        faces_str = line.substr(key + 1, end_key - key);
                        //std::cout << "String= Count: " << count_str << " Faces: " << faces_str << std::endl;
                        count = std::stoi(count_str);
                        faces = std::stoi(faces_str);
                        //std::cout << "Int= Count: " << count << " Faces: " << faces << std::endl;
                        output_sum = output_sum + (rand() % (faces + 1));
                        output_str = std::to_string(output_sum);
                        //std::cout << "Output Sum: " << output_str << std::endl;
                        line.replace(start_key+1, (end_key-1) - start_key, output_str);
                        std::cout << line << std::endl;
                        found = true;
                    }
                }
                if (found == false)
                    pos = key + 1;
             }
    output << line << std::endl;
    }
    input.close();
    output.close();
}


