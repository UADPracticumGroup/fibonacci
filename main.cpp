#include "fibonacci.h"

int main() {
    fibonacci f;
    std::cout << "Masukan input nya: ";
    int input; std::cin >> input;

    std::cout << "Iteration method: "; f.kalkulasi_iterasi(input); std::cout << std::endl;
    std::cout << "Recursive method: "; f.kalkulasi_rekursif(input); std::cout << std::endl;
}
