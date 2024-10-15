/*------------------------Урок1 hello world
#include <iostream>

void main() 
{
	std::cout << "Hello world" << std::endl;
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
*/
#include<iostream>

void Foo(int a = 5)
{
	for (int i = 0; i < a; i++)
	{
		std::cout << "#" << std::endl;
	}
}

void main()
{
	Foo();
}





















