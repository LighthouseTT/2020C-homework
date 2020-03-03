#include <stdio.h>

int main()
{
	int den,num,temp;
	printf("请输入分子");
	scanf("%d",&num);
	printf("请输入分母");
	scanf("%d",&den);
	if(num!=den)
	{
		temp=den>num?den:num;
		if(temp>1)
		{
			if(den%temp==0&&num%temp==0)
			{
				den=den/temp;
				num=num/temp;
				printf("约分后为%d%d",temp,num);
				
			}
		else temp--;
		
	}else printf("没有公约数");
	 
	}
      else printf("结果是1");
	if(den==0) 
	printf("NONE");
	return 0;
}
