#include <stdio.h>
int main(int argc, char *argv[])
{
	int s,g ;
	printf("输入成绩0~100：") ; 
	scanf("%d",&s) ;
	g=s/10 ;
	switch(g){
		case 10:
		case 9:
			printf("%d：优\n",s) ;
		break ;
		case 8:
			printf("%d：良\n",s) ;
		break ;
		case 7:
			printf("%d：中\n",s) ;
		break ;
		case 6:
			printf("%d：及格\n",s) ;
		break ;
		default : 
			printf("%d：不及格\n",s) ;
		break ;
	}
	return 0;
}