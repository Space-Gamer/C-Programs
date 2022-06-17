#include <stdio.h>
#include <string.h>

int main()
{
	int i,n;
	char fn[100],cont[1000]="";
	printf("Enter number of lines: ");
	scanf("%d",&n);
	FILE *fptr;
	printf("Enter file name: ");
	scanf("%s",fn);
	fptr = fopen(fn,"a");
	for (i=0;i<n;i++)
	{
	    char temp[100];
		printf("\nEnter line %d: ",i+1); 
		scanf(" %[^\n]s", temp);
	    strcat(temp,"\n");
	    strcat(cont,temp);
	}
	fprintf(fptr,"%s",cont);
	fclose(fptr);
	printf("Writing to file successfull\n");
}
