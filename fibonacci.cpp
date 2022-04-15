#include "fibonacci.h"

void fibonacci::kalkulasi_iterasi(int n) {
    int a = 0, b = 1, c = 0;

    for (int i = 1; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        std::cout << c << " ";
    }
}


int rekursif(int n) {
    if (n <= 1) {
        return 1;
    }

    if(n==0 || n==1)
        return n;
    else
        return rekursif(n-1) + rekursif(n-2);
}

void fibonacci::kalkulasi_rekursif(int n) {
    int i = 1;
    while (i <= n) {
        std::cout << rekursif(i) << " ";
        i++;
    }
}
