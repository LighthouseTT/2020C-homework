#include <stdio.h>

int main()
{
	int den,num,temp;
	printf("���������");
	scanf("%d",&num);
	printf("�������ĸ");
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
				printf("Լ�ֺ�Ϊ%d%d",temp,num);
				
			}
		else temp--;
		
	}else printf("û�й�Լ��");
	 
	}
      else printf("�����1");
	if(den==0) 
	printf("NONE");
	return 0;
}
