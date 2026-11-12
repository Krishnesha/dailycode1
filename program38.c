#include <stdio.h>

int main() {
    int n, m, i, j, k = 0;
    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], finish[10] = {0}, safe[10];
    int work[10], found;

    printf("Enter processes and resources: ");
    scanf("%d%d", &n, &m);

    printf("Enter Allocation matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &alloc[i][j]);

    printf("Enter Max matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &max[i][j]);

    printf("Enter Available resources:\n");
    for(j=0;j<m;j++) {
        scanf("%d", &avail[j]);
        work[j] = avail[j];
    }

    // Calculate Need
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            need[i][j] = max[i][j] - alloc[i][j];

    // Safety Algorithm
    while(k<n) {
        found = 0;

        for(i=0;i<n;i++) {
            if(finish[i] == 0) {
                for(j=0;j<m;j++)
                    if(need[i][j] > work[j])
                        break;

                if(j==m) {
                    for(j=0;j<m;j++)
                        work[j] += alloc[i][j];

                    safe[k++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }

        if(found == 0)
            break;
    }

    if(k==n) {
        printf("System is in Safe State\n");
        printf("Safe Sequence: ");
        for(i=0;i<n;i++)
            printf("P%d ", safe[i]);
    }
    else
        printf("System is in Unsafe State");

    return 0;
}
