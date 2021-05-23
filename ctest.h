#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define RAD_TO_DEG (180 / (4 * atan(1)))
//泛型平方根函数
#define SQRT(X) _Generic((X),\
	long double: sqrtl,\
	default: sqrt,\
	float: sqrtf)(X)

#define SIN(X) _Generic((X),\
	long double: sinl((X)/RAD_TO_DEG),\
	default: sin((X)/RAD_TO_DEG),\
	float: sinf((X)/RAD_TO_DEG)\
)

char* s_gets(char* str, unsigned int n);
int bstoi(char* binary);
char* itobs(int n, char* ps);

struct month {
	char name[10];
	char condense[4];
	int days;
	int number;
};

int openbit_count(int num);


///ctest
