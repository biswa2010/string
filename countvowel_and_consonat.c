#include<stdio.h>
#include<string.h>
int main()
{
        char a[20];
        int i,v_count=0;
        printf("Give the input for a :\n");
        scanf("%s",a);
        for(i = 0; i < strlen(a); i++)
        {
                if(96 < a[i] && a[i]<123)//use this condition carefully ,boz it may roundtrip and will access the values after 128
                {
                        a[i]=a[i]-32;
                }
		
		if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I'|| a[i] == 'O' || a[i] == 'U')
		{
			++v_count;
		}
        }

	printf("No. of vowels:%d\t\tand\t\t No. of consonants:%d \n",v_count,strlen(a) - v_count);


        return 0;
}


