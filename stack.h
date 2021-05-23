# pragma once
/*数组栈ADT*/
#include <stdbool.h>
#define MAXSIZE 100
typedef struct stack {
	int val[MAXSIZE];
	int top;
}Stack;

// 操作： 压栈
//前提条件： 栈未满， 若满栈， 返回0
// 后置条件： 压栈完成
bool StackPush(int val, Stack* stack);

//操作： 弹栈
//前提条件： 栈非空， 否则返回0
//后置条件： 弹栈完成
bool StackPop(Stack* stack);

//操作： 检查栈是否空
//后置条件： 栈空返回1， 否则返回0
bool StackIsEmpty(Stack* stack);

//操作： 检查栈是否满
//后置条件: 栈满返回1， 否则返回0
bool StackIsFull(Stack* stack);

//操作: 清空栈
//后置条件： 清空栈
void InitializeStack(Stack* stack);

// 链表栈ADT

typedef struct node {
	int val;
	struct node* next;
}Node;

typedef struct stacklist {
	Node *head;
	Node* top;
}StackList;

typedef StackList* Slist;
//操作： 压栈
//前提条件： 栈未满
bool StackListPush(int val, Slist* slist);

//操作： 初始化链表栈
void InitializeSList(Slist* list);

//操作： 弹栈
//前提条件： 栈非空
//后置条件： 弹栈
bool StackListPop(Slist* slist);

//操作： 检查栈是否空
bool StackListIsEmpty(Slist* slist);



//操作： 清空栈
bool EmptyStackList(Slist* slist);