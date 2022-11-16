// Q12c. Write recursive programs to greatest common divisor.

#include<stdio.h>
int gcd(int p, int q)
{
	if(p % q == 0)
		return q;
	else
		return gcd(q, p % q);
}
int main()
{
	int p, q, g;
	printf("Enter two numbers:\n");
	scanf("%d%d", &p, &q);
	g = gcd(p, q);
	printf("gcd(%d, %d) = %d", p, q, g);	
}

