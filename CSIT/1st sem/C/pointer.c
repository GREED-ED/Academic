#include<stdio.h>
#include<conio.h>
int main()
{
	int u=3;
	int v;
	int *pu;
	int *pv;
	pu=&u;
	v=*pu;
	pv=&v;
	printf("\nu=%d &u=%x pu=%x *pu=%d",u,&u,pu,*pu);
	printf("\nv=%d pv=%x pv=%x *pv=%d",v,&v,pv,*pv);
	getch();
} 
