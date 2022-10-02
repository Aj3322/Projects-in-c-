#include<stdio.h>
int main()
{

	int time;
	
	printf("HELLO! \n\nI am Aj\n\n");
	printf("ENTER THE TIME\n\n");
	scanf("%i",&time);
	if(time <12)
	{ printf("Hey! Good Morning\n");
	}else if (time<16 && time >=12)
	{printf("Hey! Good Afternoon\n");
	}else if (time<20&&time>=16)
	 {printf("hey! Good Evening\n");}
	else if (time<24&&time>=20)
	 {printf("Good Night\n");
	 }else
	 {printf("Invalid Time\n");
	 }
	
	return 0;
}
