//
// Created by Elshahat on 11/1/2020.
//
#include "stack.h"
double EvaluatePostfix(char exp[]){
    int i;
    char c;
    int op1,op2,val;
    Stack s;
    CreateStack(&s);
    for(i=0;(c=exp[i])!='\0' ;i++)
        if(IsDigit(c))
            Push((c-'0'),&s);
        else{
                Pop(&op2,&s);
                Pop(&op1,&s);
                val=oper(c,op1,op2);
                Push(val,&s);
        }
        Pop(&val,&s);
    return val;
    }
int IsDigit(char c){
    return(c>='0' && c<='9');
}
double oper(char c,char op1,char op2){
    switch(c) {

        case '+':
            return (op1 + op2);
        case '-':
            return (op1 - op2);
        case '*':
            return (op1 * op2);
        case '/':
            return (op1 / op2);
        case '$':
            return pow(op1, op2);
    }
}

