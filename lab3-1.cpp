// odd numbers between 1 to n
#include<stdio.h>
int main()
{
	int n;
	printf(" enter the value of n");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
	
	if(i%2!=0)
	printf("%d ",i);
	
	}
	return(0);
}
