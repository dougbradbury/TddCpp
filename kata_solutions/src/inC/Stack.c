#include "Stack.h"
#include <stdlib.h>
#include <memory.h>

//static local variables
struct Stack
{
	int count;
	int data[10];
};

Stack* Stack_Create(void)
{
     Stack* self = malloc(sizeof(Stack));
     memset(self, 0, sizeof(Stack));
     return self;
}

void Stack_Destroy(Stack* self)
{
    free(self);
}

int Stack_isEmpty(Stack* self)
{
	return self->count == 0;
}

void Stack_push(Stack* self, int value)
{
	self->data[self->count++] = value;
}

int Stack_pop(Stack* self)
{
	if(self->count == 0)
		return 0xFFFFFFFF;
	return self->data[--self->count];
}
