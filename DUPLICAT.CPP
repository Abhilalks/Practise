#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20];
	int l,j,ip;
	clrscr();
	printf("Enter a sting\n");
	gets(s1);
	l=strlen(s1);
	printf("Duplicate characters are\n");
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s1[i]==s1[j])
			{
				printf("%c",s1[i]);
			}
		}
	}
	getch();
}

