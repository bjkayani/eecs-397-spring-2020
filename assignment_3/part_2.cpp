/*
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

void generate_images(int* imgs_in);
double img_avg(int* img);
int* brightest_of(int* img);


int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[10][100][100];

    generate_images((int*)imgs);

    int* ptr = brightest_of((int*)imgs[0]);

    std::cout << " brightest image pointer: " << ptr << std::endl;
    std::cout << " brightest image: " << ((ptr - *imgs[0])/10000) << std::endl;

}

double img_avg(int* img) {
    double average = 0;
    for (int i = 0; i < 100 * 100; i++) {
        average = img[i] + average;
    }
    average = average / (100 * 100);
    return average;
}

int* brightest_of(int* img) {
    int brightest = NULL;
    double old_brightness = 0;
    double new_brightness = 0;
    for (int i = 0; i < 10; i++) {
        new_brightness = img_avg(img + (i * 100 * 100));
        if (new_brightness > old_brightness) {
            brightest = i;
        }
        old_brightness = new_brightness;
    }
    return img + (brightest * 100 * 100);
}

void generate_images(int* imgs_in) {
    for (int i = 0; i < 10 * 100 * 100; i++) {
        imgs_in[i] = rand() % 255;
    }
}

*/