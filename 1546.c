#include <stdio.h>

int main(){
    double n, a[1000], high = 0, sum = 0;
    int i = 0;

    scanf("%lf", &n);
    while (i < n){
        scanf("%lf", &a[i]);
        if (high < a[i])
            high = a[i];
        i++;
    }
    i = 0;
    while (i < n){
        a[i] = (a[i] / high) * 100;
        sum += a[i];
        i++;
    }
    printf("%f", (sum / n));
}