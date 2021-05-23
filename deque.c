#include "deque.h"

//局部函数定义
static _Bool DequeIsUnuse(Deque* deque);


void InitializeDeque(Deque* deque)
{
	deque->front = 0;
	deque->rear = 1;
}

_Bool EnDeque(_Bool direction, int val, Deque* deque)
{
	if (DequeIsUnuse(deque))
		return 0;
	if (direction == 0)
	{
		deque->que[deque->front--] = val;
		if (deque->front = -1)
			deque->front = MAXSIZE - 1;
	}
	else
	{
		deque->que[deque->rear++] = val;
		if (deque->rear == MAXSIZE)
			deque->front = 0;
	}
	return 1;
}


_Bool DeDeque(_Bool direction, Deque* deque)
{
	if (DequeIsUnuse(deque))
		return 0;
	if (direction == 0)
	{
		if (deque->front == MAXSIZE - 1)
			deque->front = 0;
		else
			deque->front++;
	}
	else
	{
		if (deque->rear == 0)
			deque->rear = MAXSIZE - 1;
		deque->rear--;
	}
}

static _Bool DequeIsUnuse(Deque* deque)
{
	if (deque->front == deque->rear)
		return 1;
	else
		return 0;
}
