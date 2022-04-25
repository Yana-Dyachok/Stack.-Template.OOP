#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack <int> A(3);//створюємо об'єкт A  з задданим розміром
	cout<<"index < max =" << A.push(45) << endl;//якщо індекс менший максимального значення- заповнюємо стек значенням
	cout << "index < max =" <<A.push(67) << endl;//якщо індекс менший максимального значення- заповнюємо стек значенням
	cout << "index < max =" <<A.push(125) << endl;//якщо індекс менший максимального значення- заповнюємо стек значенням
	cout << "Stack is full=" << A.isFull() << endl;//перевіряємо чи повний стек
	for (int i = 0; i < 3; i++)
	{
		std::cout << A.pop() << "\t";//видаляємо елементи зі стеку
	}
	cout<<endl << "Stack is empty=" <<A.isEmpty() << endl;	//перевіряємо чи стек пустий
}