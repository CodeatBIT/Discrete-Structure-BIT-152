// Q12b. Write recursive programs to find power.

#include<stdio.h>
long power(int b, int n)
{
	if(n == 0)
		return 1;
	else
		return b * power(b, n - 1);
}
int main()
{
	int b, n;
	long p;
	printf("Enter two numbers:\n");
	scanf("%d%d", &b, &n);
	p = power(b, n);
	printf("power(%d,%d) = %ld", b, n, p);	
}

