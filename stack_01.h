/*
一个堆栈模块的接口
 */

#define STACK_TYPE int  /*堆栈所存储的值的类型*/

/*
把一个值压入到堆栈中
 */
void push(STACK_TYPE value);

/*
从堆栈中弹出一个值，并将其丢弃
 */
void pop(void);

/*
返回堆栈顶部的元素，但是不对堆栈进行修改
 */
STACK_TYPE top(void);

/*
如果为空返回TRUE 否则返回FALSE
 */
int is_empty(void);

/*
如果堆栈已满，返回TRUE 否则返回FALSE
 */
int is_full(void);
