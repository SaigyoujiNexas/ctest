#pragma once
/*depue.h --- 双端队列ADT*/
#define MAXSIZE 16
typedef struct {
	int que[MAXSIZE];
	int front;
	int rear;
}Deque;


//操作： 初始化队列
void InitializeDeque(Deque* deque);


//操作： 入队
//前提条件： 队列未满, direction为0入左队， 否则如右队
//后置条件： 入队
_Bool EnDeque(_Bool direction, int val, Deque *deque);

// 操作： 出队
//前提条件： 队列非空， direction为0出左队， 否则出右队
_Bool DeDeque(_Bool direction, Deque* deque);


