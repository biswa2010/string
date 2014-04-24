#include<stdio.h>
#include<string.h>
int main()
{
        char a[20],b[20];
	int i,j;
        
        printf("Give the input for a :\n");
        scanf("%s",a);
	printf("Give a input to check substring\n");
	scanf("%s",b);
        for(j = 0; j < strlen(b); j++)
        {
	for(i = 0; i< strlen(a);i++)
	{
		while(a[i] == b[j])
		{
			
	
		}
	
	}        

	
	}

        printf("No. of vowels:%d\t\tand\t\t No. of consonants:%d \n",v_count,strlen(a) - v_count);


        return 0;
}

