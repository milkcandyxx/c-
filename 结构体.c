#include <stdio.h>
#include <string.h>
struct Student{
		int num ;
		char name[20] ;
		double score ;
	};
int main(int argc, char *argv[])
{
	int sum=0,max=0,name;
	struct Student stu[5]={
	{10101,"奶糖1",99},
	{10102,"奶糖2",98},
	{10103,"奶糖3",97},
	{10104,"奶糖4",96},
	{10105,"奶糖5",95}} ;
	printf("学号\t姓名\t成绩\t\n");
	for(int i=0;i<5;i++){
		printf("%d\t%s\t%lf\t\n",(stu+i)->num,(stu+i)->name,(stu+i)->score);	
	} 
	for(int i=0;i<5 ;i++){
		sum+=stu[i].score ;
	}
	printf("总分%d\n平均分%lf\n",sum,sum/5.0);
	for (i=0;i<5;i++){
		if(stu[i].score>max){
			max=stu[i].score ;
			name=i ;
		}
	}
	printf("最高分%d\t姓名%s\n",max,(stu+name)->name);
	
	return 0;
}