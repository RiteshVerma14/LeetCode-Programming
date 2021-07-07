#include <stdio.h>
#include <string.h>

//  To change INFIX to POSTFIX.......

char tempStack[100];
int top;

void push(char c){
    tempStack[++top] = c;
}
char pop(){
    return tempStack[top--];
}



int isOperand(char ch) 
{ 
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||(ch >= '1' && ch <='9'); 
} 
  

int precedence(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 
  
    case '*': 
    case '/': 
        return 2; 
    } 
    return -1; 
}



void getprefix(char infix[]){
    char prefix[50];
    top = -1;
    int len = strlen(infix);
    infix[len] = ')';
    infix[len+1] = '\0';
    int i = 0, j=0;
    push('(');
    while(top != -1){
        if(isOperand(infix[i])){
            prefix[j] = infix[i];
            i++;
            j++;
          

        }else if(infix[i] == '('){
            push(infix[i++]);
            
        }else if(infix[i] == ')'){
            while(tempStack[top] != '('){
                prefix[j++] = pop();
            }
            pop();
            i++;
          
        }else{
            while(precedence(tempStack[top]) >= precedence(infix[i])){
                prefix[j++] = pop();
            }
            push(infix[i++]);
            
        }
        
    }
    prefix[j] = '\0';
    printf("\nThe postfix expression is: %s\n\n",prefix);
} 

int main()
{
    int infixExp;
    char infix[50];
    printf("Enter a infix expression: ");
    scanf("%s",infix);
    getprefix(infix);
}









