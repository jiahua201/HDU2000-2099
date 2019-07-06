/*#include<stdio.h>
int main(void)
{
	double a;
	while(scanf("%lf",&a) != EOF)
	{
		if (a<0)
		{
			a=-a;
			printf("%.2lf",a);
		}
		else
		printf("%.2lf",a);
	}
	return 0;
}*/
#include <math.h>
#include <stdio.h>
int main(void)
{
    double r;

    while (scanf("%lf", &r) != EOF)
        printf("%.2lf\n", fabs(r));

    return 0;
}
