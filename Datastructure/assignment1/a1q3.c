# include<stdio.h>
# include<string.h>
void main(){
	FILE *fname ;
    char inp[30];
    gets(inp);
	fname=fopen("abc.txt","w+");
	printf("file created.\n");
	fputs(inp, fname);
	fputs("\n", fname);
	fclose(fname);
	printf("Data written in file abc.txt\n");	
}
