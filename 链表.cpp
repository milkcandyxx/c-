#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int num;
	char name[20];
	int score;
	struct Student *next; 
};
struct Student *createList(struct Student *head)
{
	struct Student *rear;
	struct Student *p;
	if((head = rear = (struct Student *)malloc(sizeof(struct Student)))==NULL)
	{
		printf("不能建立新结点！\n");
		exit(0);
	}
	head->next = NULL;
	printf("链表生成(#表示输入结束)");
	while(getchar()!='#')
	{
		if((p = (struct Student *)malloc(sizeof(struct Student)))==NULL){
			printf("不能建立新结点！\n");
			exit(0);
		}
		printf("学号\t");
		scanf("%d",&(p->num));
		getchar(); 
		printf("姓名\t");
		scanf("%s",p->name);
		getchar();
		printf("分数\t");
		scanf("%d",&(p->score));
		getchar();   
		p->next = rear->next;
		rear->next = p;
		rear = p;
	}
	return head;
}

void display(struct Student *head){
	struct Student *p=head->next ;
	printf("              学生详细信息\n") ;
	printf("===========================================\n")  ;
	for(;p;p=p->next){
		printf("学号\t%d\n",p->num) ;
		printf("姓名\t%s\n",p->name) ;
		printf("===========================================\n")  ;
	}
}
int main (){
	struct Student *head ;
 	display(createList(head)) ;
 	return 0 ;
} 


