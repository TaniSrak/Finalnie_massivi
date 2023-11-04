#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Task1 частична€ сортировка массива =%
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % (10 + 1 - 1) + 1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //осуществл€ет перенос строки текста а также сброс данных из буфера потока вывода

	std::cout << "¬ведите количество элементов дл€ сортировки -> ";
	std::cin >> n;
	//быстра€ сортировка
	//std::sort(arr1, arr1 + n);

	//пузырькова€ сортировка
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);


	std::cout << "»тоговый массив:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";

	//Task2 “емпература средн€€ по €нварю с заполненна€ вещественными числами
	const int size2 = 31;
	double arr2[size2]{}; //переменна€ дл€ создани€ вещественного числа
	srand(time(NULL));
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % (-5 - (-30)) + (-30);
		arr2[i] += rand() % 11 / 10.0; //добавл€ем дробное значение от 0.0 вещественного до 1.0 включительно,
		//-5 тоже будет включительно, поэтому стоит цифра 11
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	//средн€€ температура за весь мес€ц
	//подсчет сколько температура опускалась ниже  N значени€
	std::cout << "¬ведите верхнюю границу температуры дл€ проверки -> ";
	double maxt, sum = 0.0; //вещественный ноль
	std::cin >> maxt;
	int counter = 0; //счетчик

	for (int i = 0; i < size2; i++)
	{
		sum += arr2[i];
		if (arr2[i] < maxt)
			counter++;
	}
	std::cout << "—редн€€ температура за мес€ц: " << sum / size2 << std::endl;
	std::cout << "“емпература опускалась ниже " << maxt << " градусов " << counter << " раз" << "\n\n";

	return 0;
}
