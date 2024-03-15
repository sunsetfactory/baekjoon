#include <stdio.h>

int toss(int n){
    if (n < 10)
        n = n * 10 + n;
    else
        n = ((n % 10) * 10) + (((n % 10) + (n / 10)) % 10);
    return (n);
}

int main(){
    int n, a, b;
    int tmp = 0;
    int res = 0;

    scanf("%d", &n);
    tmp = n;
    while (1){
        tmp = toss(tmp);
        res++;
        if (n == tmp)
            break ;
    }
    printf("%d", res);
    return (0);
}