#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double f,m,b,g,h,w,BMI ;
	int flag ;
	char s ;
	system("title ��������ж�ϵͳ") ;
 	printf("***************************\n") ;
 	printf(" ��ӭ������������ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	printf("            5\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" ��ӭ������������ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	printf("            4\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" ��ӭ������������ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	printf("            3\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" ��ӭ������������ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	printf("            2\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	printf("***************************\n") ;
 	printf(" ��ӭ������������ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	printf("            1\n") ;
 	Sleep(1000) ;
 	system("cls") ;
 	
 	printf("***************************\n") ;
 	printf("     ���������ѡ��\n") ;
 	printf("     1.���Ԥ��ϵͳ\n") ;
 	printf("     2.�����ж�ϵͳ\n") ;
 	printf("***************************\n") ;
 	scanf("%d",&flag) ;
 	if(flag==1){
 		printf("�������ĸ�����cm��") ;
		scanf("%lf",&m) ;
		printf("������ĸ������cm��") ;
		scanf("%lf",&f) ;
		printf("��������Ա��У�m��Ů��f����") ;
		scanf("%lf",&s) ;
		printf("***************************\n") ;
		if (s==m){
			h=(m+f)*1.08/2 ;	
		}
		else {
			h=(f+0.923*m)/2 ;
		}
	printf("Ԥ�����Ϊ%.2lf",h) ;
 	} 
 	if(flag==2){
	 	printf("����������cm��") ;
		scanf("%lf",&h) ;
		printf("����������ؽ") ;
		scanf("%lf",&w) ;
		BMI=w/2/(h/100*h/100) ;
		printf("***************************\n") ;
		printf("BMI=%.3lf\n",BMI) ;
		printf("***************************\n") ;
	 	if(BMI<=18.4) {
	 		printf("ƫ��\n") ; 
	 	}
	 	else if(BMI>=18.5&&BMI<=23.9) {
	 		printf("����\n") ; 
	 	}
	 	else if(BMI>=24.0&&BMI<=27.9) {
	 		printf("����\n") ; 
	 	}
	 	else if(BMI>=28.0) {
	 		printf("����\n") ; 
	 	}
}
	return 0;
}