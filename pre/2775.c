#include <stdio.h>

int main (){
    int t, k, n;
    int i, j;
    int arr[15][15] = {0, };

    j = 1;
    while (j < 15){
        arr[0][j] = j;
        j++;
    }
    i = 1;
    while (i < 15){
        j = 1;
        while (j < 15){
            arr[i][j] = arr[i-1][j] + arr[i][j - 1];
            j++;
        }
        i++;
    }
    scanf("%d", &t);
    while(t){
        scanf("%d %d", &k, &n);
        printf("%d\n", arr[k][n]);
        t--;
    }
    return (0);
}