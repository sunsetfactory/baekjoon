#include <stdio.h>
#include <string.h>

int main(){
    int i, j, len, max, res;
    char str[5000000];
    int cnt[26] = {0, };
    int word = 0;

    scanf("%s", str);
    len = strlen(str);
    i = 0;
    while (i < len){
        j = 'a';
        while(j <= 'z'){
            if(j == str[i])
                cnt[j-'a']++;
            j++;
        }
        j = 'A';
        while(j <= 'Z'){
            if(j == str[i])
                cnt[j-'A']++;
            j++;
        }
        i++;
    }

    max = cnt[0];
    i = 1;
    while(i < 26){
        if (max < cnt[i]){
            max = cnt[i];
            word = i;
        }
        i++;
    }
    i = 0;
    res = 0;
    while (i < 26){
        // printf("%d ", cnt[i]);
        if (max == cnt[i])
            res++;
        i++;
    }
    if (res >= 2)
        printf("?");
    else
        printf("%c", word+'A');
}