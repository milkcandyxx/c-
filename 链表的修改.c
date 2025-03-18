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
int delStudent(struct Student *head,int num){
	struct Student *p = head->next;
	struct Student *q = head->next;
	for(;p;q=p,p=p->next){
		if(p->num == num){
			q->next = p->next;
			free(p);
			break;
		}
	}
	if(p==NULL){
		return 0;
	}else{
		return 1;
	}
}
//向链表末尾添加一个学生
void addStudent(struct Student *head){
	struct Student *p = head;
	struct Student *q;
	//找到文件末尾 
	for(;p->next;p=p->next);
	//生成新结点 
	if((q = (struct Student *)malloc(sizeof(struct Student)))==NULL){
		printf("不能建立新结点！\n");
		exit(0);
	}
	//输入数据 
	printf("学号\t");
	scanf("%d",&(q->num));
	getchar(); 
	printf("姓名\t");
	scanf("%s",q->name);
	getchar();
	printf("分数\t");
	scanf("%d",&(q->score));
	getchar(); 
	q->next = p->next;
	p->next = q;
} 


int main(int argc, char *argv[])
{
	struct Student *head;
	int num;
	head = createList(head);
	display(head);
    printf("追加一个学生信息\n"); 
	addStudent(head);
	display(head);

}



