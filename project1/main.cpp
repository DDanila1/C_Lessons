/*------------------------Урок1 hello world
#include <iostream>

void main() 
{
	system("chcp 1251");
	std::cout << "Привет мир!" << std::endl;
}
*/

/*----------------------std и порядок выполнения программы
#include <iostream>
int main()
{
	std::cout << "Hello world. Привет мир!" << std::endl;
	setlocale(LC_ALL, "Rus");
	std::cout << "Hello world. Привет мир!" << std::endl;
}
*/
/*------------------------------ - Escape - последовательности * /
#include < iostream>

//\b ---------удаление последнего ввведенного символа
//\n ---------перейти на начало новой строчки
//\t ---------сделать табуляцию
//\\ ---------вывести обратную черту
//\""---------вывести двойную кавычку
//\''---------вывести одинарную кавычку

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Привет мир!" << std::endl;
}
*/
/*---------------------Типы данных в C++

//float-4 байт
//double-8 байт

//int-4 байт
//short-2 байт
//long-4 байт

//char-1 байт

//bool-1 байт
*/

/*---------------------Переменные. Способы объявления. Правила именования.

#include <iostream>
void main()
{
	int a(5);
	//a = 5; запись в скобках идентична
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
/*-----------------------------Константы. Ключевое слово const.

#include <iostream>
void main()
{
	const int COUNT_DAYS_IN_WEEK = 7;
	std::cout << COUNT_DAYS_IN_WEEK << std::endl;

	const char NEW_LINE = '\n';
	std::cout << NEW_LINE << std::endl;
}
*/
/*----------------------------Ввод данных. Cin

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int Var, Var2;

	std::cout << "Введите два числа" << std::endl;
	std::cin >> Var >> Var2;
	std::cout << "Вы ввели числа: "<< Var << std::endl<< std::endl;
}
*/
/*------------------------------Операторы. Арифметические операции с числами
#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	std::cout << "Введите 3 числа: "<< std::endl;
	std::cin >> a >> b >> c;
	std::cout << a + b + c << '\t' << a - b - c << '\t' << a * b * c << '\t' << (a + b + c) / 3;
}
*/
/*-------------------------Инкремент и декремент. Постфиксный и префиксный

#include <iostream>
void main()
{
	int a = 1, b;

	b = ++a * a++;
	std::cout << b << std::endl;
	std::cout << a << std::endl;
}
*/
/*------------------------сокращенные арифмитические формы

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
/*---------------------------- - логические операции
#include <iostream>
void main()
{
	/* ...................операторы сравнения
	< меньше 
	> больше
	<= меньше равно
	>= больше равно
	......................операторы равенства
	== равно
	!= не равно
	......................логические операции объединения и отрицательная инверсия
	&& и
	|| или
	!= не
	

	//std::cout << (4 > 5) << std::endl;

	int a = 2, b = 3;
	std::cout << ((a > b) && (a == b)) << std::endl;
}
*/
/*----------------------------конструкция if else

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	/*
	if (утверждение или выражение)
	{
		действие 1;
	}
	
	//bool is_rain = false; //если выражение ложно то в if не попадаем, а попадаем в else
	//if (is_rain)
	//{
		//std::cout << "Идет дождь" << std::endl;
	//}
	//else
	//{
		//std::cout << "Дождь не идет" << std::endl;
	//}

	int a;
	std::cout << "Введите число: ";
	std::cin >> a;

	if (a >= 5) 
	{
		std::cout << "Число больше или равно 5 !" << std::endl;
	}
	else
	{
		std::cout << "Число меньше 5 !" << std::endl;
	}
}

#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	std::cout << "Введите число: " << std::endl;
	std::cin >> a;
	if (a % 2 == 0)
	{
		std::cout << "Число четное!" << std::endl;
	}
	else
	{
		std::cout << "Число не четное :(" << std::endl;
	}
}
*/
/*--------------------------Switch. Что это. Пример. Синтаксис. Оператор множественного выбора
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	switch (выражение) ---------  принимает значение
	{
	case значение 1: 
	{
		действие 1;
		break;
	}
	case значение 2:
	{
		действие 2;
		break;
	}
	case значение 3:
	{
		действие 3;
		break;
	}
	case значение 4:
	{
		действие 4;
		break;
	}
	default:
	{
		действие по умолчанию;
		break;
	}
	}

	int a;
	std::cin >> a;

	switch(a)
	{
	case 1:
	{
		std::cout << "Вы ввели 1";
	}
	break;

	case 2:
	{
		std::cout << "Вы ввели 2";
	}
	break;

	case 3:
	{
		std::cout << "Вы ввели 3";
	}
	break;

	default:
	{
		std::cout << "Вы ввели не корректное значение!!!";
		break;
	}
	}
}
*/
/*---------------switch калькулятор домашнее задание
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, choice;
	std::cout << "Введите 2 числа: ";
	std::cin >> a >> b;
	std::cout << "Выбирите операцию:\n" <<
		"1 - сложение\n" <<
		"2 - вычитание\n" <<
		"3 - умножение\n" <<
		"4 - деление\n" <<
		"5 - остаток от деления на целое число\n";

	std::cin >> choice;

	switch (choice)
	{
	case 1:
	{
		std::cout << "Сложение = " << a + b << std::endl;
	}
	break;

	case 2:
	{
		std::cout << "Вычитание = " << a - b << std::endl;
	}
	break;

	case 3:
	{
		std::cout << "Умножение = " << a * b << std::endl;
	}
	break;

	case 4:
	{
		std::cout << "Деление = " << a / b << std::endl;
	}
	break;

	case 5:
	{
		std::cout << "Остаток деления на целое число = " << a % b << std::endl;
	}
	break;

	default:
	{
		std::cout << "Не знаю такую команду :(";
	}
	break;

	}
}
*/
/*------------------Цикл while
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0;

	// std::cout << "Текст вывелся на экран" << std::endl;

	while (утверждение)
	{
		действие;
	}
	while (a<20)
	{
		std::cout << "Переменнная а = " << a << std::endl;
		a++;
	}
}
*/
/*--------------------------Цикл do while
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 18;

	// std::cout << "Текст вывелся!" << std::endl;

	do //--------- do while всегда выведется хотя бы один раз
	{
		std::cout << "Текст вывелся!" << std::endl;
		a++;
	} while (a<20);
}
-----------------------ДЗ программа, выводящая символ, кол-во и тип 
#include <iostream>
void main()
{
	setlocale(LC_ALL, "Rus");
	char symbol;
	int amount_of_symbols, kind_of_line, i = 0, choise_result; // --- инициализация переменных

	std::cout << "Введите символ: " << std::endl; 
	std::cin >> symbol; //------ ввод переменной

	std::cout<< "Введите длину символов: " << std::endl;
	std::cin >> amount_of_symbols; //------ ввод переменной

	std::cout<< "Выбирите тип линии:" <<
		"1 - Вертикальная\t\n" <<
		"2 - Горизонтальная\t\n" << std::endl;

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
		std::cout << "Попробуйте снова! Не корректный тип выбора" << std::endl;
		return;
	}
	}
}
#include <iostream>
void main()
{
	int min_number, max_number, sum = 0;
	int i;//----------------------------------------------------------определение переменнных

	std::cout << "Enter the first number of a range: " << std::endl;
	std::cin >> min_number;//-----------------------------------------ввод первого числа

	std::cout << "Enter the second number of a range: " << std::endl;
	std::cin >> max_number;//-----------------------------------------ввод второго числа

	if (min_number < max_number)//------------------------------------если первое число меньше второго
	{
		i = min_number;//---------------------------------------------переменной i присваивается значение первого числа
		while (i <= max_number)//-------------------------------------пока i меньше или равна второму числу
		{
			if (i % 2 != 0)//-----------------------------------------проверка на четность. Если остаток деления числа (i) на 2 не равен 0, то значит что это число(i) нечетное
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
---------------------------------------------------------------Домашнее задание вывод символа.... v2.0
#include <iostream>
void main()
{
	int kolvo, linetype, i = 0;
	char symbol; //--------------------------------------------------определение переменных
	std::cout << "Write symbol:" << std::endl;
	std::cin >> symbol;
	std::cout << "Write kolvo:" << std::endl;
	std::cin >> kolvo;
	std::cout << "Choose type of line: " <<
		"1 - vertical\n" <<
		"2 - horizontal\n" << std::endl; //--------------------------ввод переменных и выбор типа линии
	std::cin >> linetype;

	if (linetype != 1 && linetype != 2) //---------------------------случай если был введен не корректный тип линии(не 1 или не 2)
	{
		std::cout << "Try again!" << std::endl;
		return; //---------------------------------------------------закрытие программы
	}
	while (i < kolvo)//----------------------------------------------пока i(0) меньше чем введеное количество символов
	{
		if (linetype == 1) //----------------------------------------случай если выбран горизоньальный тип линии
		{
			std::cout << symbol << std::endl; //---------------------символы будут выводится вертикально из за endl
		}

		if (linetype == 2)//-----------------------------------------случай если выбран вертикальный тип линии
		{
			std::cout << symbol;//-----------------------------------вывод в строку
		}
		i++;//------------------------------------------------------- i увеличивается с каждым разом на 1 до тех пор пока не станет меньше введеного количества символов
	}
}
*/
/*------------------------------------------------------------------- Вывод суммы нечетных цифр версия 2.0
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
/*-------------------------------------------------------------------Цикл FOR и фишки
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
	//int i =0; //---------------------------------------------------можно инициализировать вне цикла for
	
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
/*-------------------------------------------------------------------Ключевое слово break. Оператор break
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
/*-------------------------------------------------------------------Оператор continue
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
/*-------------------------------------------------------------------Работа с отладчиком
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
// f5 - начать дебаг
// shift + f5 = закончить дебаг
// f10 - следующий шаг
// f11 - шаг с заходом 
*/
/*-------------------------------------------------------------------Вложенные циклы
#include <iostream>
void main()
{
	for (int i = 0; i < 5; i++)
	{
		setlocale(LC_ALL, "Rus");
		std::cout << "Сработал 1 цикл for итерации № " << i << std::endl;

		for (int j = 1; j < 5; j++) //-------------------------------В цикле номер 1 находится цикл 2 . он выполняется пока j<5 и начнется новая итерация цикла 1 и опять
		{
			std::cout << "\tСработал 2 цикл for итерации № " << j << std::endl;
		}
	}
}
Домашнее задание: 
Написать программу, которая выводит на экран прямоугольник символом *. 
Высота и ширина задаётся пользователем.

#include <iostream>
void main()
{
	int length, width;

	std::cout << "Enter the length and the width of the rectangle: " << std::endl;
	std::cin >> length >> width; // ---------------------------------Инициализируем переменные длины и ширины, просим вввести их

	for (int i = 0; i < width; i++)//--------------------------------Пока i меньше чем ширина, начинается второй цикл
	{
		for (int j = 0; j < length; j++)//---------------------------Пока j меньше чем длина, выводим звездочку в ряд
		{
			std::cout << "*";
		}
		std::cout << std::endl;//------------------------------------Первый ряд заполнился и переходим на новую строчку и так заново
	}
}
*/
/*-------------------------------------------------------------------Что такое массив(одномерный). Пример. Теория
#include <iostream>
void main()
{
	// тип_данных имя [количество элементов];
	int arr[4]; // инициализация массива

	arr[0] = 5; // присваивание индексу число
	arr[1] = 7;
	arr[2] = 25;
	arr[3] = 3333;

	std::cout << arr[4] << std::endl; //-----------------------------Будет ошибка т.к нет такого индекса
}
*/
/*-------------------------------------------------------------------Способы инициализации массивов
#include <iostream>
void main()
{
	int arr[] = { 1, 3 ,45, 3536 }; //-------------------------------тоже что и int arr[5]; можно даже без равно (=)
	int arr[4]{}; //-------------------------------------------------тоже что и наверху

	std::cout << arr[3] << std::endl;
}
*/
/*-------------------------------------------------------------------Вывод массива. Массивы и циклы. Цикл с массивом. Array c++ 
#include <iostream>
void main()
{
	const int SIZE = 5;//-------------------------------------------константа чтобы не ошибиться при изменении длины массива
	//int arr[SIZE]{55, 34, 3632, 236, 326};

	int arr[SIZE]; //-----------------------------------------------массив будет иметь 5 индексов и пока там хранится 'мусор'

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;//-----------------------------------------------каждому индексу массива присваивается число i в цикле
		
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl; //------------------------каждый индекс выводится на экран
	}
}
*/
/*------------------------------------------------------------------sizeof
#include <iostream>
void main()
{
	//-----------возвращает длину данных или переменной в байтах

	//int a;

	//std::cout << sizeof(a) << std::endl;//--------sizeof просто возвращает объем памяти выделенной под переменную
	//также можно подставить классы и структуры

	//const int SIZE = 10;
	double arr[]{4, 45, 2436, 214, 7443};

	//int a = sizeof(arr);//---передача объема массива
	//int b = sizeof(int);//---передача объема типа данных(int = 4)

	//std::cout << sizeof(arr) << std::endl; //---возвратит 20 т.к 5 эдементов по 4 байта

	//std::cout << sizeof(arr)/sizeof(int) << std::endl; //---- делим на тип данных(4 (байта))

	//std::cout << a/b << std::endl;//---- тоже что и выше

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) // ----подставляем формулу
	{
		std::cout << arr[i] << std::endl;
	}

	//--- i < sizeof(arr) / sizeof(int) равно i < sizeof(arr) / sizeof(arr[0]) ---- sizeof(arr[0]) возьмет тип данных первого индекса массива и поделит в формуле на этот размер данных

	//std::cout << sizeof(a) << std::endl;
}
*/
/*-------------------------------------------------------------------rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел
#include <iostream>
#include <ctime> //---------------------------импортируем библеотеку чтобы использовать в функции

void main()
{
	//srand(25);//-------------------------------------необходимо передать значение начльной точки(25)
	
	//srand(time(NULL));//---------------------------передаем time() в функцию. Устанавливает точку отсчета по новому(от 1 января 70-го года)
	//---------------для того чтобы массив выводил одни и теже значения, нужно закомментировать функцию srand()
	//---------------------srand вызываем только один раз

	//rand();//--------------------------------------синтаксис функции
	
	//int a = rand() % 10 + 5;//------------------ограничиваем диапозоном. Будет от 0 до 10
	//std::cout << a << std::endl;//------------выводят одни и те же значение потому что функция отталкивается от одной и той же точки, которую задает функция srand()

	//a = rand() % 10 + 5;//-----------------------от 5 до 15
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
// ------ДЗ: заполнить массив на 10 элементов случайными числами от 0 до 20, НО НЕ ДОЛЖНО БЫТЬ ОДИНАКОВЫХ ЗНАЧЕНИЙ
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
//		copy_number = false; //-----------------------------переменная совпадений равна false по умолчанию, т.к мы не нашли совпадение
//		int new_random_value = rand() % 20; //------------------создание нового числа если будет совпадение
//
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] == new_random_value)//------------------Итератор пробегает по циклу i и если 
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
// ----------------------------------------ДЗ моя версия
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
---------------------------------------------ДЗ минимальное число в массиве
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


	int minimum = arr[0]; //------------минимальное число равно 0
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < minimum) //----------если значние индекса в массиве меньше чем минимальное число
		{
			minimum = arr[i]; //-----------------присваиваем значние индекса переменной, если больше, то цикл идет дальше
		}
	}
	std::cout << minimum << std::endl;
}
*/
/*-------------------------------------------------------------------Двумерный массив. Инициализация. Индексы. Синтаксис
#include <iostream>

void main()
{
	//const int ROW = 3; //-----------------строки
	//const int COL = 4; //-----------------колонки
	//int arr[ROW][COL]; // ----------------Строки в первые скобки, Строки во вторые скобки


	//std::cout << arr[2][0] << std::endl;
	//arr[2][0] = 1111111111111;
	//std::cout << arr[2][0] << std::endl;

	//int a;
	//a = 3;

	//Способы инициализации

	const int ROW = 5; //-----------------строки
	const int COL = 4; //-----------------колонки

	//int arr[ROW][COL]{}; // будут инициализированы нули

	//int arr[ROW][COL]{ {2,4 ,66, 1}, {4344, 2134, 215, 12} }; //---------инициализироваем вручную
	int arr[ROW][COL] //---------можно поставить равно (=) --------int arr[ROW][COL] = 
	{ 
		{2,4 ,66, 1}, 
		{4344, 2134, 215, 12} 
	};//-------------------------------------------то же самое что и наверху
	//--------------------каждый элемент в скобочках это колонка
	//------------------------------каждая скобочка это строка

	//-------------------ОБЯЗАТЕЛЬНО УКАЗЫВАТЬ КОЛИЧЕСТВО КОЛОНОК



	int a;
	a = 3;
}
*/
/*-------------------------------------------------------------------Двумерные массивы вывод. Заполнение. Двумерный массив циклы
#include <iostream>

void main()
{
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS];

	//---------------------------нужно 2 цикла так как 2 координаты(Строки, Колонки)
	for (int i = 0; i < ROWS; i++)//--------------цикл бежит по строкам 
	{
		for (int j = 0; j < COLS; j++) //------------------цикл бежит по колонкам
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << '\t'; //-----------------вывод колонок
		}
		std::cout<<std::endl; //-------------------------вывод строчки и переход на новую строчку
	}
}
*/
/*-------------------------------------------------------------------Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. 
#include <iostream>
 //---------------------- функция main должна быть внизу других функций
void foo()
{
	std::cout << "I am function, i've called!"<< std::endl;
	return;
}

int Sum(int a, int b)
{
	//int result;
	//result = a + b;

	//return result; = return a+b;----------------для оптимизации 
}


void main()
{
		синтаксис функции: 
		возвращаемое_значение имя_функции(параметры)
		{
		блок повторяющегося_кода(тело функции);
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
/*-------------------------------------------------------------------Передача параметров в функцию по значению

#include <iostream>

int Foo(int a)//---------------функция принимает ЗНАЧЕНИЕ целого числа которое передавали в функцию
{
	return ++a; //-------возвращает префиксный инкремент
}

void main()
{
	int a = 1;//---------объявляем переменную со значением 1

	a = Foo(a);//-------------------функции передаем переменную сверху

	std::cout << a << std::endl;
}
*/
/*-------------------------------------------------------------------Передача массива в функцию
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
/*-------------------------------------------------------------------прототип функции
#include <iostream>

void Foo(); //------------прототип.
//---------------функция main должна стоять вконце функций если нет прототипов
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
/*-------------------------------------------------------------------Область видимости. Глобальные переменные и локальные переменные

#include <iostream>

//int b = 12;//---------------глобальная переменная так как доступна везде
//
////----------------------------переменные ниже это локальные, так как доступны в области видимости только конкретного пространства
//void Foo()
//{
//	int z;
//}
//
//void main()
//{
//	int a;//-------------переменная находится в области видимости всей функции main
//
//	if (true)
//	{
//		int a;
//		a = 0;
//	}

	//a = 22-------------переменнная a находится в области видимости условия if

	//{
	//	int a;
	//	a = 345;
	//}

	//a = 32

	//то же самое что и выше
//int a;
//
//void Foo(int a)
//{
//	a++;//---------------------функция работала с локальной переменной, а не глобальной
//}
//
//void main()
//{
//	Foo(2);
//	a++;
//	std::cout << a << std::endl;
//}
*/
/*-------------------------------------------------------------------Параметры по умолчанию. Передача аргументов в функцию по умолчанию

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
/*-------------------------------------------------------------------inline c++ что это. Ключевое слово inline. Встраиваемая функция

#include <iostream>

inline int Sum(int a, int b)//--------------программа просто сразу выполнит сложение вместо того чтобы передавать параметры и т.д
{
	return a + b;
}


void main()
{
	
	std::cout << Sum(3, 5) << std::endl;
}
*/
/*-------------------------------------------------------------------Перегрузка функций
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
//------------------------функции могут иметь одинаковое значение, а также может иметь разную реализацию 
*/
/*-------------------------------------------------------------------Шаблоны функций
#include <iostream>

//template <typename T1, typename T2>
//T Sum(int a , int b)//-----------T вместо типа данных
//T2 Sum(T1 a, T2 b)//-------------из за T2 функция вернет double
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
//---------------------class и typename это ОДНО И ТОЖЕ
*/
/*-------------------------------------------------------------------Функции и стек

#include <iostream>
void main()
{
..--------------------------------файл paint
}
*/
/*-------------------------------------------------------------------Рекурсия и цикл

#include <iostream>
//-----------------------рекурсия это вызов функции самой себя

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
/*-------------------------------------------------------------------Рекурсия. Факториал числа

#include <iostream>

int Fact(int N)
{
	if (N == 0)
		return 1;

	if (N == 1)
		return 1;

	//std::cout << N << std::endl;

	return N * Fact(N - 1); //-------------считаем факториал, но чтобы посчитать нужно 
	//найти факториал числа N-1 и поэтому вызываем опять функцию с параметром N-1 и так до тех пор пока не выполнится условие выхода их рекурсии
}

void main()
{
	//int a;
	//std::cin >> a; //-------------------ввод и инициализация переменной для поиска пользовательского факториала числа

	std::cout << Fact(a) << std::endl;
}
*/
/*-------------------------------------------------------------------Динамическая память. Утечка памяти. Стек и куча

#include <iostream>

void main()
{

}---------------------------файл paint
*/
/*-------------------------------------------------------------------Указатели. Указатели c++ разыменование
*/ //-------------------переменная указывающая на адрес другой переменной
/*-------------------------------------------------------------------Указатели
#include <iostream>
void main()
{
	int a = 5;
	//int b = a; //----------b указывает на значение переменнай а

	int* px = &a;//-----------указываем адрес памяти в которой лежит переменная a
	//--------------------- * значит что переменная типа указатель
	// & - амперсант - оператор взятия адреса, то есть берем адркм у переменной a и указываем переменной x

	//double* px = &a; //---------тип указателя double, а значение типа адреса переменной, на которую указываем - int. Так делать нельзя

	std::cout << px << std::endl;//-------------получим адрес памяти

	std::cout << *px << std::endl;//--------разименовываем и получаем значение

	int* px2 = &a;

	std::cout << "px\t"<<px2 << std::endl;

	std::cout << "px2\t"<< * px2 << std::endl;


	*px2 = 2;//---------разименовываем указатель и присваиваем адрусу в памяти на который ссылается указатель, другое значение (2)

	std::cout << "a\t" << a << std::endl;

	std::cout << "px\t" << *px2 << std::endl;
	std::cout << "px\t" << *px << std::endl;

}
*/
/*-----------------------------Арифметика указателей
#include <iostream>

void main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 3,46,685,45,34623 };
	std::cout << arr + 10 << std::endl;
	//std::cout << *arr << std::endl;//---------так как массив это указатель на первый индекс в массиве

	//for (int i = 0; i < SIZE; i++)
	//{
	//	std::cout << arr[i] << std::endl;
	//}
	//std::cout << "====================================" << std::endl;
	//int* pArr = arr;//------------имя массива это указатель на первый индекс

	//std::cout << arr << std::endl;
	//std::cout << pArr << std::endl;
	//std::cout << "====================================" << std::endl;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	//std::cout << pArr[i] << std::endl;-----------эквивалентно тому что ниже
	//	std::cout << *(pArr + i)<< std::endl;//----сдивагаем на единицу с типом данных и получается сдвинемся на 4 байта(для инт) и то есть сдвинемся на следующую ячейку массива
	//}
}
*/
/*-------------------------------------------------------------------Возврат значений функции через указатели
#include <iostream>

void Foo(int *pa)//-------------- функция будет принимать указатель типа int
{
	(*pa)++;//------------------- происходит разименование и увеличение значения переменной на единицу
}

void main()
{
	int a = 0;//------------------инициализируем переменную а
	std::cout << a << std::endl;

	Foo(&a);//--------------------вызываем функцию, указав ссылку на область памяти значения переменной а
	std::cout << a << std::endl;
}
*/
/*-------------------------------------------------------------------Возврат нескольких значений функции через указатели

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
-----------------------------------------------Домашнее задание
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
/*-------------------------------------------------------------------C++ Ссылки
#include <iostream>

void main()
{
	//int a = 5;
	//int* pa = &a; //----------указатель

	//int& aRef = a;//---------ссылка. ref - это и есть ссылка. а - это название переменной

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


	//int& pRef;//----------ссылка должна быть инициализирована

}
*/
/*-------------------------------------------------------------------Передача параметров в функцию по ссылке

#include <iostream>

void Foo(int a)//----------передаем по значению
{
	a = 1;//----создается новая копия переменной а и поэтому ничего не изменится
}

void Foo2(int &a)//------передаем по ссылке
{
	a = 2;//-------так как передали область памяти переменной, то просто присвоим новое значение
}

void Foo3(int *a)//-----передаем по указателю
{
	*a = 3;//-------при вызове функции передаем область памяти и в саму функцию передаем значение на область памяти и поэтому просто изменяем значение
}

void main()
{
	int value = 5;
	std::cout << "value\t" << value << std::endl << std::endl;;

	std::cout << "Foo\t" << std::endl;
	Foo(value);//--------передаем переменную
	std::cout << "value\t" << value<<std::endl<<std::endl;


	std::cout << "Foo\t" << std::endl;
	Foo2(value);//------просто передаем переменную
	std::cout << "value\t" << value<<std::endl << std::endl;


	std::cout << "Foo\t" << std::endl;
	Foo3(&value);//--------передача на область в памяти
	std::cout << "value\t" << value<<std::endl << std::endl;
}
*/
/*-------------------------------------------------------------------Возврат нескольких значений функции через ссылки

#include <iostream>

void Foo(int &a, int &b, int &c)
{
	a = 10;

	b *= 2;

	c -= 100;
}

void main()
{
	system("chcp 1251");//--------не относится к коду

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
/*---------------------------------------------------------ДЗ Функция SWAP
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
	//----------выделяем место в динамической памяти
	int* pa = new int;//------------хотим получить паямять для типа int

	*pa = 10;

	std::cout << *pa << std::endl;

	delete pa; //---------чистим за собой память

	std::cout << pa << std::endl;
}
*/
/*-------------------------------------------------------------------NULL/nullptr

#include <iostream>

void main()
{
	//----------выделяем место в динамической памяти
	//int* pa = new int;//------------хотим получить паямять для типа int

	//*pa = 10;

	//std::cout << *pa << std::endl;

	//delete pa; //---------чистим за собой память, но у нас все еще остался адрес памяти

	//std::cout << pa << std::endl;

	int* pa = new int;
	*pa = 10;
	std::cout << *pa << std::endl;
	delete pa;
	//------------------------------------------------------------------
	//pa = 0; //---  0 и NULL - это одно и тоже

	pa = nullptr;//--------nullptr это отдельный тип данных

	//if (pa != NULL)//-------- если pa не равен нулю, то выводим. 
	if (pa != nullptr)
	{
		std::cout << pa << std::endl;
	}
	delete pa;

	//         СНАЧАЛА УДАЛЯЕМ ПАМЯТЬ
	//         ПОТОМ ПРИСВАИВАЕМ нули для NULL/nullptr
}
*/
/*-------------------------------------------------------------------Динамический массив с++ пример. Создание, заполнение, удаление, размер динамического массива
#include <iostream>

void main()
{
	system("chcp 1251");
	//int SIZE = 0;//---------------размер можно изменить, поэтому не const
	int SIZE = 5;
	//std::cin >> SIZE;
	int* arr = new int[SIZE];//----создаем массив


	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << '\t';//-------вывод значения элементов массива

		std::cout << arr + i << std::endl;//------адреса эдементов массива
	}

	delete[] arr;//-------------удаляем данные массива
}
*/
/*-------------------------------------------------------------------Двумерный динамический массив c++ пример. Создание, заполнение, удаление
#include <iostream>

void main()
{
	system("chcp 1251");

	int rows = 5;
	int cols = 6;

	int** arr = new int *[rows]; //-----создаем массив на указатели, так как будем хранить указатели в качестве значений
	
	for (int i = 0; i < rows; i++)//----------создаем второй массив в котором будут данные
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)//-----------генерируем случайные данные и выводим на экран
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
		delete[] arr[i]; //--------удаляем массивы на каждой итерации первого массива
	}

	delete[] arr; //----------удаляем первый массив, а второй массив с данными останется висеть
}
*/
/*-------------------------------------------------------------------Константные аргументы функции.Константный указатель.Константные параметры
-----------------Копирование динамического массива

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

	//firstArray = secondArray; -----------неудачная попытка присвоить значения массива

	delete[] firstArray; //---------чистим данные первого массива

	firstArray = new int[size]; //-----перевыделяем место в памяти
	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i]; //----каждому элементу 1 массива присваиваем значения 2 массива. По сути мы создаем новый массив и выполняем копирование из второго массива в новый первый
	}

	std::cout << "==============================================" << std::endl;
	std::cout << "FirstArray =\t";
	ShowArray(firstArray, size);

	std::cout << "secondArray =\t";
	ShowArray(secondArray, size);

	delete[] firstArray; //--------чистим данные массивов
	delete[] secondArray;
}
*/
/*-------------------------------------------------------------------Изменить размер массива. Удалить. Добавить элемент в массив. Увеличение массива

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
//Передавая указатель на массив в int* arr, мы  передаем его по значению т.е. создается новый указатель, в который присваивается адрес массива. 
//По-этому arr из параметров функции и arr из main- совершенно разные указатели, указывающие на один и тот же массив. 
//Изменить этот массив можно как из функции, так и из main. Но изменение адреса указателя(arr) в функции никак не повлияет на указатель(arr) из main.
//Передавая указатель на массив в int*& arr, мы передаем его(указатель) по ссылке т.е.  arr из функции- ссылка на arr(указатель) из main. 
//Это значит, что все изменения с arr из функции отразятся на arr из main. Значит, ссылка на указатель(int *&) позволяет передать указатель в функцию не по значению,  а по ссылке. 
//Это в свою очередь позволяет производить изменения напрямую с arr из main (как с данными так и с самим указателем (допустим, присвоить указателю новый массив))


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
/*-------------------------------------------------------------------Строки в c++. Нуль терминатор. char*/

























