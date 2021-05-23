/*tree.h -- ���������*/
/*���в������ظ�����*/


#pragma once
#include <stdbool.h>

//���ݾ����������Item
#define SLEN 20
typedef struct item
{
	char petname[SLEN];
	char petkind[SLEN];
}Item;
#define MAXITEMS 10
typedef struct trnode
{
	Item item;
	struct trnode* left;
	struct trnode* right;
}Trnode;

typedef struct tree
{
	Trnode* root;		//ָ����ڵ��ָ��
	int size;			//��������
}Tree;

// ����ԭ��
// ������	������ʼΪ��
//ǰ�������� ptreeָ��һ����
//���������� ������ʼ��Ϊ��
void InitializeTree(Tree* ptree);

/* ������ ȷ�����Ƿ�Ϊ��*/
/* ǰ�������� ptreeָ��һ����*/
// ���������������Ϊ�գ� ����true�� ���򷵻�false
bool TreeIsEmpty(const Tree* ptree);

// ������ ȷ�����Ƿ�����
// ǰ�������� ptreeָ��һ����
//���������� ����������� ����true�� ���򷵻�false
bool TreeIsFull(const Tree* ptree);

// ������ ȷ����������
// ǰ�������� ptreeָ��һ����
// ���������� ������������
int TreeItemCount(const Tree* ptree);

//������ ���������һ����
//ǰ�������� pi�Ǵ������ĵ�ַ�� ptreeָ��һ����
// ���������� ���������ӣ� �ú������������һ��� ������true�� ���򷵻�false
bool AddItem(const Item* pi, Tree* ptree);

//������ �����в���һ����
//ǰ�������� piָ��һ��� ptreeָ��һ����
// ���������� ����������ҵ�ָ��� ����true�� ���򷵻�false
bool InTree(const Item* pi, const Tree* ptree);

// ������ ������ɾ��һ����
//ǰ�������� pi��ɾ����ĵ�ַ�� ptreeָ��һ����
// ���������� �����гɹ�ɾ��һ��� ����true�� ���򷵻�false
bool DeleteItem(const Item* pi, Tree* ptree);

//������ �Ѻ���Ӧ�������е�ÿһ��
//ǰ�������� ptreeָ��һ������ pfunָ��һ�������� �ú�������һ��Item���͵Ĳ����� ���޷���ֵ
// ���������� pfunָ��ĺ���Ϊ���е�ÿһ��ִ��һ��
void Traverse(const Tree* ptree, void (*pfun)(Item item));


//������  ɾ�����е���������
//ǰ�������� ptreeָ��һ���ѳ�ʼ������
//���������� ��Ϊ��
void DeleteAll(Tree* ptree);
