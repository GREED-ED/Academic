//difference between two times (in hours,minutes,second)passing structure to function(difference should bbe in pointer)
#include<stdio.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
}
void difference(struct time t1,struct time t2,struct time*differ);
int main()
{
	struct time t1,t2,differ;
	printf("enter 1st time");
	scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
		printf("enter 2st time");
	scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
	difference(t1,t2,&differ);
	printf("%d%d%d",diff.hours,diff.minutes,diff.seconds);
	void difference(struct time t1,struct time t2,struct time*differ)
	{
		if(t2.seconds>t1.seconds)
		{
			t1.minutes --;
			t1.seonds+=60
		}
		differ->seconds=t1.second-t2.seconds;
		if(+2minutes>+1.minutes)
		{
			+1.hour --;
			+t.minutes+=60;
			
		}
		differ->minutes=t1.minutes-+2.minutes;
			differ->seconds=t1.second-t2.seconds;
	}
	
}
