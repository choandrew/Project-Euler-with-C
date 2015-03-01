#include <stdio.h>
#include <math.h>

#define NUM 10001

int isprime(int n)
	{
	int i;
	for(i = 3;i <= sqrt(n); i += 2)
		{
		if (n%i == 0)
			return 0;
		} return 1;
	}

int main(int argc, char **argv)
	{
	int i,num = 1;

	for(i = 3;;i += 2)
		{
		if (isprime(i))
			{
			num ++;
			if (num == NUM)
				break;
		}
	}
	printf("Prime is: %d", i);
	return 0;
}
