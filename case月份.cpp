#include <stdio.h>
int main(int argc, char *argv[])
{
	int y,m ;
	printf("�������y��") ;
	scanf("%d",&y)  ;
	printf("�����·�m��") ;
	scanf("%d",&m)  ;
	switch(m) {
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("%d��31��\n",m);
			break ;
		case 2 :
			if(y%4==0&&y%100!=0||y%400==0){
				printf("%d��28��\n",m);
			}
			else{
				printf("%d��29��\n",m);
			}
			break ;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("%d��30��\n",m);
			break ;
		default:
			printf("�·ݷǷ�\n");
			break ;
	}
	return 0;
}