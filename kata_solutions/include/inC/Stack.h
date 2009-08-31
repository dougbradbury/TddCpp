#ifndef D_Stack_H
#define D_Stack_H

///////////////////////////////////////////////////////////////////////////////
//
//  Stack is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

typedef struct Stack Stack;

Stack* Stack_Create(void);
void Stack_Destroy(Stack*);
int Stack_isEmpty(Stack*);
void Stack_push(Stack*, int);
int Stack_pop(Stack*);

#endif  // D_Stack_H
