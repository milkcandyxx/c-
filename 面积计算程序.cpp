 #include <stdio.h>
 #include <windows.h>
 #include <math.h>


void triangle(){
	double a,h,s;
	printf("���������εĵͣ�") ;
	scanf("%lf",&a) ;
	printf("�����������εĸ�") ;
	scanf("%lf",&h) ;
	s=a*h/2.0 ;
	printf("�����ε�����ǣ�%.2lf\n",s) ;  
}

void rectangle(){
	double a,b,s ;
	printf("������εĿ�") ;
	scanf("%lf",&a) ;
	printf("������εĳ���") ;
	scanf("%lf",&b) ;
	s=a*b ;
	printf("���ε�����ǣ�%.2lf\n",s)	; 
}

void circle(){
	double a,s ;
	printf("����Բ�εİ뾶��") ;
	scanf("%lf",&a) ;
	s=3.14*a*a;
	printf("Բ�ε�����ǣ�%.2lf\n",s) ;
}

void oval(){
	double a,b,s;
	printf("���볤���᣺") ;
	scanf("%lf",&a) ;
	printf("����̰��᣺") ;
	scanf("%lf",&b) ;
	s=a*b*3.14 ;
 	printf("��Բ�ε�����ǣ�%.2lf\n",s) ;	
}

void trapezoid(){
	double a,b,h,s;
	printf("�����ϵף�") ;
	scanf("%lf",&a) ;
	printf("�����µף�") ;
	scanf("%lf",&b) ;
	printf("����ߣ�") ;
	scanf("%lf",&h) ;
	s=(a+b)*h/2 ;
	printf("���ε�����ǣ�%.2lf\n",s) ; 
}
	 
void anotherTriangle(){
	double a,b,c,q,s ; 
	while(1){
		printf("����߳���") ;
		scanf("%lf",&a) ;
		printf("����߳���") ;
		scanf("%lf",&b) ;
		printf("����߳���") ;
		scanf("%lf",&c) ;
		if (a+b>c&&a+c>b&&b+c>a){
			q=(a+b+c)/2 ;
			s=sqrt(q*(q-a)*(q-b)*(q-c))  ;
			printf("�����ε�����ǣ�%.2lf\n",s) ;\
			break ;
				}
		else{
			printf("������\n") ; 
			}
		}
} 

void list(){
	system("color a4") ;
 	printf("    *****************\n") ;
	printf("         ͼ�����    \n") ;
	printf("    *****************\n") ; 
	Sleep(1000) ;
}
void solution(){
	list() ;
	while (1) {
	 	system("cls") ;
	 	printf("                                     Ciallo��(��?��< )�С�\n") ;	
 		printf("                             **********************************\n") ;
 		printf("                             *       1.�������������         *\n") ;
 		printf("                             *       2.����������           *\n") ; 
		printf("                             *       3.����Բ�����           *\n") ;
		printf("                             *       4.������Բ�����         *\n") ;
		printf("                             *       5.�����������           *\n") ;
		printf("                             *       6.����������(����)���   *\n") ;
		printf("                             *       7.������ɫ                 *\n") ;
		printf("                             *       -1.�˳�                  *\n") ;
		printf("                             **********************************\n") ;
		int i ;
		printf("�������\n") ;
		scanf("%d",&i) ;
		system("cls") ;
		if (i==-1){
			break ;
		}
		switch(i) {
			case 1:
		 		triangle() ;
		 		system("pause") ;
		 		continue;
		 	case 2:
		 		rectangle() ;
		 		system("pause") ;
		 		continue;
		 	case 3:
			 	circle() ;
			 	system("pause") ;
	 			continue;
	 		case 4:
	 			oval()  ;
				 system("pause") ; 
				 continue;
		 	case 5:
	 			trapezoid() ;
	 			system("pause") ;
				 continue;
		 	case 6:
	 			anotherTriangle() ;
	 			system("pause") ;
			 	continue;
		 	case 7:
 				system("pause") ;
		 		continue;
			 	
			
		} 
	}}
 	
 int main(int argc, char *argv[])
 {
 	solution() ;
 	return 0;
 
 }
