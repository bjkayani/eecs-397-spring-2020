
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

void generate_images(int* imgs_in);
void diag(int* img, int value);

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
    int *ptr[10];
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
        std::cout << output + i << " " << ptr[i] << std::endl;
        
    }
    
}

int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[10][100][100];

    generate_images((int*)imgs);
    diag((int*)imgs[3], -5);

    int sorted_ptr = 0;
    sort_brightness((int*)imgs[0], (int**)sorted_ptr);

    /*double average = img_avg((int*)imgs[0]);
    std::cout << "image average: " << average;

    int* ptr = brightest_of((int*)imgs[0]);

    std::cout << " brightest image pointer: " << ptr;
    std::cout << " brightest image: " << ((ptr - *imgs[0])/10000);

    for (int i = 0; i < 5; i++) {
        std::cout << "Image #" << i+1 << ":\n";//Label starting from zero to match array indexing.
        for (int v = 0; v < 10; v++) {
            for (int h = 0; h < 10; h++) {
                std::cout << imgs[i][v][h] << " ";
            }
            std::cout << "\n";
        }
    }*/
}

//Put yer functions here.
void generate_images(int* imgs_in) {
    for (int i = 0; i < 10 * 100 * 100; i++) {
        imgs_in[i] = rand() % 255;
    }
}

void diag(int* img, int value) {
    for (int i = 0; i < 100; i++) {
        img[i * 100 + i] = value;
    }
}
