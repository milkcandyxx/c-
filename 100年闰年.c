#include <stdio.h>
int main(int argc, char *argv[])
{
	int y=1924 ; 
	while (y<=2024){
		if((y%4==0&&y%100!=0)||y%400==0){
			printf("%d\n",y) ;
			}
		y++ ;
		}
	return 0;
}