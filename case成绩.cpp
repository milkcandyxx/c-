#include <stdio.h>
int main(int argc, char *argv[])
{
	int s,g ;
	printf("����ɼ�0~100��") ; 
	scanf("%d",&s) ;
	g=s/10 ;
	switch(g){
		case 10:
		case 9:
			printf("%d����\n",s) ;
		break ;
		case 8:
			printf("%d����\n",s) ;
		break ;
		case 7:
			printf("%d����\n",s) ;
		break ;
		case 6:
			printf("%d������\n",s) ;
		break ;
		default : 
			printf("%d��������\n",s) ;
		break ;
	}
	return 0;
}