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
	{10101,"����1",99},
	{10102,"����2",98},
	{10103,"����3",97},
	{10104,"����4",96},
	{10105,"����5",95}} ;
	printf("ѧ��\t����\t�ɼ�\t\n");
	for(int i=0;i<5;i++){
		printf("%d\t%s\t%lf\t\n",(stu+i)->num,(stu+i)->name,(stu+i)->score);	
	} 
	for(int i=0;i<5 ;i++){
		sum+=stu[i].score ;
	}
	printf("�ܷ�%d\nƽ����%lf\n",sum,sum/5.0);
	for (i=0;i<5;i++){
		if(stu[i].score>max){
			max=stu[i].score ;
			name=i ;
		}
	}
	printf("��߷�%d\t����%s\n",max,(stu+name)->name);
	
	return 0;
}