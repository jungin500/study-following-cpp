/*
 * Chapter 6.12 ���� �Ҵ� �迭
 */

#include <iostream>

using namespace std;

int main()
{
	int length;

	cin >> length;

	// int array[length]
	int* array = new int[length] {}; //  {} initializer => �������� 0���� �ʱ�ȭ��

	array[0] = 1;
	0-=array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;
	`9
	return 0;
}