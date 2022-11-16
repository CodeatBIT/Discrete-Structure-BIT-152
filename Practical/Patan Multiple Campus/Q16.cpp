// Q16. Write a program to implement Euclidean GCD algorithm.

#include <stdio.h>
int main()
{
	int m, n, p, q, r;
	printf("Enter two numbers:\n");
	scanf("%d%d", &m, &n);
	p = m;
	q = n;
	while(p % q != 0)
	{
		r = p % q;
		p = q;
		q = r;
	}
	printf("gcd(%d, %d) = %d", m, n, q);	
}
