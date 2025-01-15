#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	char s2[30];
	
	printf("Enter a name: ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	

    if(strcmp(s1,s2)==0)
	printf("It is a palindrome\n");
	else
	printf("It is not a palindrome\n");
	
	
	
}
