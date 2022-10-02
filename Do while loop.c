#include<stdio.h>
int main()
{
	int time;
	do
	{
	printf("HELLO! \nI am Aj\n");
	printf("ENTER THE TIME\n\n");
	scanf("%i",&time);
	if(time <12)
	{ printf("Hey! Good Morning\n\n");
	}else if (time<16 && time >=12)
	{printf("Hey! Good Afternoon\n\n");
	}else if (time<20&&time>=16)
	 {printf("hey! Good Evening\n\n");}
	else if (time<24&&time>=20)
	 {printf("Good Night\n\n");
	 }else
	 {printf("Invalid Time\n\n");
	 }
	}while(time>0);
	return 0;
}
