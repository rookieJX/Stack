/*
一个堆栈模块的接口
 */
#define STACK_TYPE int /*所存储堆栈的类型 */

/*
压入堆栈
 */
void push(STACK_TYPE value);

/*
弹出栈，并丢弃
 */
void pop(void);

/*
返回栈顶元素，但是不对其进行修改
 */
STACK_TYPE top(void);

/*
如果堆栈为空返回TRUE 否则返回FALSE
 */
int is_empty(void);


/*
销毁堆栈，释放堆栈所使用的内存
 */
void destroy_stack(void);

