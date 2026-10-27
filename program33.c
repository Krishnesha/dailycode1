#include <stdio.h>

int main() {
    int a[5] = {10, 50, 20, 5, 40};
    int max = a[0], min = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);

    return 0;
}