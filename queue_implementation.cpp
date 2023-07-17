#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void enqueue()
{
	int data;
	if (rear == n - 1)
		cout << "Queue Overflow" << endl;
	else
	{
		if (front == -1)
			front = 0;
		cout << "Enter the element : ";
		cin >> data;
		rear++;
		queue[rear] = data;
	}
}
void dequeue()
{
	if (front == -1 || front > rear)
		cout << "Queue Underflow ";
	else
	{
		cout << "Item is deleted!" << endl;
		// cout << "Item deleted from queue is : " << queue[front] << endl;
		front++;
	}
}
void display()
{
	if (front == -1)
		cout << "Queue is empty" << endl;
	else
	{
		cout << "Queue elements are : ";
		for (int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		cout << endl;
	}
}
int main()
{
	int choice;
	cout << "1) Insert element to queue." << endl;
	cout << "2) Delete element from queue." << endl;
	cout << "3) Display all the elements of queue." << endl;
	cout << "4) Exit Program." << endl;

	do
	{
		cout << "Enter a choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			enqueue();
			break;
		}
		case 2:
		{
			dequeue();
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