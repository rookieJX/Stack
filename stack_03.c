/*
链表实现的堆栈，没有长度限制
 */

#include <stdio.h>
#include "stack_02.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

#define FALSE 0

/*
定义一个结构体，以存放堆栈元素
 */
typedef struct STACK_NODE {
	STRCK_TYPE value;
	struct STACK_NODE *next;
}Stack_Node;

/*
指向堆栈中第一个节点的指针
 */
static Stack_Node *stack;

void destroy_stack(void) {
	while(!is_empty()) {
		pop();
	}
}

void push(STRCK_TYPE value) {
	Stack_Node *new_node;

	new_node = malloc(sizeof(Stack_Node));
	assert(new_node != NULL);
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
}

void pop(void) {
	Stack_Node *first_node;
	assert(!is_empty());
	first_node = stack;
	stack = first_node->next;
	free(first_node);
}

STRCK_TYPE top(void) {
	assert(!is_empty());
	return stack->value;
}

int is_empty(void) {
	return stack ==NULL;
}