### BaekJoon : 4153
### Title    : 직각삼각형
### URL      : https://www.acmicpc.net/problem/4153

* 문제
```
직각삼각형의 세 변의 길이가 주어졌을 때, 이 삼각형이 직각삼각형인지 판단하는 프로그램을 작성하시오.
```

* 입력
```
여러 개의 테스트 케이스로 이루어져 있으며, 마지막 줄에는 0이 세 개 주어진다. 각 테스트 케이스는 변의 길이를 의미하는 세 자연수 a, b, c (1 ≤ a, b, c ≤ 30,000)가 주어진다. 삼각형의 세 변의 길이를 나타내는 입력은 한 줄로 이루어져 있다.
```

* 출력
```
각 테스트 케이스에 대해서, 직각삼각형이 맞다면 "right"를, 아니라면 "wrong"을 출력한다.
```

* 예제 입력 1 
```
6 8 10
25 52 60
5 12 13
0 0 0
```

* 예제 출력 1
```
right
wrong
right
```

* 풀이
```
삼각형의 세 변 중 가장 긴 변의 길이의 제곱이 나머지 두 변의 길이의 제곱 합과 같지 않다면 직각삼각형이 아니다.
```
