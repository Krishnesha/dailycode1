#include <stdio.h>

int main() {
    int a[] = {10, 50, 30, 40, 20};
    int max = -999999, second = -999999;

    for(int i = 0; i < 5; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}