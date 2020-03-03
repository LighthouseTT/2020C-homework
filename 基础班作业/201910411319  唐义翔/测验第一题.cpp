#include <stdio.h>
# include <math.h>

int main()
{
	int n=1,count =1;
	float x;
	double sum,term;
	printf("input x:");
	scanf("%f",&x);
	sum=x;
	term=x;
	do{
		term=-term*x*x/((n+1)*n);
		sum=(x+term)/x;
		n=n+2;
		count++;
	}while(fabs(term)>=1e-3);
	printf("cos(x)=%g,count=%d\n",sum,count);
	return 0;
}
