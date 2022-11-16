// Q12a. Write recursive programs to find factorial of a number.

#include<stdio.h>
long factorial(int n)
{
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int n;
	long f;
	printf("Enter a number:");
	scanf("%d", &n);
	f = factorial(n);
	printf("%d! = %ld", n, f);	
}

