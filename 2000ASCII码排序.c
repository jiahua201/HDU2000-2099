#include <stdio.h>
main(void)
{
	char a,b,c,d,t;
	while(scanf("%c%c%c%c",&a,&b,&c,&d) != EOF)   // 用d来接回车
	{
		if(a>b) t=a,a=b,b=t;
		if(a>c) t=a,a=c,c=t;
		if(b>c) t=b,b=c,c=t;
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
}

