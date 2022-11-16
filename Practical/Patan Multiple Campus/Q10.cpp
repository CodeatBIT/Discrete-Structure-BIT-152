// Q10. Write a program to find power set of a set.
#include <stdio.h>
#include <math.h>
int main()
{
	char set[] = {'a','b','c'};
	int set_size = sizeof(set)/sizeof(char);
    int pow_set_size = pow(2, set_size);
    int counter, j; 
    printf("{");
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	printf("{");
    	for(j = 0; j < set_size; j++)
		{			
    		if(counter & (1<<j))
        		printf("%c,", set[j]);
    	}
    	printf("},");
    }
    printf("}");
}
