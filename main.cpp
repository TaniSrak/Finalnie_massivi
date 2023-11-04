#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Task1 частичная сортировка массива =%
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % (10 + 1 - 1) + 1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //осуществляет перенос строки текста а также сброс данных из буфера потока вывода

	std::cout << "Введите количество элементов для сортировки -> ";
	std::cin >> n;
	//быстрая сортировка
	//std::sort(arr1, arr1 + n);

	//пузырьковая сортировка
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);


	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";

	//Task2 Температура средняя по январю с заполненная вещественными числами
	const int size2 = 31;
	double arr2[size2]{}; //переменная для создания вещественного числа
	srand(time(NULL));
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % (-5 - (-30)) + (-30);
		arr2[i] += rand() % 11 / 10.0; //добавляем дробное значение от 0.0 вещественного до 1.0 включительно,
		//-5 тоже будет включительно, поэтому стоит цифра 11
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	//средняя температура за весь месяц
	//подсчет сколько температура опускалась ниже  N значения
	std::cout << "Введите верхнюю границу температуры для проверки -> ";
	double maxt, sum = 0.0; //вещественный ноль
	std::cin >> maxt;
	int counter = 0; //счетчик

	for (int i = 0; i < size2; i++)
	{
		sum += arr2[i];
		if (arr2[i] < maxt)
			counter++;
	}
	std::cout << "Средняя температура за месяц: " << sum / size2 << std::endl;
	std::cout << "Температура опускалась ниже " << maxt << " градусов " << counter << " раз" << "\n\n";

	return 0;
}
