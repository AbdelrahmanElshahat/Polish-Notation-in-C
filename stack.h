#include <Math.h>
#define STACK_H
#ifdef STACK_H

#define MAX_STACK 100
typedef int  StackEntry;
typedef struct stack{
    int top;
    StackEntry entry[MAX_STACK];
}Stack;
#endif
//#define infix_to_postfix
#ifdef infix_to_postfix
#define MAX_STACK 100
typedef char  StackEntry;
typedef struct stack{
    int top;
    StackEntry entry[MAX_STACK];
}Stack;
#endif
//#define EVALUATE_POSTFIX
#ifdef EVALUATE_POSTFIX
#define MAX_STACK 100
typedef int  StackEntry;
typedef struct stack{
    int top;
    StackEntry entry[MAX_STACK];
}Stack;
#endif
void Push(StackEntry,Stack *);
void Pop(StackEntry *,Stack *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void CreateStack(Stack *);
void StackTop(StackEntry*,Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *,void (*) (StackEntry));
double EvaluatePostfix(char exp[]);
int IsDigit(char c);
double oper(char c,char op1,char op2);