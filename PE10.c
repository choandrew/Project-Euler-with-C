
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int is_prime(long long x) {
	long long i;
	for (i = (long long)(sqrt(x)) + 1; i > 1; i--)
   		if (x % i == 0)
            return 0;
	 return 1;
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("You have to input something!\n");
		exit(1);
	}
	int n = atoi(argv[1]);
	long long p, sum = 2;
	for(p = 3; p <= n; p+=2)
	{
		while(!is_prime(p))
			p+=2;
		if(p <= n)
			sum += p;
	}
	printf("%lld\n", sum);
	return 0;
}
