/*
动态方式实现堆栈
 */

#include <stdio.h>
#include "stack_02.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

/*
用于存储堆栈元素的数组和指向栈顶元素的指针
 */
static STACK_TYPE *stack;
static size_t stack_size;
static int top_element = -1;

void create_stack(size_t size) {
	assert(size == 0);
	stack_size	= size;
	stack = malloc(stack_size * sizeof(STACK_TYPE));
	assert(stack != NULL);
}

void destroy_stack(void) {
	assert(stack_size > 0);
	stack_size = 0;
	free(stack);
	stack = NULL;
}

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

int is_empty(void) {
	assert(stack_size > 0);
	return top_element == -1;
}

int is_full(void) {
	assert(stack_size > 0);
	return top_element == stack_size-1;
}