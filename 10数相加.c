#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=1,sum=0,b;
	while(i<=10){
		printf("�������%d����:",i) ;
		scanf("%d",&b) ;
		sum+=b ;
		i++ ;
		
	}
	printf("�ܺ�Ϊ%d",sum) ;
	return 0;
}