#include<stdio.h>
int main()
{
	char a;
	a='A';
	printf("uppercase alphabets: ");
	while(a<='Z')
	{
		printf("%c",a);
		a++;
	}
	return(0);
}
