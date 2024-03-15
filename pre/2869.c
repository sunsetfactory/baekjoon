#include <stdio.h>

int main(){
    int u, d, f;
    int chk = 0, cnt = 0;

    scanf("%d %d %d", &u, &d, &f);
    // while (1){
    //     cnt++;
    //     chk += u;
    //     if(chk >= f){
    //         printf("%d", cnt);
    //         break ;
    //     }
    //     chk -= d;
    // }
    printf("%d", ((f - d - 1) / (u - d) + 1));
    return (0);
}