#include <iostream>
#include "fibonacci.h"

int main() {
    fibonacci f;
    std::cout << "Iteration method: "; f.kalkulasi_iterasi(6); std::cout << std::endl;
    std::cout << "Recursive method: "; f.kalkulasi_rekursif(6); std::cout << std::endl;
}
