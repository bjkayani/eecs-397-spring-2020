
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

void generate_images(int* imgs_in);
double img_avg(int* img);
int* brightest_of(int* img);
void sort_brightness(int* img, int** output);


int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[10][100][100];

    generate_images((int*)imgs);

    int **sorted_ptr = 0;
    sort_brightness((int*)imgs[0], (int**)sorted_ptr);
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

void sort_brightness(int* img, int** output) {
    int* ptr[10];
    double brightness[10];
    for (int i = 0; i < 10; i++) {
        brightness[i] = img_avg(img + (i * 100 * 100));
        ptr[i] = img + (i * 100 * 100);
    }
    int sorted = 1;
    while (sorted == 1) {
        sorted = 0;
        double swap = 0;
        int* swap_ptr = 0;
        for (int i = 1; i < 10; i++) {
            if (brightness[i - 1] > brightness[i]) {
                swap = brightness[i];
                swap_ptr = ptr[i];
                brightness[i] = brightness[i - 1];
                ptr[i] = ptr[i - 1];
                brightness[i - 1] = swap;
                ptr[i - 1] = swap_ptr;
                sorted = 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << brightness[i] << " " << ptr[i] << std::endl;

    }

    //cant figure out how to assign the sorted pointer array
    //to output pointer
}


void generate_images(int* imgs_in) {
    for (int i = 0; i < 10 * 100 * 100; i++) {
        imgs_in[i] = rand() % 255;
    }
}

