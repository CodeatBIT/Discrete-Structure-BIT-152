// Q14. Write a program to find permutation and combination.

#include <stdio.h>
long fact( int n)
{
	long f = 1;
	int i;
	for(i = 1; i <= n; i++)
		f *= i;
	return f;
}
int main() 
{
	int n, r;
	long p, c;
	printf("Enter n & r:\n");
	scanf("%d%d", &n, &r);
	p = fact(n) / fact(n - r);
	c = fact(n) / (fact(r) * fact(n - r));
	printf("p(%d, %d) = %ld", n, r, p);
	printf("\nc(%d, %d) = %ld", n, r, c);	
}
