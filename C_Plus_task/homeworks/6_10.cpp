#include <iostream>

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a = 1, b = 2;
    int *i = &a, *j = &b;
    swap(i, j);
    std::cout << a << b << std::endl;
    return 0;
}
