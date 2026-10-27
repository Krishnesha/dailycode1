#include <stdio.h>
int main(){
    int a[] = {1,2,3,4,5};
    int n=5, temp;

    for(int i=0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0; i<n; i++)
    printf("%d", a[i]);
    return 0;
    }
