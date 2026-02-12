#include <stdio.h>
int main() {
    int x = 20;
    int *ptr = &x;
    printf("Value: %d", *ptr);
    return 0;
}