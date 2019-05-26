#include<stdio.h>
 
int main()
{
int arr[32];
int m=0,i=0,count=0;
printf("请输入一个十进制数:\n");
scanf("%d",&m);
for(i=0;m!=0;i++)
    { 
        arr[i]=m%2;
        m=m/2;
        count=i+1;
    }
    for(;count<32;count++)
	{
	    arr[count]=0;
	}
    printf("转换为二进制后奇数位为:\n");
	for(i=31;i>=0;i-=2)
	    {
		printf("%d ",arr[i]);
	    }
	printf("\n");
	printf("转换为二进制后偶数位为：\n");
	    for(i=30;i>=0;i-=2)
	        {     
		    printf("%d ",arr[i]);
	        }
            printf("\n");
return 0;
}
