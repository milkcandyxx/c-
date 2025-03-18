/*拓展案例：快递价格计算器
要求：帮一家快递点开发一个快递价格计算器，业务如下：
提示用户输入重量（公斤）
提示用户输入地点（东三省/宁夏/青海/海南选1，新疆/西藏选2，其他地区选3）

价格计算规则如下：
首重3公斤，不足3公斤的按3公斤计。
3公斤以内：东三省/宁夏/青海/海南 12元，新疆/西藏 20元，其他地区 10元
超出3公斤的部分：东三省/宁夏/青海/海南每公斤10元，新疆/西藏每公斤20元，其他地区每公斤5元
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,w,s ;
	printf("输入重量kg：") ;
	scanf("%d",&w) ;
	printf("东三省/宁夏/青海/海南选1，新疆/西藏选2，其他地区选3：") ; 
	scanf("%d",&a) ;
	switch(a){
		case 1 :
		if(w<=3){
			printf("12元") ;
		}
		else{
			s=(w-3)*10+12 ;
			printf("%d元",s) ;
		}
		break ; 
		case 2 :
		if(w<=3){
			printf("20元") ;
		}
		else{
			s=(w-3)*20+20 ;
			printf("%d元",s) ;
		}
		break ; 
		case 3 :
		if(w<=3){
			printf("10元") ;
		}
		else{
			s=(w-3)*5+10;
			printf("%d元",s) ;
		}
		break ; 
		default:
		printf("无当前地区\n");
		break ;
	}
	return 0;
}