#include<stdio.h>
#include<string.h>
int main()
{

	int n,i,j;
	char a[20],b[20];
	//int n,i,j;
	printf("Give the input for a :\n");
	scanf("%s",a);

	printf("Give the input for b :\n");
	scanf("%s",b);

	n = strlen(a) + strlen(b);
	char s[n];	
	for(i = 0; i < strlen(a);i++)
	{
		s[i] = a[i];
	
	}
	for(i,j=0 ; i < n, j < strlen(b);i++,j++)
	{
		s[i] = b[j];
	}

	printf("th concatenated string is: %s\n",s);


	//printf("The concatenated string is: %s\n",a);
	return 0;
}
