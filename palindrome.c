#include<stdio.h>
#include<string.h>

int main() 
{
	char *a,b[100];
	int i,n;
	printf("Give your input\n");
	scanf("%s",a);//dont use %c
//	printf("another input \n");
//	scanf("%s",b);
	printf("your input is:%s\n",a);
	n=strlen(a);//not sizeof
	for(i=0;i < n/2;i++)
	{
//		printf("i:%d\n(n):%d\n",i,n);
		if(a[i] != a[n-1-i])
		{
			printf("its not a palindrome\n");
			return;
		}
//		if(i == n/2)
//			printf("ya it is palindrome");
	}
		if(i == n/2)
			printf("ya it is palindrome");
//	printf("Reverced string:%s",strrev(b));
	//if(a ==strrev(a))
	//printf("palindrome");


//	printf("%s",a);
//	puts(a);
	//gets(a);
	return 0;

}
