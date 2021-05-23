#define LIST_C
#ifndef LIST_C
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(int val, Node* pnode);

// �ӿں���
//��������Ϊ��
void InitializeList(List* plist)
{
	*plist = NULL;
}
//�������Ϊ�գ� ����true
bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

//������������� ����true
bool ListIsFull(const List* plist)
{
	Node* pt;
	bool full;

	pt = (Node*)malloc(sizeof(Node));
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);
	return full;
}

//���ؽڵ�����
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;
	}
	return count;
}
//����������Ľڵ㣬 ���������plistָ�������Ľ�β
bool AddNode(int val, List* plist)
{
	Node* pnew;
	Node* scan = *plist;

	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;
	CopyToNode(val, pnew);
	pnew->next = NULL;
	if (scan == NULL)
		*plist = pnew;
	else
	{
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = pnew;
	}
	return true;
}
// ����ÿ���ڵ㲢ִ��pfunָ��ĺ���
void Traverse(const List* plist, void(*pfun)(int item))
{
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		(*pfun)(pnode->val);
		pnode = pnode->next;
	}
}
//�ͷ���malloc()������ڴ�
//��������ָ��ΪNULL
void EmptyTheList(List* plist)
{
	Node* psave = (*plist)->next;

	while (*plist != NULL)
	{
		psave = (*plist)->next;
		free(*plist);
		*plist = psave;
	}
}

//�ֲ���������
//��һ��������ڵ���
static void CopyToNode(int val, Node* pnode)
{
	pnode->val = val;
}
#endif