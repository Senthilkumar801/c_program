#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr =NULL;
	ptr =arr;
	while(ptr<=&arr[9])
	{
		if(*ptr%2==0)
			printf("even number:%d\n",*ptr);
		else
			printf("odd number:%d\n",*ptr);
		ptr++;
	}
	return 0;
}
