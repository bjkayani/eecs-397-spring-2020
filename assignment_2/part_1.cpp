// assignment_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

int main()
{   // Initialize the random number generator
    std::srand(time(NULL));

    // Define input file locations and name.
    std::string input_file_location = "";
    std::string input_file_name = "dice_part_1.txt";

    // Define output file location and name
    std::string output_file_location = "";
    std::string output_file_name = "output.txt";

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
    int count;
    int faces;
    int modifier;

    while (!input.eof()) {
        input >> line; //load one line from input to dice string
        int key = line.find('d');
        count_str = line.substr(0, key);
        faces_str = line.substr(key + 1, line.length());
        //std::cout << "String{Count: " << count_str << " Faces: " << faces_str << "}" << std::endl;
        
        //count contains the multiplication
        int multiplier = 0;
        if (count_str.find("*") != std::string::npos) {
            int mult_key = count_str.find("*");
            multiplier = std::stoi(count_str.substr(0, mult_key));
            count = std::stoi(count_str.substr(mult_key+1, key));
        }
        else {
            count = std::stoi(count_str);
        }

        faces = std::stoi(faces_str);
        int modifier = 0;
        if (faces_str.find("+") != std::string::npos) {
            int mod_key = faces_str.find("+");
            modifier = std::stoi(faces_str.substr(mod_key, line.length()));
        }
        else if (faces_str.find("-") != std::string::npos) {
            int mod_key = faces_str.find("-");
            modifier = std::stoi(faces_str.substr(mod_key, line.length()));
        }

        std::cout << "Int{Count: " << count << " Faces: " << faces;
        std::cout << " Multiplier: " << multiplier << " Modifier: " << modifier << std::endl;

        int output_sum = 0;
        if (multiplier == 0) {
            for (int i = 0; i <= count; i++) {
                output_sum = output_sum + rand() % (faces + 1);
            }
        }
        else {
            for (int i = 0; i <= count; i++) {
                output_sum = output_sum + (multiplier * (rand() % ((faces + 1)+modifier)));
            }
        }
        std::cout << "Output Sum: " << output_sum << std::endl;
        output << std::to_string(output_sum) << std::endl;
    }
    input.close();
    output.close();
}

*/
