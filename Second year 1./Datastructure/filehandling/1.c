#include<stdio.h>
void main()
{
	FILE *f;
	f=fopen("abc.txt","a");
	char inp[255];
	int i=2;
	while (i--)
	{
		gets(inp);
		fprintf(f,"\n%s",inp);
	}
	fclose(f);
}
