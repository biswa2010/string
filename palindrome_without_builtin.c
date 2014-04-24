#include<stdio.h>
#include<string.h>
//int string_length(char a[]);
int main()
{
        char a[100];
        int i,n;
        printf("Give your input\n");
        scanf("%s",a);//dont use %c
        printf("your input is:%s\n",a);
        n=string_length(a);//not sizeof
        for(i=0;i < n/2;i++)
        {
                if(a[i] != a[n-1-i])
                {
                        printf("its not a palindrome\n");
                        return;
                }
        }
                if(i == n/2)
                        printf("ya it is palindrome");
        return 0;

}

int string_length(char a[])
{
	int i,count=0;
for(i = 0; a[i] != '\0';i++)
        {
                ++count;

        }
return count;

}

