/*list.h --简单链表类型的头文件*/

#include <stdbool.h>

typedef struct node
{
	int val;
	struct node* next;
}Node;
typedef Node* List;

// 函数原型
// 操作：初始化一个链表
//前提条件： plist指向一个链表
//后置条件： 链表初始化为空
void InitializeList(List* plist);

//操作： 确定链表是否为空定义， plist指向一个以确定的链表
//后置条件： 链表为空返回true， 否则返回false
bool ListIsEmpty(const List* plist);

//操作：确定链表是否已满， plist指向一个已确定链表
//后置条件： 满则返回true否则返回false
bool ListIsFull(const List* plist);

//操作：确定链表项数， plist指向一个已确定链表
//后置条件： 返回项数
unsigned int ListItemCount(const List* plist);
//操作： 链表末尾添加项
//前提条件： item是一个待添加至链表的项， plist指向一个已初始化的链表
//后置条件： 如果可以， 在链表末尾添加一个项， 且返回true， 否则返回false
bool AddNode(int val, List* plist);

//操作： 把函数作用于链表每一项， plist指向一个已初始化的链表，
//pfun指向一个函数， 该函数接受一个Item类型的参数， 且无返回值
//后置条件， pfun指向的函数作用于链表每一项一次
void Traverse(const List* plist, void (*pfun)(int item));

//操作： 释放已分配内存， plist指向一个已初始化的链表
//后置条件： 释放为链表分配的所有内存， 链表设置为空
void EmptyTheList(List* plist);
#endif

