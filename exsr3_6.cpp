#include <stdio.h>
int main(void)
{    
	float r,c,s;
	int k;
	scanf("%f%d",&r,&k); 
	c=2*3.14*r;
	s=r*r*3.14; 
	if(k==1)
		printf("s=%f",s);
	else  if(k==2)
		printf("c=%f",c); 
	else  if(k==3)  
		printf("c=%f  s=%f",c,s);
	}
