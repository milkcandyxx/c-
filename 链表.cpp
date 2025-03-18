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
		printf("���ܽ����½�㣡\n");
		exit(0);
	}
	head->next = NULL;
	printf("��������(#��ʾ�������)");
	while(getchar()!='#')
	{
		if((p = (struct Student *)malloc(sizeof(struct Student)))==NULL){
			printf("���ܽ����½�㣡\n");
			exit(0);
		}
		printf("ѧ��\t");
		scanf("%d",&(p->num));
		getchar(); 
		printf("����\t");
		scanf("%s",p->name);
		getchar();
		printf("����\t");
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
	printf("              ѧ����ϸ��Ϣ\n") ;
	printf("===========================================\n")  ;
	for(;p;p=p->next){
		printf("ѧ��\t%d\n",p->num) ;
		printf("����\t%s\n",p->name) ;
		printf("===========================================\n")  ;
	}
}
int main (){
	struct Student *head ;
 	display(createList(head)) ;
 	return 0 ;
} 


