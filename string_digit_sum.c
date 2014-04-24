#include<stdio.h>
#include<string.h>
int main()
{
        char a[20];
        int i,sum=0;
        printf("Give the input for a :\n");
        scanf("%s",a);
        for(i = 0; i < strlen(a); i++)
        {
                if(47 < a[i] && a[i]<58)//use this condition carefully ,boz it may roundtrip and will access the values after 128
                {
                   sum=sum+a[i]-48     ;
                }
        }
        printf("so the sum of the digits present in the string is: %d\n",sum);


        return 0;
}

