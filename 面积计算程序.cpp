 #include <stdio.h>
 #include <windows.h>
 #include <math.h>


void triangle(){
	double a,h,s;
	printf("输入三角形的低：") ;
	scanf("%lf",&a) ;
	printf("请输入三角形的高") ;
	scanf("%lf",&h) ;
	s=a*h/2.0 ;
	printf("三角形的面积是：%.2lf\n",s) ;  
}

void rectangle(){
	double a,b,s ;
	printf("输入矩形的宽：") ;
	scanf("%lf",&a) ;
	printf("输入矩形的长：") ;
	scanf("%lf",&b) ;
	s=a*b ;
	printf("矩形的面积是：%.2lf\n",s)	; 
}

void circle(){
	double a,s ;
	printf("输入圆形的半径：") ;
	scanf("%lf",&a) ;
	s=3.14*a*a;
	printf("圆形的面积是：%.2lf\n",s) ;
}

void oval(){
	double a,b,s;
	printf("输入长半轴：") ;
	scanf("%lf",&a) ;
	printf("输入短半轴：") ;
	scanf("%lf",&b) ;
	s=a*b*3.14 ;
 	printf("椭圆形的面积是：%.2lf\n",s) ;	
}

void trapezoid(){
	double a,b,h,s;
	printf("输入上底：") ;
	scanf("%lf",&a) ;
	printf("输入下底：") ;
	scanf("%lf",&b) ;
	printf("输入高：") ;
	scanf("%lf",&h) ;
	s=(a+b)*h/2 ;
	printf("梯形的面积是：%.2lf\n",s) ; 
}
	 
void anotherTriangle(){
	double a,b,c,q,s ; 
	while(1){
		printf("输入边长：") ;
		scanf("%lf",&a) ;
		printf("输入边长：") ;
		scanf("%lf",&b) ;
		printf("输入边长：") ;
		scanf("%lf",&c) ;
		if (a+b>c&&a+c>b&&b+c>a){
			q=(a+b+c)/2 ;
			s=sqrt(q*(q-a)*(q-b)*(q-c))  ;
			printf("三角形的面积是：%.2lf\n",s) ;\
			break ;
				}
		else{
			printf("不构成\n") ; 
			}
		}
} 

void list(){
	system("color a4") ;
 	printf("    *****************\n") ;
	printf("         图像面积    \n") ;
	printf("    *****************\n") ; 
	Sleep(1000) ;
}
void solution(){
	list() ;
	while (1) {
	 	system("cls") ;
	 	printf("                                     Ciallo～(∠?ω< )⌒★\n") ;	
 		printf("                             **********************************\n") ;
 		printf("                             *       1.计算三角形面积         *\n") ;
 		printf("                             *       2.计算矩形面积           *\n") ; 
		printf("                             *       3.计算圆形面积           *\n") ;
		printf("                             *       4.计算椭圆形面积         *\n") ;
		printf("                             *       5.计算梯形面积           *\n") ;
		printf("                             *       6.计算三角形(三边)面积   *\n") ;
		printf("                             *       7.设置颜色                 *\n") ;
		printf("                             *       -1.退出                  *\n") ;
		printf("                             **********************************\n") ;
		int i ;
		printf("输入序号\n") ;
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
