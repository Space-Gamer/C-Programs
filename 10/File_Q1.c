#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];
	FILE *fptr1, *fptr2, *fptr3;
	fptr1 = fopen("file1.txt","r");
	fptr2 = fopen("file2.txt","r");
	fscanf(fptr1, "%[^\n]s", a);
	fscanf(fptr2, "%[^\n]s", b);
	printf("Contents of file1: %s\n",a);
	printf("Contents of file2: %s\n",b);
	fclose(fptr1);
	fclose(fptr2);
	fptr3 = fopen("file3.txt","w");
	fprintf(fptr3, "%s\n%s", a, b);
	printf("Combined to file3.\n");
	fclose(fptr3);	
}
