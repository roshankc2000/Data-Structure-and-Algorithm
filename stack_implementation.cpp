#include <iostream>
using namespace std;
#define MAX 100

int stack[MAX], top = -1;
void push(int data)
{
	if (top >= MAX - 1)
		cout << "Stack Overflow!" << endl;
	else
	{
		top++;
		stack[top] = data;
		cout << "insertion complete." << endl;
	}
}
void pop()
{
	if (top <= -1)
		cout << "Stack Underflow!" << endl;
	else
	{
		cout << "The popped element is " << stack[top] << endl;
		top--;
	}
}
void display()
{
	if (top >= 0)
	{
		cout << "Stack elements are:" << endl;
		for (int i = top; i >= 0; i--)
			cout << stack[i] << " ";
		cout << endl;
	}
	else
		cout << "Stack is empty!" << endl;
}
int main()
{
	int choice, data;
	cout << "1) Push into the stack." << endl;
	cout << "2) Pop from stack." << endl;
	cout << "3) Display the stack." << endl;
	cout << "4) Exit Program." << endl;
	do
	{
		cout << "Enter a choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "\nEnter a value to be pushed: ";
			cin >> data;
			push(data);
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			cout << "\nProgram Terminated Successfully!" << endl;
			break;
		}
		default:
		{
			cout << "\nInvalid Choice! Please choose a valid option." << endl;
		}
		}
	} while (choice != 4);

	return 0;
}