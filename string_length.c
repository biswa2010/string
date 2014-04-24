#include<stdio.h>
#include<string.h>
int main()
{

        int count=0,i=0;
        char a[20];
        //int n,i,j;
        printf("Give the input for a :\n");
        scanf("%s",a);

        for(i = 0; a[i] != '\0';i++)
	{
		++count;
		
	}
	printf("String length is: %d\n",count);
	return 0;

}
