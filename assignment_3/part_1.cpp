/*
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

void generate_images(int* imgs_in);
double img_avg(int* img);


int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[10][100][100];

    generate_images((int*)imgs);

    for (int i = 0; i < 10; i++) {
        double average = img_avg((int*)imgs[i]);
        std::cout << "image average: " << average << std::endl;
    }
}

double img_avg(int* img) {
    double average = 0;
    for (int i = 0; i < 100 * 100; i++) {
        average = img[i] + average;
    }
    average = average / (100 * 100);
    return average;
}

void generate_images(int* imgs_in) {
    for (int i = 0; i < 10 * 100 * 100; i++) {
        imgs_in[i] = rand() % 255;
    }
}
*/
