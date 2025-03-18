#include <stdio.h>
int main(int argc, char *argv[])
{
	int y,m ;
	printf("输入年份y：") ;
	scanf("%d",&y)  ;
	printf("输入月份m：") ;
	scanf("%d",&m)  ;
	switch(m) {
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("%d有31天\n",m);
			break ;
		case 2 :
			if(y%4==0&&y%100!=0||y%400==0){
				printf("%d有28天\n",m);
			}
			else{
				printf("%d有29天\n",m);
			}
			break ;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("%d有30天\n",m);
			break ;
		default:
			printf("月份非法\n");
			break ;
	}
	return 0;
}