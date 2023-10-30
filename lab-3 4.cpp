#include<stdio.h>
int main()
{
	char alphabet;
	alphabet='a';
	printf("lowercase aplhabet:");
	while(alphabet<='z')
	{
		printf("%c",alphabet);
		alphabet++;
	}
	return(0);
}
