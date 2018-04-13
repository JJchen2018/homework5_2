#include"stdio.h"
int main()
{
	int I;
    double jiangJin;
	int c;

	printf("请输入当月的利润I ");
	scanf("%d",&I);

	c=I/100000;
	if(c>10)
	{
		c=10;
	}

	switch(c)
	{
	case 0:jiangJin=I*0.1;break;
	case 1:jiangJin=100000*0.1+(I-100000)*0.075;break;
	case 2:
	case 3:jiangJin=100000*0.1+100000*0.075+(I-200000)*0.05;break;
	case 4:
	case 5:jiangJin=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
	case 6:
	case 7:
	case 8:
	case 9:jiangJin=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;break;
	case 10:jiangJin=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;
	}
	printf("所发奖金总数为：%f",jiangJin);

	return 0;
}