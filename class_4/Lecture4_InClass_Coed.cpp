/*

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

void TopDownMerge(std::vector<int>& A, int iBegin, int iMiddle, int iEnd, std::vector<int>& B);
void TopDownSplitMerge(std::vector<int>& B, int iBegin, int iEnd, std::vector<int>& A);
void TopDownMergeSort(std::vector<int>& A);


void TopDownMergeSort(std::vector<int>& A) {
    std::vector<int> B = std::vector<int>(A);//Create temp array with copy of A
    TopDownSplitMerge(B, 0, A.size(), A);   // sort data from B[] into A[]
}

// Sort the given run of array A[] using array B[] as a source.
// iBegin is inclusive; iEnd is exclusive (A[iEnd] is not in the set).
void TopDownSplitMerge(std::vector<int>& B, int iBegin, int iEnd, std::vector<int>& A) {
    if (iEnd - iBegin < 2) {                       // if run size == 1
        return;                                 //   consider it sorted
    }
    // split the run longer than 1 item into halves
    int iMiddle = (iEnd + iBegin) / 2;              // iMiddle = mid point
    // recursively sort both runs from array A[] into B[]
    TopDownSplitMerge(A, iBegin, iMiddle, B);  // sort the left  run
    TopDownSplitMerge(A, iMiddle, iEnd, B);  // sort the right run
    // merge the resulting runs from array B[] into A[]
    TopDownMerge(B, iBegin, iMiddle, iEnd, A);
}

//  Left source half is A[ iBegin:iMiddle-1].
// Right source half is A[iMiddle:iEnd-1   ].
// Result is            B[ iBegin:iEnd-1   ].
void TopDownMerge(std::vector<int>& A, int iBegin, int iMiddle, int iEnd, std::vector<int>& B) {
    int i = iBegin;
    int j = iMiddle;

    // While there are elements in the left or right runs...
    for (int k = iBegin; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iMiddle && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        }
        else {
            B[k] = A[j];
            j = j + 1;
        }
    }
}


int main(const int argc, const char** argv) {

    srand(time(NULL));

    std::vector<int> to_be_sorted;
    for (int i = 0; i < 15; i++) {
        to_be_sorted.push_back(rand() % 200);
    }

    //print the array
    for (int i = 0; i < 15; i++) {
        std::cout << to_be_sorted[i] << ",";
    }

    TopDownMergeSort(to_be_sorted);

    //print the array after
    std::cout << std::endl;
    for (int i = 0; i < 15; i++) {
        std::cout << to_be_sorted[i] <<",";
    }

    return 0;
}

*/