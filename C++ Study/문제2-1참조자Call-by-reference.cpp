#include <iostream>

using namespace std;
/*
//문제1
void plusone(int& num1);
void Change(int& num2);

int main(void)
{
	int num = 10;
	plusone(num);
	cout << num << endl;
	Change(num);
	cout << num << endl;

	return 0;
}

void plusone(int& num1)
{
	num1 += 1;
}

void Change(int& num2)
{
	num2 = -num2;
}
*/





/*
문제2
참조자는 변수에 대해서만 선언이 가능한데 아규먼트를 정수값으로 넣었다. 변수로 넣어야 한다.
*/




//문제3
void SwapPointer(int* (&ptr1), int* (&ptr2));

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}

void SwapPointer(int* (&ptr1), int* (&ptr2))
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
