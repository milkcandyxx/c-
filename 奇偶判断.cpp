#include <stdio.h>
int main(int argc, char *argv[])
{
	int a ;
	printf("����һ��������") ;  
	scanf("%d",&a);
	if(a!=0){
		if(a%2==0){
		printf("%dΪż��\n",a) ;
	} 
		else{
		printf("%dΪ����\n",a) ;
		}	
	}
	else{
		printf("%d�Ȳ�������Ҳ����ż��\n",a) ;
	}  
	return 0;
}