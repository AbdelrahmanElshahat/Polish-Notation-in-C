//
// Created by Elshahat on 11/1/2020.
//

// stack <string> myStack;    this is a stack of string in cpp

#include "stack.h"
void CreateStack(Stack *ps){
    ps->top=0;
}
void Push(StackEntry e ,Stack *ps){
    ps->entry[ps->top]=e;
    ps->top++;
}
void Pop(StackEntry *pe,Stack *ps){
    ps->top--;
    *pe=ps->entry[ps->top];
}
int StackFull(Stack *ps){
    if (ps->top==MAX_STACK)
        return 1;
    else
        return 0;
}
int StackEmpty(Stack *ps){
    if(ps->top==0)
        return 1;
    else
        return 0;
}
void StackTop(StackEntry *pe, Stack *ps){
    Pop(pe,ps);
    Push(*pe,ps);
}
int StackSize(Stack *ps){
    return ps->top;
}
void ClearStack(Stack *ps){
    ps->top=0;
}
void TraverseStack(Stack *ps,void (*pf) (StackEntry)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}