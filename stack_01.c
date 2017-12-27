/*
手动实现堆栈
堆栈是最容易实现的抽象数据类型
用
 */

#include "stack_01.h"
#include <assert.h>

#define STACK_SIZE  100 /*堆栈中数值量最大的限制*/

/*
存储堆栈中的值的数组和一个指向堆栈顶部元素的指针
 */
static STACK_TYPE stack[STACK_SIZE];
static int top_element = -1;

void push(STACK_TYPE value) {
	assert(!is_full());
	top_element += 1;
	stack[top_element] = value;
}

void pop(void) {
	assert(!is_empty());
	top_element -= 1;
}

STACK_TYPE top(void) {
	assert(!is_empty());
	return stack[top_element];
}

int is_full(void) {
	return top_element == -1;
}

int is_empty(void) {
	return top_element == STACK_SIZE-1;
}