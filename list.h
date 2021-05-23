/*list.h --���������͵�ͷ�ļ�*/

#include <stdbool.h>

typedef struct node
{
	int val;
	struct node* next;
}Node;
typedef Node* List;

// ����ԭ��
// ��������ʼ��һ������
//ǰ�������� plistָ��һ������
//���������� �����ʼ��Ϊ��
void InitializeList(List* plist);

//������ ȷ�������Ƿ�Ϊ�ն��壬 plistָ��һ����ȷ��������
//���������� ����Ϊ�շ���true�� ���򷵻�false
bool ListIsEmpty(const List* plist);

//������ȷ�������Ƿ������� plistָ��һ����ȷ������
//���������� ���򷵻�true���򷵻�false
bool ListIsFull(const List* plist);

//������ȷ������������ plistָ��һ����ȷ������
//���������� ��������
unsigned int ListItemCount(const List* plist);
//������ ����ĩβ�����
//ǰ�������� item��һ��������������� plistָ��һ���ѳ�ʼ��������
//���������� ������ԣ� ������ĩβ���һ��� �ҷ���true�� ���򷵻�false
bool AddNode(int val, List* plist);

//������ �Ѻ�������������ÿһ� plistָ��һ���ѳ�ʼ��������
//pfunָ��һ�������� �ú�������һ��Item���͵Ĳ����� ���޷���ֵ
//���������� pfunָ��ĺ�������������ÿһ��һ��
void Traverse(const List* plist, void (*pfun)(int item));

//������ �ͷ��ѷ����ڴ棬 plistָ��һ���ѳ�ʼ��������
//���������� �ͷ�Ϊ�������������ڴ棬 ��������Ϊ��
void EmptyTheList(List* plist);
#endif

