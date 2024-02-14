//mintues convert into hour and mintues ex- 65min=1hour:5mintues
#include<stdio.h>
void main()
{
	int hour,min,rm;
	printf("Enter the min ");
	scanf("%d",&min);
	hour=min/60;
	rm=min%60;
	printf("%d hour %d min",hour,rm);
}
