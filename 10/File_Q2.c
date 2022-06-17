/*
Problem statement: To input a file name and create it. Also accept number of lines(n). Accept n line of inputs and write to the file created.
*/

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

/*
Input:
Enter number of lines: 5
Enter file name: test.txt

Enter line 1: Hello World!

Enter line 2: This is second line

Enter line 3: abc cde

Enter line 4: def efg fgh

Enter line 5: End Of File z.

Output:
<Contents of test.txt>:
Hello World!
This is second line
abc cde
def efg fgh
End Of File z.
