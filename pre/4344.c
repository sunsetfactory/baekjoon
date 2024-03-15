#include <stdio.h>

int main(){
    int c; 
    int i, j, sum, score[1000];
    double n, ave, hss, hc;
    scanf("%d", &c);
    double res[c];
    j = 0;
    while (j < c){
        i = 0, sum = 0;
        scanf("%lf", &n);
        while (i < n){
            scanf("%d", &score[i]);
            sum += score[i];
            i++;
        }
        ave = (double)(sum / n);
        hc = 0;
        i = 0;
        while (i < n) {
            if((double)score[i] > ave)
                hc++;
            i++;
        }
        hss = (double)((double)(hc / n) * 100);
        res[j] = hss;
        j++;
    }
    j = 0;
    while (j < c){
        printf("%.3f%%\n", res[j]);
        j++;
    }
}