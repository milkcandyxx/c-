#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double f,m,b,g,h,w,BMI ;
	int flag ;
	char s ;
	system("title 身高体型判定系统") ;
 	printf("***************************\n") ;
 	printf(" 欢迎进入身高体型判定系统\n") ;
 	printf("***************************\n") ;
 	printf("            5\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" 欢迎进入身高体型判定系统\n") ;
 	printf("***************************\n") ;
 	printf("            4\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" 欢迎进入身高体型判定系统\n") ;
 	printf("***************************\n") ;
 	printf("            3\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" 欢迎进入身高体型判定系统\n") ;
 	printf("***************************\n") ;
 	printf("            2\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" 欢迎进入身高体型判定系统\n") ;
 	printf("***************************\n") ;
 	printf("            1\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	
 	printf("***************************\n") ;
 	printf("     请输入你的选择\n") ;
 	printf("     1.身高预测系统\n") ;
 	printf("     2.体重判定系统\n") ;
 	printf("***************************\n") ;
 	scanf("%d",&flag) ;
 	if(flag==1){
 		printf("输入你的母亲身高cm：") ;
		scanf("%lf",&m) ;
		printf("输入你的父亲身高cm：") ;
		scanf("%lf",&f) ;
		printf("输入你的性别男（m）女（f）：") ;
		scanf("%lf",&s) ;
		printf("***************************\n") ;
		if (s==m){
			h=(m+f)*1.08/2 ;	
		}
		else {
			h=(f+0.923*m)/2 ;
		}
	printf("预测身高为%.2lf",h) ;
 	} 
 	if(flag==2){
	 	printf("输入你的身高cm：") ;
		scanf("%lf",&h) ;
		printf("输入你的体重斤：") ;
		scanf("%lf",&w) ;
		BMI=w/2/(h/100*h/100) ;
		printf("***************************\n") ;
		printf("BMI=%.3lf\n",BMI) ;
		printf("***************************\n") ;
	 	if(BMI<=18.4) {
	 		printf("偏瘦\n") ; 
	 	}
	 	else if(BMI>=18.5&&BMI<=23.9) {
	 		printf("正常\n") ; 
	 	}
	 	else if(BMI>=24.0&&BMI<=27.9) {
	 		printf("过重\n") ; 
	 	}
	 	else if(BMI>=28.0) {
	 		printf("肥胖\n") ; 
	 	}
}
	return 0;
}