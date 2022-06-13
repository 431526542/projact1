#include<iostream>
#include<Windows.h>

using namespace std;


//10.함수 만들기<1> (printTo100, 0~100까지 동작 , 입출력값없음)
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 101; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//함수 만들기<2> (printToEven , 0~100까지 짝수 출력, 입출력없음)
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << number[i] << endl;
	}
}

//함수 만들기<3> (printToOdd , 0~100까지 홀수 출력, 입출력없음)
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 1; i < 50; ++i)
	{
		number[i] = (2 * i) - 1;
		cout << number[i] << endl;
	}
}

//함수 만들기<4> (printTo3Dra , 0~100까지 3배수 출력, 입출력없음)
void printTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 34; ++i)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}

//함수 만들기<5> (printTo3multi , 0~100까지 3제곱근 출력, 입출력없음)
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

//함수 만들기<6> (printToGogodan, n값의 구구단 9까지 출력 , 입력값 int n, 출력값없음)
void printToGogodan(int n) //메인에 printToGogodan(9);이렇게 입력
{
	int number[1000] = { 0 };

	for (int i = 1; i < 10; ++i)
	{
		number[n] = n * i;
		cout << n << " * " << i << " = " << number[n] << endl;
	}
}

//함수 만들기<7> (printToFactorial, n!의 결과 값 출력 , 입력값 int n, 출력값 int)
int printToFactorial(int n)//void와 다르게 int double 등과 같은 함수는 return값을 넣어줘야 한다.
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

	//11.x를 Location X라고 가정하고 +방향 -방향으로 움직이는 동작
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


















	//함수7번
	/*
	int result = 0;
	result = printToFactorial(5);
	cout << result << endl;
	*/

	//1.0~100까지의 짝수 출력
	/*
	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << number[i] << endl;
	}
	*/

	//2.0~100까지 홀수 출력
	/*
	for (int i = 1; i < 50; ++i)
	{
		number[i] = (2*i)-1;
		cout << number[i] << endl;
	}
	*/

	//3.1~100까지 3의 배수
	/*
	for (int i = 0; i < 34; ++i)
	{
		number[i] = i*3;
		cout << number[i] << endl;
	}
	*/

	//4.0~100까지 3의 제곱근(1)
	/*
	for (int i = 0; i < 5; ++i)
	{
		number[i] = 1;
		for (int j = 0; j < i; ++j) //j가 i번 실행하면서 3을 곱해준다.
		{
			number[i] = number[i] * 3;
		}
		cout << number[i] << endl;
	}
	*/

	//5.0~100까지 3의 제곱근(2)
	/*
	number[0] = 3;
	for (int i = 1; i < 5; ++i)
	{
		number[i] = number[i - 1] * 3;
		cout << number[i - 1] << endl;
	}
	*/

	//6. 1번예제
	/*
	cout << "<<0~100까지 2의 배수 출력>>" << endl;
	for (int i = 0; i < 51; ++i)
	{
		number[i] = 2 * i;
		cout << "2 * "<< i <<" = " << number[i] << endl;
	}
	*/

	//7.구구단2단부터 9단까지
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

	//8.숫자 하나를 입력 받아서 2~9단의 구구단 출력 (ex:10받으면 그 구구단 출력)
	/*
	int a = { 0 };
	cin>>a;
	for (int i = 2; i < 10; ++i)
	{
		number[a] = a * i;
		cout << a << " * " << i << " = " << number[a] << endl;
	}
	*/

	//9.!(펙토리얼)
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
