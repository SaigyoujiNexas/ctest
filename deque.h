#pragma once
/*depue.h --- ˫�˶���ADT*/
#define MAXSIZE 16
typedef struct {
	int que[MAXSIZE];
	int front;
	int rear;
}Deque;


//������ ��ʼ������
void InitializeDeque(Deque* deque);


//������ ���
//ǰ�������� ����δ��, directionΪ0����ӣ� �������Ҷ�
//���������� ���
_Bool EnDeque(_Bool direction, int val, Deque *deque);

// ������ ����
//ǰ�������� ���зǿգ� directionΪ0����ӣ� ������Ҷ�
_Bool DeDeque(_Bool direction, Deque* deque);


