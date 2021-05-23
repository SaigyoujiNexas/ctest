# pragma once
/*����ջADT*/
#include <stdbool.h>
#define MAXSIZE 100
typedef struct stack {
	int val[MAXSIZE];
	int top;
}Stack;

// ������ ѹջ
//ǰ�������� ջδ���� ����ջ�� ����0
// ���������� ѹջ���
bool StackPush(int val, Stack* stack);

//������ ��ջ
//ǰ�������� ջ�ǿգ� ���򷵻�0
//���������� ��ջ���
bool StackPop(Stack* stack);

//������ ���ջ�Ƿ��
//���������� ջ�շ���1�� ���򷵻�0
bool StackIsEmpty(Stack* stack);

//������ ���ջ�Ƿ���
//��������: ջ������1�� ���򷵻�0
bool StackIsFull(Stack* stack);

//����: ���ջ
//���������� ���ջ
void InitializeStack(Stack* stack);

// ����ջADT

typedef struct node {
	int val;
	struct node* next;
}Node;

typedef struct stacklist {
	Node *head;
	Node* top;
}StackList;

typedef StackList* Slist;
//������ ѹջ
//ǰ�������� ջδ��
bool StackListPush(int val, Slist* slist);

//������ ��ʼ������ջ
void InitializeSList(Slist* list);

//������ ��ջ
//ǰ�������� ջ�ǿ�
//���������� ��ջ
bool StackListPop(Slist* slist);

//������ ���ջ�Ƿ��
bool StackListIsEmpty(Slist* slist);



//������ ���ջ
bool EmptyStackList(Slist* slist);