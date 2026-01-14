#include <string>
#include <iostream>
using namespace std;
#include "OStack.h"
#include "Intstack.h"

string postFix(string exp);
double compute(string postFix);
int priority(char);
void main()
{
	string infixExp;
	cout << "\n Enter An Infix Expression : ";
	getline(cin, infixExp);
	cout << "\n Postfix expression is " << postFix(infixExp) << "\n ";
	cout<<"\n Evaluation result : "<<compute(postFix(infixExp))<<"\n";
}
int priority(char x)
{
	int p = 0;
	switch (x)
	{
	case '*':
	case '/':
	case '%':
		p = 3;
		break;
	case '+':
	case '-':
		p = 2;
		break;
	case '(':
		p = 1;
		break;
	}
	return p;
}

string postFix(string exp)
{
	string	postfix_exp = "";
	OStack opStack;
	char token;
	char current,x;
	int token_priority, top_priority;
	for (int i = 0; i < exp.length(); i++)
	{
		token = exp[i];
		//cout << "\n token is " << token;
		//cout << "\n stack top is " << opStack.top();
		token_priority = priority(token);
		top_priority = priority(opStack.top());
		//cout << "\n token priority: " << token_priority;
		//cout << "\n top priority: " << top_priority;
		switch (token)
		{
		case ' ': break;
		case '(':
			opStack.push(token);
			break;
		case ')':
			current = opStack.pop();
			{
				while (current != '(')
				{
					postfix_exp = postfix_exp.append(1, current);
					current = opStack.pop();
				}
			}
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			if (opStack.empty() || (token_priority >  top_priority))
			{	opStack.push(token);
			}
			else
			{
				current = opStack.pop();
				postfix_exp = postfix_exp.append(1, current);
				top_priority = priority(opStack.top());
				while ((!opStack.empty())&&(token_priority<=top_priority))
				{
					current = opStack.pop();
					top_priority = priority(opStack.top());
					postfix_exp = postfix_exp.append(1, current);
				}
				opStack.push(token);
			}
			break;
		default:
			postfix_exp = postfix_exp.append(1, token);
		}
	}

	token = opStack.pop();
	while (token != '\0')
	{
		postfix_exp = postfix_exp.append(1, token);
		token = opStack.pop();
	}
	//cout << "\n postfix expression's length is "<<postfix_exp.length() << '\n';

	return postfix_exp;
}


double compute(string postfix)
{
	double answer = 0;
	int exp1 = 0;
	int exp2 = 0;
	Intstack opStack;
	char token;
	for (int i = 0; i < postfix.length(); i++)
	{
		token = postfix[i];
		switch (token)
		{
		case '*':
			exp1 = opStack.pop();
			exp2 = opStack.pop();
			opStack.push(exp2 * exp1);
			break;
		case '+':
			exp1 = opStack.pop();
			exp2 = opStack.pop();
			opStack.push(exp2 + exp1);
			break;
		case '-':
			exp1 = opStack.pop();
			exp2 = opStack.pop();
			opStack.push(exp2 - exp1);
			break;
		case '/':
			exp1 = opStack.pop();
			exp2 = opStack.pop();
			opStack.push(exp2 / exp1);
			break;
		case '%':
			exp1 = opStack.pop();
			exp2 = opStack.pop();
			opStack.push(exp2 % exp1);
			break;

		case '0':
			opStack.push(0);
			break;
		case '1':
			opStack.push(1);
			break;
		case '2':
			opStack.push(2);
			break;
		case '3':
			opStack.push(3);
			break;
		case '4':
			opStack.push(4);
			break;
		case '5':
			opStack.push(5);
			break;
		case '6':
			opStack.push(6);
			break;
		case '7':
			opStack.push(7);
			break;
		case '8':
			opStack.push(8);
			break;
		case '9':
			opStack.push(9);
			break;

		default:
			answer = opStack.pop();
		}
	}
	answer = opStack.pop();
	return answer;
}