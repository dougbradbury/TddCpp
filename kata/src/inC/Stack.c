#include "Stack.h"
#include <stdlib.h>
#include <memory.h>

//static local variables
struct Stack
{
	int placeholder;
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