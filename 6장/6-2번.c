#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", k % 10);
            k++;
        }
        printf("\n");
    }

    return 0;
}
