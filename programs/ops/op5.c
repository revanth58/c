#include <stdio.h>

int main() {
    int a = 23,b=34;
    
    // swapping 2 numbers using a temporary variable
    /*int temp;
    temp =a;
    a=b;
    b=temp;*/

    // swapping 2 numbers without using a temporary variable
    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d %d\n",a,b);
}
