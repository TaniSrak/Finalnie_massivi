#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Task1 ��������� ���������� ������� =%
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % (10 + 1 - 1) + 1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //������������ ������� ������ ������ � ����� ����� ������ �� ������ ������ ������

	std::cout << "������� ���������� ��������� ��� ���������� -> ";
	std::cin >> n;
	//������� ����������
	//std::sort(arr1, arr1 + n);

	//����������� ����������
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);


	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";

	//Task2 ����������� ������� �� ������ � ����������� ������������� �������
	const int size2 = 31;
	double arr2[size2]{}; //���������� ��� �������� ������������� �����
	srand(time(NULL));
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % (-5 - (-30)) + (-30);
		arr2[i] += rand() % 11 / 10.0; //��������� ������� �������� �� 0.0 ������������� �� 1.0 ������������,
		//-5 ���� ����� ������������, ������� ����� ����� 11
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	//������� ����������� �� ���� �����
	//������� ������� ����������� ���������� ����  N ��������
	std::cout << "������� ������� ������� ����������� ��� �������� -> ";
	double maxt, sum = 0.0; //������������ ����
	std::cin >> maxt;
	int counter = 0; //�������

	for (int i = 0; i < size2; i++)
	{
		sum += arr2[i];
		if (arr2[i] < maxt)
			counter++;
	}
	std::cout << "������� ����������� �� �����: " << sum / size2 << std::endl;
	std::cout << "����������� ���������� ���� " << maxt << " �������� " << counter << " ���" << "\n\n";

	return 0;
}
