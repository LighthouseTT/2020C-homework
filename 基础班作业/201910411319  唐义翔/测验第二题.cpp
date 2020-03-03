#include <stdio.h>
#include<stlib.h>

define n<=1000

int fun(int n)
{
	int j,b,c,m,flag=0;
	for(b=1;b<=n+2;b++)
	{
		m=n;
		c=b;
		while(m!0&&m>=c)
		{
			m=m-c;
			c++;
		}
		if(m=0)
		{
			printf("%d=",n);
			for(j=b;j<c-1;j++)
			printf("%d+",j);
			printf("%d\n",j);
			flag=1;
		}
	}
	if(flag=0)
	printf("不能分解\n");
}

int main(){
	int n;
	priintf("请输入一个整数:");
	scanf("%d",&n);
	fun(n);
	system("pause");
	return 0;
}
