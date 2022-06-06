#include <stdio.h>
#include "stack.h"
#include "INFIX_TO_POSTFIX.h"
int main()
{
    Stack  s;
    ClearStack(&s);
    StackEntry x =5;
    StackEntry y = 6;
    StackEntry z;
    Push(x,&s);
    Push(y,&s);
    Pop( &z, &s);
    printf("%d",z);
    return 0;
}
