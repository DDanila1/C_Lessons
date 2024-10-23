/*------------------------����1 hello world
#include <iostream>

void main() 
{
	system("chcp 1251");
	std::cout << "������ ���!" << std::endl;
}
*/

/*----------------------std � ������� ���������� ���������
#include <iostream>
int main()
{
	std::cout << "Hello world. ������ ���!" << std::endl;
	setlocale(LC_ALL, "Rus");
	std::cout << "Hello world. ������ ���!" << std::endl;
}
*/
/*------------------------------ - Escape - ������������������ * /
#include < iostream>

//\b ---------�������� ���������� ����������� �������
//\n ---------������� �� ������ ����� �������
//\t ---------������� ���������
//\\ ---------������� �������� �����
//\""---------������� ������� �������
//\''---------������� ��������� �������

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "������ ���!" << std::endl;
}
*/
/*---------------------���� ������ � C++

//float-4 ����
//double-8 ����

//int-4 ����
//short-2 ����
//long-4 ����

//char-1 ����

//bool-1 ����
*/

/*---------------------����������. ������� ����������. ������� ����������.

#include <iostream>
void main()
{
	int a(5);
	//a = 5; ������ � ������� ���������
	std::cout << a << std::endl;
	a = 20;
	std::cout << a << std::endl;

	double b = 1.3425;
	std::cout << b << std::endl;
	char c = 'f';
	std::cout << c << std::endl;
	bool d = true;
	std::cout << d << std::endl;
}
*/
/*-----------------------------���������. �������� ����� const.

#include <iostream>
void main()
{
	const int COUNT_DAYS_IN_WEEK = 7;
	std::cout << COUNT_DAYS_IN_WEEK << std::endl;

	const char NEW_LINE = '\n';
	std::cout << NEW_LINE << std::endl;
}
*/
/*----------------------------���� ������. Cin

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int Var, Var2;

	std::cout << "������� ��� �����" << std::endl;
	std::cin >> Var >> Var2;
	std::cout << "�� ����� �����: "<< Var << std::endl<< std::endl;
}
*/
/*------------------------------���������. �������������� �������� � �������
#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	std::cout << "������� 3 �����: "<< std::endl;
	std::cin >> a >> b >> c;
	std::cout << a + b + c << '\t' << a - b - c << '\t' << a * b * c << '\t' << (a + b + c) / 3;
}
*/
/*-------------------------��������� � ���������. ����������� � ����������

#include <iostream>
void main()
{
	int a = 1, b;

	b = ++a * a++;
	std::cout << b << std::endl;
	std::cout << a << std::endl;
}
*/
/*------------------------����������� �������������� �����

#include<iostream>
void main() 
{
	int a = 0;
	a += 20;
	std::cout << a << std::endl;

	a -= 10;
	std::cout << a << std::endl;

	a *= 2;
	std::cout << a << std::endl;

	a /= 2;
	std::cout << a << std::endl;
}
*/
/*---------------------------- - ���������� ��������
#include <iostream>
void main()
{
	/* ...................��������� ���������
	< ������ 
	> ������
	<= ������ �����
	>= ������ �����
	......................��������� ���������
	== �����
	!= �� �����
	......................���������� �������� ����������� � ������������� ��������
	&& �
	|| ���
	!= ��
	

	//std::cout << (4 > 5) << std::endl;

	int a = 2, b = 3;
	std::cout << ((a > b) && (a == b)) << std::endl;
}
*/
/*----------------------------����������� if else

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	/*
	if (����������� ��� ���������)
	{
		�������� 1;
	}
	
	//bool is_rain = false; //���� ��������� ����� �� � if �� ��������, � �������� � else
	//if (is_rain)
	//{
		//std::cout << "���� �����" << std::endl;
	//}
	//else
	//{
		//std::cout << "����� �� ����" << std::endl;
	//}

	int a;
	std::cout << "������� �����: ";
	std::cin >> a;

	if (a >= 5) 
	{
		std::cout << "����� ������ ��� ����� 5 !" << std::endl;
	}
	else
	{
		std::cout << "����� ������ 5 !" << std::endl;
	}
}

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	std::cout << "������� �����: " << std::endl;
	std::cin >> a;
	if (a % 2 == 0)
	{
		std::cout << "����� ������!" << std::endl;
	}
	else
	{
		std::cout << "����� �� ������ :(" << std::endl;
	}
}
*/
/*--------------------------Switch. ��� ���. ������. ���������. �������� �������������� ������
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	switch (���������) ---------  ��������� ��������
	{
	case �������� 1: 
	{
		�������� 1;
		break;
	}
	case �������� 2:
	{
		�������� 2;
		break;
	}
	case �������� 3:
	{
		�������� 3;
		break;
	}
	case �������� 4:
	{
		�������� 4;
		break;
	}
	default:
	{
		�������� �� ���������;
		break;
	}
	}

	int a;
	std::cin >> a;

	switch(a)
	{
	case 1:
	{
		std::cout << "�� ����� 1";
	}
	break;

	case 2:
	{
		std::cout << "�� ����� 2";
	}
	break;

	case 3:
	{
		std::cout << "�� ����� 3";
	}
	break;

	default:
	{
		std::cout << "�� ����� �� ���������� ��������!!!";
		break;
	}
	}
}
*/
/*---------------switch ����������� �������� �������
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, choice;
	std::cout << "������� 2 �����: ";
	std::cin >> a >> b;
	std::cout << "�������� ��������:\n" <<
		"1 - ��������\n" <<
		"2 - ���������\n" <<
		"3 - ���������\n" <<
		"4 - �������\n" <<
		"5 - ������� �� ������� �� ����� �����\n";

	std::cin >> choice;

	switch (choice)
	{
	case 1:
	{
		std::cout << "�������� = " << a + b << std::endl;
	}
	break;

	case 2:
	{
		std::cout << "��������� = " << a - b << std::endl;
	}
	break;

	case 3:
	{
		std::cout << "��������� = " << a * b << std::endl;
	}
	break;

	case 4:
	{
		std::cout << "������� = " << a / b << std::endl;
	}
	break;

	case 5:
	{
		std::cout << "������� ������� �� ����� ����� = " << a % b << std::endl;
	}
	break;

	default:
	{
		std::cout << "�� ���� ����� ������� :(";
	}
	break;

	}
}
*/
/*------------------���� while
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0;

	// std::cout << "����� ������� �� �����" << std::endl;

	while (�����������)
	{
		��������;
	}
	while (a<20)
	{
		std::cout << "����������� � = " << a << std::endl;
		a++;
	}
}
*/
/*--------------------------���� do while
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 18;

	// std::cout << "����� �������!" << std::endl;

	do //--------- do while ������ ��������� ���� �� ���� ���
	{
		std::cout << "����� �������!" << std::endl;
		a++;
	} while (a<20);
}
-----------------------�� ���������, ��������� ������, ���-�� � ��� 
#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	char symbol;
	int amount_of_symbols, kind_of_line, i = 0, choise_result; // --- ������������� ����������

	std::cout << "������� ������: " << std::endl; 
	std::cin >> symbol; //------ ���� ����������

	std::cout<< "������� ����� ��������: " << std::endl;
	std::cin >> amount_of_symbols; //------ ���� ����������

	std::cout<< "�������� ��� �����:" <<
		"1 - ������������\t\n" <<
		"2 - ��������������\t\n" << std::endl;

	std::cin >> choise_result;

	switch (choise_result)
	{
	case 1:
	{
		while (i < amount_of_symbols)
		{
			std::cout << symbol << std::endl;
			i++;
		}
	}
	break;

	case 2:
	{
		while (i < symbol)
		{
			std::cout << symbol;
			i++;
		}
	}
	break;

	default:
	{
		std::cout << "���������� �����! �� ���������� ��� ������" << std::endl;
		return;
	}
	}
}
#include <iostream>
void main()
{
	int min_number, max_number, sum = 0;
	int i;//----------------------------------------------------------����������� �����������

	std::cout << "Enter the first number of a range: " << std::endl;
	std::cin >> min_number;//-----------------------------------------���� ������� �����

	std::cout << "Enter the second number of a range: " << std::endl;
	std::cin >> max_number;//-----------------------------------------���� ������� �����

	if (min_number < max_number)//------------------------------------���� ������ ����� ������ �������
	{
		i = min_number;//---------------------------------------------���������� i ������������� �������� ������� �����
		while (i <= max_number)//-------------------------------------���� i ������ ��� ����� ������� �����
		{
			if (i % 2 != 0)//-----------------------------------------�������� �� ��������. ���� ������� ������� ����� (i) �� 2 �� ����� 0, �� ������ ��� ��� �����(i) ��������
			{
				sum += i;//-------------------------------------------
				
			}
			i++;
		}
		std::cout << "The sum of odd numbers: " << sum << std::endl;
	}

	else if (min_number > max_number)
	{
		i = max_number;
		while (i <= min_number)
		{
			if (i % 2 != 0)
			{
				sum += i;

			}
			i++;
		}
		std::cout << "The sum of odd numbers: " << sum << std::endl;
	}

	else if (min_number = max_number)
	{
		if (min_number % 2 != 0)
		{
			sum = min_number;
			std::cout << "The sum of odd numbers:" << sum << std::endl;
		}
		else
		{
			std::cout << "There no odd numbers in this range!" << std::endl;
		}
	}
}
---------------------------------------------------------------�������� ������� ����� �������.... v2.0
#include <iostream>
void main()
{
	int kolvo, linetype, i = 0;
	char symbol; //--------------------------------------------------����������� ����������
	std::cout << "Write symbol:" << std::endl;
	std::cin >> symbol;
	std::cout << "Write kolvo:" << std::endl;
	std::cin >> kolvo;
	std::cout << "Choose type of line: " <<
		"1 - vertical\n" <<
		"2 - horizontal\n" << std::endl; //--------------------------���� ���������� � ����� ���� �����
	std::cin >> linetype;

	if (linetype != 1 && linetype != 2) //---------------------------������ ���� ��� ������ �� ���������� ��� �����(�� 1 ��� �� 2)
	{
		std::cout << "Try again!" << std::endl;
		return; //---------------------------------------------------�������� ���������
	}
	while (i < kolvo)//----------------------------------------------���� i(0) ������ ��� �������� ���������� ��������
	{
		if (linetype == 1) //----------------------------------------������ ���� ������ �������������� ��� �����
		{
			std::cout << symbol << std::endl; //---------------------������� ����� ��������� ����������� �� �� endl
		}

		if (linetype == 2)//-----------------------------------------������ ���� ������ ������������ ��� �����
		{
			std::cout << symbol;//-----------------------------------����� � ������
		}
		i++;//------------------------------------------------------- i ������������� � ������ ����� �� 1 �� ��� ��� ���� �� ������ ������ ��������� ���������� ��������
	}
}
*/
/*------------------------------------------------------------------- ����� ����� �������� ���� ������ 2.0
#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");

	int sum = 0;
	int range_begin, range_end;

	std::cout << "Enter the start" << std::endl;
	std::cin >> range_begin;

	std::cout << "Enter the end" << std::endl;
	std::cin >> range_end;
	do
	{
		if (range_begin % 2 != 0)
		{
			sum += range_begin;
		}
		range_begin++;
	} while (range_begin<= range_end);
	std::cout << "The sum of all odd numbers is: " << sum << std::endl;
}
*/
/*-------------------------------------------------------------------���� FOR � �����
#include <iostream>
void main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		std::cout << "I is: " << i <<std::endl;
	}
}

#include <iostream>
void main()
{
	//int i =0; //---------------------------------------------------����� ���������������� ��� ����� for
	
	//std::cout << "First I is: "<< std::endl;
	//for (; i < 10; i++)
	//{
	//	std::cout << "I is: " << i << std::endl;
	//}

	//std::cout << "Second I is: "<< std::endl;
	//for (int i = 0; //i < 10//; i++)
	//{
	//	std::cout << "I is: " << i << std::endl;
	//}

	for (int i = 0, j = 10; i < 10 && j !=5; i++, j--)
	{
		std::cout << "I:   " << i << std::endl;
		std::cout << "J:   " << j << std::endl;
	}
}
*/
/*-------------------------------------------------------------------�������� ����� break. �������� break
#include<iostream>
void main()
{
	std::cout << "Start of the cycle!" << std::endl;
	//for (int i = 0; i<10; i++)
	//{
	//	std::cout << "Variable i is: " << i << std::endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//}
	int i = 0;
	while (true)
	{
		std::cout << "Variable i is: " << i << std::endl;
		i++;
		if (i == 6)
		{
			break;
		}
	}
	std::cout<<"End of the cycle!"<<std::endl;
}
*/
/*-------------------------------------------------------------------�������� continue
#include <iostream>
void main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			continue;
		}
		std::cout << "I is: " << i << std::endl;
	}
}
*/
/*-------------------------------------------------------------------������ � ����������
#include <iostream>

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

void main()
{
	int a = 5;

	int b = 6;

	int c;

	//c = a + b;

	c = sum(a, b);

	std::cout << c << std::endl;
}
// f5 - ������ �����
// shift + f5 = ��������� �����
// f10 - ��������� ���
// f11 - ��� � ������� 
*/
/*-------------------------------------------------------------------��������� �����
#include <iostream>
void main()
{
	for (int i = 0; i < 5; i++)
	{
		setlocale(LC_ALL, "Rus");
		std::cout << "�������� 1 ���� for �������� � " << i << std::endl;

		for (int j = 1; j < 5; j++) //-------------------------------� ����� ����� 1 ��������� ���� 2 . �� ����������� ���� j<5 � �������� ����� �������� ����� 1 � �����
		{
			std::cout << "\t�������� 2 ���� for �������� � " << j << std::endl;
		}
	}
}
�������� �������: 
�������� ���������, ������� ������� �� ����� ������������� �������� *. 
������ � ������ ������� �������������.

#include <iostream>
void main()
{
	int length, width;

	std::cout << "Enter the length and the width of the rectangle: " << std::endl;
	std::cin >> length >> width; // ---------------------------------�������������� ���������� ����� � ������, ������ ������� ��

	for (int i = 0; i < width; i++)//--------------------------------���� i ������ ��� ������, ���������� ������ ����
	{
		for (int j = 0; j < length; j++)//---------------------------���� j ������ ��� �����, ������� ��������� � ���
		{
			std::cout << "*";
		}
		std::cout << std::endl;//------------------------------------������ ��� ���������� � ��������� �� ����� ������� � ��� ������
	}
}
*/
/*-------------------------------------------------------------------��� ����� ������(����������). ������. ������
#include <iostream>
void main()
{
	// ���_������ ��� [���������� ���������];
	int arr[4]; // ������������� �������

	arr[0] = 5; // ������������ ������� �����
	arr[1] = 7;
	arr[2] = 25;
	arr[3] = 3333;

	std::cout << arr[4] << std::endl; //-----------------------------����� ������ �.� ��� ������ �������
}
*/
/*-------------------------------------------------------------------������� ������������� ��������
#include <iostream>
void main()
{
	int arr[] = { 1, 3 ,45, 3536 }; //-------------------------------���� ��� � int arr[5]; ����� ���� ��� ����� (=)
	int arr[4]{}; //-------------------------------------------------���� ��� � �������

	std::cout << arr[3] << std::endl;
}
*/
/*-------------------------------------------------------------------����� �������. ������� � �����. ���� � ��������. Array c++ 
#include <iostream>
void main()
{
	const int SIZE = 5;//-------------------------------------------��������� ����� �� ��������� ��� ��������� ����� �������
	//int arr[SIZE]{55, 34, 3632, 236, 326};

	int arr[SIZE]; //-----------------------------------------------������ ����� ����� 5 �������� � ���� ��� �������� '�����'

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;//-----------------------------------------------������� ������� ������� ������������� ����� i � �����
		
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl; //------------------------������ ������ ��������� �� �����
	}
}
*/
/*------------------------------------------------------------------sizeof
#include <iostream>
void main()
{
	//-----------���������� ����� ������ ��� ���������� � ������

	//int a;

	//std::cout << sizeof(a) << std::endl;//--------sizeof ������ ���������� ����� ������ ���������� ��� ����������
	//����� ����� ���������� ������ � ���������

	//const int SIZE = 10;
	double arr[]{4, 45, 2436, 214, 7443};

	//int a = sizeof(arr);//---�������� ������ �������
	//int b = sizeof(int);//---�������� ������ ���� ������(int = 4)

	//std::cout << sizeof(arr) << std::endl; //---��������� 20 �.� 5 ��������� �� 4 �����

	//std::cout << sizeof(arr)/sizeof(int) << std::endl; //---- ����� �� ��� ������(4 (�����))

	//std::cout << a/b << std::endl;//---- ���� ��� � ����

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) // ----����������� �������
	{
		std::cout << arr[i] << std::endl;
	}

	//--- i < sizeof(arr) / sizeof(int) ����� i < sizeof(arr) / sizeof(arr[0]) ---- sizeof(arr[0]) ������� ��� ������ ������� ������� ������� � ������� � ������� �� ���� ������ ������

	//std::cout << sizeof(a) << std::endl;
}
*/
/*-------------------------------------------------------------------rand. srand. rand ������ ��������. srand time null. ���������� ��������� �����
#include <iostream>
#include <ctime> //---------------------------����������� ���������� ����� ������������ � �������

void main()
{
	//srand(25);//-------------------------------------���������� �������� �������� �������� �����(25)
	
	//srand(time(NULL));//---------------------------�������� time() � �������. ������������� ����� ������� �� ������(�� 1 ������ 70-�� ����)
	//---------------��� ���� ����� ������ ������� ���� � ���� ��������, ����� ���������������� ������� srand()
	//---------------------srand �������� ������ ���� ���

	//rand();//--------------------------------------��������� �������
	
	//int a = rand() % 10 + 5;//------------------������������ ����������. ����� �� 0 �� 10
	//std::cout << a << std::endl;//------------������� ���� � �� �� �������� ������ ��� ������� ������������� �� ����� � ��� �� �����, ������� ������ ������� srand()

	//a = rand() % 10 + 5;//-----------------------�� 5 �� 15
	//std::cout << a << std::endl;

	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
*/
/*-------------------------------------------------------------------
// ------��: ��������� ������ �� 10 ��������� ���������� ������� �� 0 �� 20, �� �� ������ ���� ���������� ��������
//#include <iostream>
//#include <ctime>
//
//void main()
//{
//	int const SIZE = 10;
//	int arr[SIZE];
//
//	bool copy_number;
//
//	srand(time(NULL));
//
//	//for (int i = 0; i < SIZE; i++)
//	//{
//	//	arr[i] = rand() % 20;
//	//	std::cout << arr[i] << std::endl;
//	//}
//	//std::cout << "--------------------------------------------------------" << std::endl;
//
//	for (int i = 0; i < SIZE; )
//	{
//		copy_number = false; //-----------------------------���������� ���������� ����� false �� ���������, �.� �� �� ����� ����������
//		int new_random_value = rand() % 20; //------------------�������� ������ ����� ���� ����� ����������
//
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] == new_random_value)//------------------�������� ��������� �� ����� i � ���� 
//			{
//				copy_number = true;
//				break;
//			}
//		}
//		if (!copy_number)
//		{
//			arr[i] = new_random_value;
//			i++;
//			
//		}
//	}
//	for (int i = 0; i < SIZE; i++)
//	{
//		
//		std::cout << arr[i] << std::endl;
//	}
//}
// ----------------------------------------�� ��� ������
#include <iostream>
#include <ctime>

void main()
{
	srand(time(NULL));

	int const SIZE = 20;
	int arr[SIZE];
	bool already_there;

	for (int i = 0; i < SIZE; )
	{
		already_there = false;
		int new_value = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == new_value)
			{
				already_there = true;
				break;
			}
		}
		if (!already_there)
		{
			arr[i] = new_value;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

#include <iostream>
#include <ctime>
---------------------------------------------�� ����������� ����� � �������
void main()
{
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	bool already_there;

	for (int i = 0; i < SIZE; )
	{
		already_there = false;
		int new_value = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == new_value)
			{
				already_there = true;
				break;
			}
		}
		if (!already_there)
		{
			arr[i] = new_value;
			i++;
		}
	}


	int minimum = arr[0]; //------------����������� ����� ����� 0
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < minimum) //----------���� ������� ������� � ������� ������ ��� ����������� �����
		{
			minimum = arr[i]; //-----------------����������� ������� ������� ����������, ���� ������, �� ���� ���� ������
		}
	}
	std::cout << minimum << std::endl;
}
*/
/*-------------------------------------------------------------------��������� ������. �������������. �������. ���������
#include <iostream>

void main()
{
	//const int ROW = 3; //-----------------������
	//const int COL = 4; //-----------------�������
	//int arr[ROW][COL]; // ----------------������ � ������ ������, ������ �� ������ ������


	//std::cout << arr[2][0] << std::endl;
	//arr[2][0] = 1111111111111;
	//std::cout << arr[2][0] << std::endl;

	//int a;
	//a = 3;

	//������� �������������

	const int ROW = 5; //-----------------������
	const int COL = 4; //-----------------�������

	//int arr[ROW][COL]{}; // ����� ���������������� ����

	//int arr[ROW][COL]{ {2,4 ,66, 1}, {4344, 2134, 215, 12} }; //---------���������������� �������
	int arr[ROW][COL] //---------����� ��������� ����� (=) --------int arr[ROW][COL] = 
	{ 
		{2,4 ,66, 1}, 
		{4344, 2134, 215, 12} 
	};//-------------------------------------------�� �� ����� ��� � �������
	//--------------------������ ������� � ��������� ��� �������
	//------------------------------������ �������� ��� ������

	//-------------------����������� ��������� ���������� �������



	int a;
	a = 3;
}
*/
/*-------------------------------------------------------------------��������� ������� �����. ����������. ��������� ������ �����
#include <iostream>

void main()
{
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS];

	//---------------------------����� 2 ����� ��� ��� 2 ����������(������, �������)
	for (int i = 0; i < ROWS; i++)//--------------���� ����� �� ������� 
	{
		for (int j = 0; j < COLS; j++) //------------------���� ����� �� ��������
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << '\t'; //-----------------����� �������
		}
		std::cout<<std::endl; //-------------------------����� ������� � ������� �� ����� �������
	}
}
*/
/*-------------------------------------------------------------------������� c++ �������. ���������. ����������, ���������� �������. ���������, ���������. 
#include <iostream>
 //---------------------- ������� main ������ ���� ����� ������ �������
void foo()
{
	std::cout << "I am function, i've called!"<< std::endl;
	return;
}

int Sum(int a, int b)
{
	//int result;
	//result = a + b;

	//return result; = return a+b;----------------��� ����������� 
}


void main()
{
		��������� �������: 
		������������_�������� ���_�������(���������)
		{
		���� ��������������_����(���� �������);
		}

	//int c;
	//int q = 11;
	//int w = 123;

	//c = Sum(6, 7);
	//c = Sum(q, w);

	//std::cout << c << std::endl;

	//std::cout << Sum(5, 6) << std::endl;
}
*/
/*-------------------------------------------------------------------�������� ���������� � ������� �� ��������

#include <iostream>

int Foo(int a)//---------------������� ��������� �������� ������ ����� ������� ���������� � �������
{
	return ++a; //-------���������� ���������� ���������
}

void main()
{
	int a = 1;//---------��������� ���������� �� ��������� 1

	a = Foo(a);//-------------------������� �������� ���������� ������

	std::cout << a << std::endl;
}
*/
/*-------------------------------------------------------------------�������� ������� � �������
#include <iostream>

void FillArray(int arr[], const int SIZE)
{
	int a = sizeof(arr);

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void main() 
{
	const int SIZE = 10;
	int massiv[SIZE];

	int a = sizeof(massiv);

	FillArray(massiv, SIZE);
	ShowArray(massiv, SIZE);
}
*/
/*-------------------------------------------------------------------�������� �������
#include <iostream>

void Foo(); //------------��������.
//---------------������� main ������ ������ ������ ������� ���� ��� ����������
void Foo2();


void main()
{
	Foo();
	Foo2();
}

void Foo()
{
	std::cout << "I'm function!" << std::endl;

}

void Foo2()
{
	std::cout << "Hello" << std::endl;
}
*/
/*-------------------------------------------------------------------������� ���������. ���������� ���������� � ��������� ����������

#include <iostream>

//int b = 12;//---------------���������� ���������� ��� ��� �������� �����
//
////----------------------------���������� ���� ��� ���������, ��� ��� �������� � ������� ��������� ������ ����������� ������������
//void Foo()
//{
//	int z;
//}
//
//void main()
//{
//	int a;//-------------���������� ��������� � ������� ��������� ���� ������� main
//
//	if (true)
//	{
//		int a;
//		a = 0;
//	}

	//a = 22-------------����������� a ��������� � ������� ��������� ������� if

	//{
	//	int a;
	//	a = 345;
	//}

	//a = 32

	//�� �� ����� ��� � ����
//int a;
//
//void Foo(int a)
//{
//	a++;//---------------------������� �������� � ��������� ����������, � �� ����������
//}
//
//void main()
//{
//	Foo(2);
//	a++;
//	std::cout << a << std::endl;
//}
*/
/*-------------------------------------------------------------------��������� �� ���������. �������� ���������� � ������� �� ���������

#include<iostream>

void Foo(int q, int a = 5, double b = 0.5)
{
	for (int i = 0; i < a; i++)
	{
		std::cout << "#" << std::endl;
	}
}

void main()
{
	Foo(10);
}
*/
/*-------------------------------------------------------------------inline c++ ��� ���. �������� ����� inline. ������������ �������

#include <iostream>

inline int Sum(int a, int b)//--------------��������� ������ ����� �������� �������� ������ ���� ����� ���������� ��������� � �.�
{
	return a + b;
}


void main()
{
	
	std::cout << Sum(3, 5) << std::endl;
}
*/
/*-------------------------------------------------------------------���������� �������
#include <iostream>

int Sum(int a, int b, int c)
{
	a++;
	return a + b + c;
}

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

void main()
{
	std::cout<<Sum(5, 4)<<std::endl;
	std::cout << Sum(3.45, 5.356) << std::endl;
	std::cout << Sum(4, 6 , 23) << std::endl;
}
//------------------------������� ����� ����� ���������� ��������, � ����� ����� ����� ������ ���������� 
*/
/*-------------------------------------------------------------------������� �������
#include <iostream>

//template <typename T1, typename T2>
//T Sum(int a , int b)//-----------T ������ ���� ������
//T2 Sum(T1 a, T2 b)//-------------�� �� T2 ������� ������ double
//{
//	return a + b;
//}

//template <typename T1, typename T2>
//void Sum(T1 a, T2 b)
//{
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//}
//
//void main()
//{
//	Sum(2.5, "Parametr");
//}
template <class T>
void Sum(T a)
{
	std::cout << a << std::endl;
}

void main()
{
	Sum(2);
}
//---------------------class � typename ��� ���� � ����
*/
/*-------------------------------------------------------------------������� � ����

#include <iostream>
void main()
{
..--------------------------------���� paint
}
*/
/*-------------------------------------------------------------------�������� � ����

#include <iostream>
//-----------------------�������� ��� ����� ������� ����� ����

int Foo(int a)
{
	if (a < 1)
	{
		return 0;
	}
	a--;

	std::cout << a << std::endl;
	
	return Foo(a);
}

void main()
{
	Foo(5);
}
*/
/*-------------------------------------------------------------------��������. ��������� �����

#include <iostream>

int Fact(int N)
{
	if (N == 0)
		return 1;

	if (N == 1)
		return 1;

	//std::cout << N << std::endl;

	return N * Fact(N - 1); //-------------������� ���������, �� ����� ��������� ����� 
	//����� ��������� ����� N-1 � ������� �������� ����� ������� � ���������� N-1 � ��� �� ��� ��� ���� �� ���������� ������� ������ �� ��������
}

void main()
{
	//int a;
	//std::cin >> a; //-------------------���� � ������������� ���������� ��� ������ ����������������� ���������� �����

	std::cout << Fact(a) << std::endl;
}
*/
/*-------------------------------------------------------------------������������ ������. ������ ������. ���� � ����

#include <iostream>

void main()
{

}---------------------------���� paint
*/
/*-------------------------------------------------------------------���������. ��������� c++ �������������
*/ //-------------------���������� ����������� �� ����� ������ ����������
/*-------------------------------------------------------------------���������
#include <iostream>
void main()
{
	int a = 5;
	//int b = a; //----------b ��������� �� �������� ���������� �

	int* px = &a;//-----------��������� ����� ������ � ������� ����� ���������� a
	//--------------------- * ������ ��� ���������� ���� ���������
	// & - ��������� - �������� ������ ������, �� ���� ����� ����� � ���������� a � ��������� ���������� x

	//double* px = &a; //---------��� ��������� double, � �������� ���� ������ ����������, �� ������� ��������� - int. ��� ������ ������

	std::cout << px << std::endl;//-------------������� ����� ������

	std::cout << *px << std::endl;//--------�������������� � �������� ��������

	int* px2 = &a;

	std::cout << "px\t"<<px2 << std::endl;

	std::cout << "px2\t"<< * px2 << std::endl;


	*px2 = 2;//---------�������������� ��������� � ����������� ������ � ������ �� ������� ��������� ���������, ������ �������� (2)

	std::cout << "a\t" << a << std::endl;

	std::cout << "px\t" << *px2 << std::endl;
	std::cout << "px\t" << *px << std::endl;

}
*/
/*-----------------------------���������� ����������
#include <iostream>

void main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 3,46,685,45,34623 };
	std::cout << arr + 10 << std::endl;
	//std::cout << *arr << std::endl;//---------��� ��� ������ ��� ��������� �� ������ ������ � �������

	//for (int i = 0; i < SIZE; i++)
	//{
	//	std::cout << arr[i] << std::endl;
	//}
	//std::cout << "====================================" << std::endl;
	//int* pArr = arr;//------------��� ������� ��� ��������� �� ������ ������

	//std::cout << arr << std::endl;
	//std::cout << pArr << std::endl;
	//std::cout << "====================================" << std::endl;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	//std::cout << pArr[i] << std::endl;-----------������������ ���� ��� ����
	//	std::cout << *(pArr + i)<< std::endl;//----��������� �� ������� � ����� ������ � ���������� ��������� �� 4 �����(��� ���) � �� ���� ��������� �� ��������� ������ �������
	//}
}
*/
/*-------------------------------------------------------------------������� �������� ������� ����� ���������
#include <iostream>

void Foo(int *pa)//-------------- ������� ����� ��������� ��������� ���� int
{
	(*pa)++;//------------------- ���������� ������������� � ���������� �������� ���������� �� �������
}

void main()
{
	int a = 0;//------------------�������������� ���������� �
	std::cout << a << std::endl;

	Foo(&a);//--------------------�������� �������, ������ ������ �� ������� ������ �������� ���������� �
	std::cout << a << std::endl;
}
*/
/*-------------------------------------------------------------------������� ���������� �������� ������� ����� ���������

#include <iostream>

void Foo(int* pa, int* pb, int* pc)
{
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;
}

void main()
{
	int a = 0, b = 0, c = 1;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "Foo" << std::endl;
	Foo(&a, &b, &c);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
*/
/*
-----------------------------------------------�������� �������
#include <iostream>

void Foo(int *pa, int *pb)
{
	int *pResult;
	*pResult = *pa;
	*pa = *pb;
	*pb = *pResult;

}


void main()
{
	int a, b;

	std::cout << "Enter the first variable:\t" << std::endl;
	std::cin >> a;

	std::cout << "Enter the second variable:\t" << std::endl;
	std::cin >> b;

	Foo(&a, &b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
*/
/*-------------------------------------------------------------------C++ ������
#include <iostream>

void main()
{
	//int a = 5;
	//int* pa = &a; //----------���������

	//int& aRef = a;//---------������. ref - ��� � ���� ������. � - ��� �������� ����������

	int a = 5;

	int* pa = &a;

	int& aRef = *pa;

	int* ppa = &aRef;

	std::cout << a << std::endl;
	*ppa = 124;
	std::cout << a << std::endl;


	/*std::cout << pa << std::endl;
	std::cout << *pa << std::endl;
	pa+=2;
	std::cout << pa << std::endl;
	std::cout << *pa << std::endl;*/

	/*aRef+=2;
	std::cout << aRef << std::endl;*/

	/*std::cout << a << std::endl;
	std::cout << aRef << std::endl;
	aRef = 55;
	std::cout << a << std::endl;
	std::cout << "------------------------------------------" << std::endl;


	//int& pRef;//----------������ ������ ���� ����������������

}
*/
/*-------------------------------------------------------------------�������� ���������� � ������� �� ������

#include <iostream>

void Foo(int a)//----------�������� �� ��������
{
	a = 1;//----��������� ����� ����� ���������� � � ������� ������ �� ���������
}

void Foo2(int &a)//------�������� �� ������
{
	a = 2;//-------��� ��� �������� ������� ������ ����������, �� ������ �������� ����� ��������
}

void Foo3(int *a)//-----�������� �� ���������
{
	*a = 3;//-------��� ������ ������� �������� ������� ������ � � ���� ������� �������� �������� �� ������� ������ � ������� ������ �������� ��������
}

void main()
{
	int value = 5;
	std::cout << "value\t" << value << std::endl << std::endl;;

	std::cout << "Foo\t" << std::endl;
	Foo(value);//--------�������� ����������
	std::cout << "value\t" << value<<std::endl<<std::endl;


	std::cout << "Foo\t" << std::endl;
	Foo2(value);//------������ �������� ����������
	std::cout << "value\t" << value<<std::endl << std::endl;


	std::cout << "Foo\t" << std::endl;
	Foo3(&value);//--------�������� �� ������� � ������
	std::cout << "value\t" << value<<std::endl << std::endl;
}
*/
/*-------------------------------------------------------------------������� ���������� �������� ������� ����� ������

#include <iostream>

void Foo(int &a, int &b, int &c)
{
	a = 10;

	b *= 2;

	c -= 100;
}

void main()
{
	system("chcp 1251");//--------�� ��������� � ����

	int a = 0, b = 4, n = 34;

	std::cout << "a =\t" << a << std::endl;
	std::cout << "b =\t" << b << std::endl;
	std::cout << "n =\t" << n << std::endl;

	Foo(a, b, n);

	std::cout << "a =\t" << a << std::endl;
	std::cout << "b =\t" << b << std::endl;
	std::cout << "n =\t" << n << std::endl;
}
*/
/*---------------------------------------------------------�� ������� SWAP
#include <iostream>
#include <string>

template <typename T>
void Swap(T& a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void main()
{
	int one = 1;
	int two = 2;

	char one1 = 't';
	char two1 = 'f';

	std::string str1 = "Hello world";
	std::string str2 = "Hello school :(";

	Swap(str1, str2);
	//std::cout << one << std::endl;
	//std::cout << two << std::endl;

	//std::cout << "----------------------------------------------" << std::endl;

	//std::cout << one1 << std::endl;
	//std::cout << two1 << std::endl;

	//std::cout << "----------------------------------------------" << std::endl;

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
}
*/
/*-------------------------------------------------------------------new/delete

#include <iostream>

void main()
{
	//----------�������� ����� � ������������ ������
	int* pa = new int;//------------����� �������� ������� ��� ���� int

	*pa = 10;

	std::cout << *pa << std::endl;

	delete pa; //---------������ �� ����� ������

	std::cout << pa << std::endl;
}
*/
/*-------------------------------------------------------------------NULL/nullptr

#include <iostream>

void main()
{
	//----------�������� ����� � ������������ ������
	//int* pa = new int;//------------����� �������� ������� ��� ���� int

	//*pa = 10;

	//std::cout << *pa << std::endl;

	//delete pa; //---------������ �� ����� ������, �� � ��� ��� ��� ������� ����� ������

	//std::cout << pa << std::endl;

	int* pa = new int;
	*pa = 10;
	std::cout << *pa << std::endl;
	delete pa;
	//------------------------------------------------------------------
	//pa = 0; //---  0 � NULL - ��� ���� � ����

	pa = nullptr;//--------nullptr ��� ��������� ��� ������

	//if (pa != NULL)//-------- ���� pa �� ����� ����, �� �������. 
	if (pa != nullptr)
	{
		std::cout << pa << std::endl;
	}
	delete pa;

	//         ������� ������� ������
	//         ����� ����������� ���� ��� NULL/nullptr
}
*/
/*-------------------------------------------------------------------������������ ������ �++ ������. ��������, ����������, ��������, ������ ������������� �������
#include <iostream>

void main()
{
	system("chcp 1251");
	//int SIZE = 0;//---------------������ ����� ��������, ������� �� const
	int SIZE = 5;
	//std::cin >> SIZE;
	int* arr = new int[SIZE];//----������� ������


	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << '\t';//-------����� �������� ��������� �������

		std::cout << arr + i << std::endl;//------������ ��������� �������
	}

	delete[] arr;//-------------������� ������ �������
}
*/
/*-------------------------------------------------------------------��������� ������������ ������ c++ ������. ��������, ����������, ��������
#include <iostream>

void main()
{
	system("chcp 1251");

	int rows = 5;
	int cols = 6;

	int** arr = new int *[rows]; //-----������� ������ �� ���������, ��� ��� ����� ������� ��������� � �������� ��������
	
	for (int i = 0; i < rows; i++)//----------������� ������ ������ � ������� ����� ������
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)//-----------���������� ��������� ������ � ������� �� �����
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << '\t';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i]; //--------������� ������� �� ������ �������� ������� �������
	}

	delete[] arr; //----------������� ������ ������, � ������ ������ � ������� ��������� ������
}
*/
/*-------------------------------------------------------------------����������� ��������� �������.����������� ���������.����������� ���������
-----------------����������� ������������� �������

#include <iostream>

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int*const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << '\t';
	}std::cout << std::endl;
}

void main()
{
	int size = 10;

	int* firstArray = new int[size];
	int* secondArray = new int[size];
	
	FillArray(firstArray, size);
	FillArray(secondArray, size);

	std::cout << "FirstArray =\t";
	ShowArray(firstArray, size);

	std::cout << "secondArray =\t";
	ShowArray(secondArray, size);

	//firstArray = secondArray; -----------��������� ������� ��������� �������� �������

	delete[] firstArray; //---------������ ������ ������� �������

	firstArray = new int[size]; //-----������������ ����� � ������
	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i]; //----������� �������� 1 ������� ����������� �������� 2 �������. �� ���� �� ������� ����� ������ � ��������� ����������� �� ������� ������� � ����� ������
	}

	std::cout << "==============================================" << std::endl;
	std::cout << "FirstArray =\t";
	ShowArray(firstArray, size);

	std::cout << "secondArray =\t";
	ShowArray(secondArray, size);

	delete[] firstArray; //--------������ ������ ��������
	delete[] secondArray;
}
*/
/*-------------------------------------------------------------------�������� ������ �������. �������. �������� ������� � ������. ���������� �������

#include <iostream>

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << '\t';
	}std::cout << std::endl;
}

void push_back(int*& arr, int &size, int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value; //   =[size++]
	size++;

	delete[] arr;

	arr = newArray;
}
//��������� ��������� �� ������ � int* arr, ��  �������� ��� �� �������� �.�. ��������� ����� ���������, � ������� ������������� ����� �������. 
//��-����� arr �� ���������� ������� � arr �� main- ���������� ������ ���������, ����������� �� ���� � ��� �� ������. 
//�������� ���� ������ ����� ��� �� �������, ��� � �� main. �� ��������� ������ ���������(arr) � ������� ����� �� �������� �� ���������(arr) �� main.
//��������� ��������� �� ������ � int*& arr, �� �������� ���(���������) �� ������ �.�.  arr �� �������- ������ �� arr(���������) �� main. 
//��� ������, ��� ��� ��������� � arr �� ������� ��������� �� arr �� main. ������, ������ �� ���������(int *&) ��������� �������� ��������� � ������� �� �� ��������,  � �� ������. 
//��� � ���� ������� ��������� ����������� ��������� �������� � arr �� main (��� � ������� ��� � � ����� ���������� (��������, ��������� ��������� ����� ������))


void pop_back(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	delete arr;

	arr = newArray;
}

void main()
{
	int size = 5;
	int* arr = new int[size];

	FillArray(arr, size);
	ShowArray(arr, size);
	push_back(arr, size, 1);
	ShowArray(arr, size);
	pop_back(arr, size);
	ShowArray(arr, size);

	delete[]arr;
}
*/
/*-------------------------------------------------------------------������ � c++. ���� ����������. char*/

























