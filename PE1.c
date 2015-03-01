#include <stdio.h> 

int main ()


{
	int i, sum = 0;

	for(i=0; i<1000; i++)
	{ 
		printf("%d\n",sum);
		if(i % 3 == 0) 
		{
			sum = sum + i;
		}
 
		else if(i % 5 == 0) 
		{
			sum = sum + i;
		}
	} 
	printf("%d\n", sum);
}
