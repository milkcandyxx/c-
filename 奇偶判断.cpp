#include <stdio.h>
int main(int argc, char *argv[])
{
	int a ;
	printf("输入一个整数：") ;  
	scanf("%d",&a);
	if(a!=0){
		if(a%2==0){
		printf("%d为偶数\n",a) ;
	} 
		else{
		printf("%d为奇数\n",a) ;
		}	
	}
	else{
		printf("%d既不是奇数也不是偶数\n",a) ;
	}  
	return 0;
}