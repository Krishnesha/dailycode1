#include <stdio.h>

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int sum = a[0], max = a[0];

    for(int i = 1; i < n; i++) {
        if(sum + a[i] < a[i])
            sum = a[i];
        else
            sum = sum + a[i];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);
    return 0;
}