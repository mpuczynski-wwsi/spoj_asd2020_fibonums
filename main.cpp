#include <stdio.h>
#include <unordered_map>

std::unordered_map<unsigned long long, unsigned long long> FibMap;

unsigned long long fib(unsigned long long n)
{
	if (n < 2) return 1;
	if (FibMap.find(n) != FibMap.end()) return FibMap[n];
	FibMap[n] = (fib((n + 1) / 2) * fib(n / 2) 
		+ fib((n - 1) / 2) * fib((n - 2) / 2)) % 1000000007UL;
	return FibMap[n];
}


int main()
{
	int T;
	scanf("%u", &T);
	for (int i = 0; i < T; ++i)
	{
		unsigned long long n;
		scanf("%llu", &n);

		printf("%llu\n", fib(n-1));
	}
	return 0;
}