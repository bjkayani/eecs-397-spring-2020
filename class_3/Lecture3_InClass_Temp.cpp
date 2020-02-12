
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

int main(const int argc, const char** argv) {
    std::srand(time(NULL)); //initialize the random number generator

    // Define input file locations and name.
    std::string input_file_location = "";
    std::string input_file_name = "dice.txt";

    // Define output file location and name

    std::string output_file_location = "";
    std::string output_file_name = "output.txt";

    // Open the input file 

    std::ifstream input; // Create an input file stream object
    input.open(input_file_name); // open the file

    // Good to check if the input file exists and complain if it doesn't.
    
    if (!input.good()) {
        std::cout << "Stream is not good :( " << input_file_name << ".\n";
        return 0;
    }

    //Create output file with the given name

    std::ofstream output;
    output.open(output_file_name);

    // Loop through to the end of the input file
    std::string line;
    while (!input.eof()) {
        input >> line; //load one line from input to dice string
        std::cout << line << std::endl;
        int key = line.find_first_of('d');
        std::cout << "d is located at: " << key << std::endl;
    }

    // For each line

    // copy from start to d where d not included to a variable

    // convert it to integer and assign it as the count

    // copy from d to the end (d is not included) to a variable

    // convert it to integer and assign it as the number of faces
    
    // loop over count
    // create random number using: ( std::rand() % number of faces ) + 1; )
    // sum all the random numbers

    // Convert the sum into string
    // Write the string into output file
       
    // loop shoud end here

    //close input file
    //close output file

    return 0;
}
