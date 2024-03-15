#include <stdio.h>

int calculation(int n){
    int res = n;
    
    while(n)
    {
        res += (n % 10);
        n /= 10;
    }
    return(res);
}

int main (){
    int i, n, sn;
    int arr[20000];

    n = 1;
    while (n < 10001){
        sn = calculation(n);
        arr[sn]++;
        n++;
    }
    i = 1;
    while (i < 10000){
        if (arr[i] == 0)
            printf("%d\n", i);
        i++;
    }
}