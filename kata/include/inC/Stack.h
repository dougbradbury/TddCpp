#ifndef D_Stack_H
#define D_Stack_H

typedef struct Stack Stack;

Stack* Stack_Create(void);
void Stack_Destroy(Stack*);
int Stack_isEmpty(Stack*);
void Stack_push(Stack*, int i);
void Stack_pop(Stack*);
int Stack_top(Stack*);

#endif  // D_Stack_H
