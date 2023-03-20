#include <stdio.h>

int module1(int a, int b){
    int c = a % b;

    while(c){
        a = b;
        b = c;
        c = a % b;
    }
    printf("%d\n", b);
    return b;
}
int module2(int a, int b){
	return ((a * b) / module1(a, b));
}
int main (){
    int a, b;

    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d", module2(a, b));
    else
        printf("%d", module2(b, a));
}