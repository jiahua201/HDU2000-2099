#include<stdio.h>
#include <math.h>
int main()
{
	double x[2],y[2];
	//double a;
	while(scanf("%f%f%f%f",&x[0],&y[0],&x[1],&y[1]) != EOF)
		//a=sqrt(((x[1]-x[0])*(x[1]-x[0])) + ((y[1]-y[0])*(y[1]-y[0])));  
			//printf("%.2",a);输不出结果
			 
		printf("%.2f\n",sqrt(((x[1]-x[0])*(x[1]-x[0])) + ((y[1]-y[0])*(y[1]-y[0]))));
		/*while (scanf("%lf%lf%lf%lf", x, y, x+1, y+1) != EOF)
        printf("%.2f\n", sqrt((x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0])));*/
		return 0;
 } 
