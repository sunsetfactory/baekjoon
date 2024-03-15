#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, N, K, cnt, idx;
    int *yos;

	scanf("%d %d", &N, &K);
	yos = (int *)malloc(sizeof(int) * N);
    i = 0;
    while (i < N){
        *(yos + i) = i + 1;
        i++;
    }
	printf("<%d", *(yos + K - 1));
    *(yos + K - 1) = -1;
    i = 0;
    idx = K;
    while (i < N){
        cnt = 0;
        j = -1;
        while (cnt < K){
            j += 1;
            if (*(yos + idx + j) % N != -1)
            	cnt += 1;
        }
        idx = (idx + j) % N;
        printf(", %d", *(yos + idx));
        *(yos + idx) = -1;
        i++;
		if (i > N)
			i -= N;
    }
	printf(">");
	return 0;
}