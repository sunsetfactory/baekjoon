#include <stdio.h>

int pnchk(int n){
    int i;

    if (n < 2){
        return (0);
    }
    i = 2;
    while (i < n){
        if ((n % i) == 0)
            return(0);
        i++;
    }
    return(1);
}

int main (){
    int n, pn, cnt = 0;
    scanf("%d", &n);

    while (n){
        scanf("%d", &pn);
        if (pnchk(pn))
            cnt++;
        n--;
    }
    printf("%d", cnt);
}