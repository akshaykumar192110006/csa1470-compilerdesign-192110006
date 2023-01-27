.#include<stdio.h>
int main()
{
	 char ch;
	 printf("enter the character:");
	 scanf("%c",&ch);
	 
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	printf("valid",ch);
	else
		printf("invalid",ch);
		
		return 0;
	 
	 
}
