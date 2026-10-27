#include <stdio.h>

int main() {
    int a[] = {2, 7, 11, 15};
    int n = 4, target = 9;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }

    return 0;
}