#include<iostream>
#include<Windows.h>

using namespace std;


//10.�Լ� �����<1> (printTo100, 0~100���� ���� , ����°�����)
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 101; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//�Լ� �����<2> (printToEven , 0~100���� ¦�� ���, ����¾���)
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << number[i] << endl;
	}
}

//�Լ� �����<3> (printToOdd , 0~100���� Ȧ�� ���, ����¾���)
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 1; i < 50; ++i)
	{
		number[i] = (2 * i) - 1;
		cout << number[i] << endl;
	}
}

//�Լ� �����<4> (printTo3Dra , 0~100���� 3��� ���, ����¾���)
void printTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 34; ++i)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}

//�Լ� �����<5> (printTo3multi , 0~100���� 3������ ���, ����¾���)
void printTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 5; ++i)
	{
		number[i] = 1;
		for (int j = 0; j < i; ++j) 
		{
			number[i] = number[i] * 3;
		}
		cout << number[i] << endl;
	}
}

//�Լ� �����<6> (printToGogodan, n���� ������ 9���� ��� , �Է°� int n, ��°�����)
void printToGogodan(int n) //���ο� printToGogodan(9);�̷��� �Է�
{
	int number[1000] = { 0 };

	for (int i = 1; i < 10; ++i)
	{
		number[n] = n * i;
		cout << n << " * " << i << " = " << number[n] << endl;
	}
}

//�Լ� �����<7> (printToFactorial, n!�� ��� �� ��� , �Է°� int n, ��°� int)
int printToFactorial(int n)//void�� �ٸ��� int double ��� ���� �Լ��� return���� �־���� �Ѵ�.
{
	int number[1000] = { 0 };

	int result = { 1 };
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	
	return result;
}

int main()
{

	//11.x�� Location X��� �����ϰ� +���� -�������� �����̴� ����
	int x = { 0 };
	bool IsMoveRight = true;
	
	while (1)
	{
		system("cls");
		cout << x << endl;
		
		if (IsMoveRight)
		{
			++x;
			if (x >= 20)
			{
				IsMoveRight = false;
			}
		}
		else
		{
			--x;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}
		Sleep(30);
	}


















	//�Լ�7��
	/*
	int result = 0;
	result = printToFactorial(5);
	cout << result << endl;
	*/

	//1.0~100������ ¦�� ���
	/*
	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << number[i] << endl;
	}
	*/

	//2.0~100���� Ȧ�� ���
	/*
	for (int i = 1; i < 50; ++i)
	{
		number[i] = (2*i)-1;
		cout << number[i] << endl;
	}
	*/

	//3.1~100���� 3�� ���
	/*
	for (int i = 0; i < 34; ++i)
	{
		number[i] = i*3;
		cout << number[i] << endl;
	}
	*/

	//4.0~100���� 3�� ������(1)
	/*
	for (int i = 0; i < 5; ++i)
	{
		number[i] = 1;
		for (int j = 0; j < i; ++j) //j�� i�� �����ϸ鼭 3�� �����ش�.
		{
			number[i] = number[i] * 3;
		}
		cout << number[i] << endl;
	}
	*/

	//5.0~100���� 3�� ������(2)
	/*
	number[0] = 3;
	for (int i = 1; i < 5; ++i)
	{
		number[i] = number[i - 1] * 3;
		cout << number[i - 1] << endl;
	}
	*/

	//6. 1������
	/*
	cout << "<<0~100���� 2�� ��� ���>>" << endl;
	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << "2 * "<< i <<" = " << number[i] << endl;
	}
	*/

	//7.������2�ܺ��� 9�ܱ���
	/*
	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			number[i] = i * j;
			cout << i << " * " << j << " = " << number[i] << endl;
		}
		cout << endl;
	}
	*/

	//8.���� �ϳ��� �Է� �޾Ƽ� 2~9���� ������ ��� (ex:10������ �� ������ ���)
	/*
	int a = { 0 };
	cin>>a;
	for (int i = 2; i < 10; ++i)
	{
		number[a] = a * i;
		cout << a << " * " << i << " = " << number[a] << endl;
	}
	*/

	//9.!(���丮��)
	/*
	int a = { 0 };
	cin >> a;
	int result = { 1 };
	for (int i = 1; i <= a; ++i)
	{
		result *= i;
	}
	cout << a << " = " << result << endl;
	*/
	
}
