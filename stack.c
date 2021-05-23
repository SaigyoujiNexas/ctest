/*stack.c   --- 栈ADT实现函数， 与stack.h联合编译*/
#include <stdlib.h>
#include "stack.h"
bool StackPush(int val, Stack* stack)
{
	stack->val[stack->top] = val;
	(stack->top)++;
	return true;
}

bool StackPop(Stack* stack)
{
	if (StackIsEmpty(stack))
		return false;
	(stack->top)--;
	return true;
}

bool StackIsEmpty(Stack* stack)
{
	if (stack->top == 0)
		return true;
	else
		return false;
}

bool StackIsFull(Stack* stack)
{
	if (stack->top == MAXSIZE)
		return true;
	else
		return false;
}

void InitializeStack(Stack* stack)
{
	stack->top = 0;
}


//链表栈

static void CopyToNode(Node* aim, int val);

bool StackListPush(int val, Slist* slist)
{
	Node* temp;
	if ((temp = (Node*)malloc(sizeof(Node))) == NULL)
		return false;
	Slist psl = *slist;
	CopyToNode(temp, val);
	if (psl->top == NULL)
	{
		psl->top = temp;
		psl->head->next = temp;
	}
	else
	{
		psl->top->next = temp;
		(psl)->top = psl->top->next;
	}
	return true;
}

void InitializeSList(Slist* list)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	StackList* new = (StackList*)malloc(sizeof(StackList));
	*list = new;
	new->head = newnode;
	(new)->head->val = 0;
	(*list)->head->next = NULL;
	(*list)->top = NULL;
}

bool StackListPop(Slist* slist)
{
	if (StackIsEmpty(slist))
		return false;
	Node *temp = (*slist)->top;
	Node* newTop=(*slist)->head->next;
	if (newTop == temp)
	{
		(*slist)->head->next = NULL;
		(*slist)->top = NULL;
		free(temp);
	}
	while (newTop->next != temp)
		newTop = newTop->next;
	newTop->next = NULL;
	free(temp);
	(*slist)->top = newTop;
	return true;
}

bool StackListIsEmpty(Slist* slist)
{
	if ((*slist)->top == NULL)
		return true;
	else
		return false;
}


bool EmptyStackList(Slist* slist)
{
	Node* newhead = (*slist)->head->next;
	Node* cur;
	while (newhead != NULL)
	{
		cur = newhead;
		newhead = newhead->next;
		free(cur);
	}
	free(*slist);
	return true; 
}


static void CopyToNode(Node* aim, int val)
{
	aim->val = val;
	aim->next = NULL;
}