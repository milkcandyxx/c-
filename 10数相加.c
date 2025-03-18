#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=1,sum=0,b;
	while(i<=10){
		printf("请输入第%d个数:",i) ;
		scanf("%d",&b) ;
		sum+=b ;
		i++ ;
		
	}
	printf("总和为%d",sum) ;
	return 0;
}