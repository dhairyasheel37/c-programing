#include <stdio.h>

int main(void) 
{
	int withdraw ;
	float Ibalance ;
	scanf("%d %f,&Ibalance",&withdraw,&Ibalance);
	if(withdraw % 5 == 0 && Ibalance >= withdraw + 0.50)
	{
	    Ibalance= Ibalance - withdraw - 0.50;
	}
	printf("%0.2f",Ibalance);

}

