//  conversion infix to postfix and its Evaluation.
#include<math.h>
#include<ctype.h>
#include<stdio.h>
char s[100];
int top = -1; 
void RemoveSpaces(char* source)
{   char* i = source;
	char* j = source;
	while(*j != 0) 
	{   *i = *j++;
		if(*i != ' ')
			i++;
	}
	*i = 0;
}
void push(char elem) 
{ s[++top] = elem;
}
char pop() 
{ return (s[top--]);
}
int pr(char elem)
 { 	switch (elem) 
	{		case '#':   return 0;
	    	case '(':   return 1;
			case '+':
     		case '-':   return 2;
    		case '*':
    		case '/':   return 3;
			case '^':   return 4;
	}
}
void infix_to_postfix(char *infix, char *postfix)
{
	char ch, elem;  
	int i=0, k=0;    
	push('#');   
	while ((ch = infix[i++]) != '\n')       
	 {	if (ch == '(')      
			push(ch);
		else if (isalnum(ch))
			postfix[k++] = ch;
		else if (ch == ')') 
		{		while (s[top] != '(')
				postfix[k++]=pop();
				elem = pop(); 
		}
		else 
		{ 	while (pr(s[top])>= pr(ch))
				postfix[k++]=pop();
			push(ch);
		}
	}
	while (s[top] != '#')
	postfix[k++] = pop();
	postfix[k] = 0; 
}
int eval_postfix(char *postfix) 
{	char ch;
	int data;
	int i = 0, op1, op2;
	while((ch = postfix[i++]) != 0)
	{	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{	printf("\nenter value for %c= ",ch);
		   	scanf("%d",&data);
			push(data);
		}	 
		else{   op2 = pop();
				op1 = pop();
				switch(ch) 
				{		case '^' : push(pow(op1,op2));  break;
						case '+' : push(op1+op2);       break;
						case '-' : push(op1-op2);       break;
						case '*' : push(op1*op2);       break;
						case '/' : push(op1/op2);       break; 
				}
			}
		}
		return s[top];
	}
int main()
 {	char infix[50], pofix[50];
	printf("\nEnter the any infix expression: ");
	fgets(infix, 50, stdin);         
	infix_to_postfix(infix, pofix);    
	printf("\nInfix Expressionis::%s \nPostfix Expression: %s", infix, pofix);
	top = -1;
	printf("\nvalue  of evaluation  :: %d", eval_postfix(pofix));
}
/* OUTPUT 
Enter the any infix expression: (a+b)*c/d
Infix Expressionis::(a+b)*c/d

Postfix Expression: ab+c*d/
enter value for a= 1
enter value for b= 3
enter value for c= 4
enter value for d= 2
value  of evaluation  :: 8
--------------------------------
Process exited after 32.38 seconds with return value 0
Press any key to continue . . .

