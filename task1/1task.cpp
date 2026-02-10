#include <iostream>
#include <vector>
#include <cmath>

#ifndef MY_TYPE
#define MY_TYPE double
#endif

int main() {
    int N = 10000000;
    std::vector<MY_TYPE> arr(N);
    MY_TYPE sum = 0;

    for (int i = 0; i < N; i++) {
        arr[i] = sin(2 * M_PI * i / N);
        sum += arr[i];
    }

    if (sizeof(MY_TYPE) == 8) {
        std::cout << "Type: DOUBLE" << std::endl;
    } else {
        std::cout << "Type: FLOAT" << std::endl;
    }
    
    std::cout << "Sum: " << sum << std::endl;
}
