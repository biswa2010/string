#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i;
        printf("Give the input for a :\n");
        scanf("%s",a);
	for(i = 0; i < strlen(a); i++)
	{
		if(96 < a[i] && a[i]<123)//use this condition carefully ,boz it may roundtrip and will access the values after 128
		{
			a[i]=a[i]-32;
		}
	}
	printf("so the string in uppercase is: %s\n",a);


        return 0;
}

