你好#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n; // n lines
    scanf ("%d", &n);

    int count = 1;
    int Y[n], M[n];
    int sort_Y[n], sort_M[n];
    char a[n][100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%s", a[i]);
        Y[i] = (a[i][0] - 48) * 1000 + (a[i][1] - 48) * 100 + (a[i][2] - 48) * 10 +
               (a[i][3] - 48) * 1;
        M[i] = (a[i][5] - 48) * 10 + (a[i][6] - 48) * 1;
    }
    for (i = 0; i < n; i++) {
        if (M[i + 1] == M[i]){
            count++;
        }
        else{
            printf("%d-%02d:%d\n",Y[i],M[i],count);
            count = 1;
        }
    }
    return 0;
}

