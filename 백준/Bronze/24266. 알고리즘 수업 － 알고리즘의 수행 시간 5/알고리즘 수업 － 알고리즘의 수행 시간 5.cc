#include <iostream>

int main()
{
	long long n;
	std::cin >> n;

	std::cout << n * n * n << '\n' // 수행 횟수: n^3
			  << 3 << '\n';		   // 최고차항의 차수: 3
}
