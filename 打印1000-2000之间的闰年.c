#include <stdio.h>
main()
{
	int year=0;
	int count=0;
	printf("1000-2000之间的闰年：\n");
	for (year=1000; year<=2000; year++)
	{
		if ((year%4==0 &&year%100 !=0 ) ||(year %400 ==0))
		{
			printf("%d  ",year);
			count++;
		}
		
	}
	printf("\n");
	printf("共%d年",count);
	
 } 
