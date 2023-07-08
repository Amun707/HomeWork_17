#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>


// Заполнение массива случайными числами
template <typename T>
void fill_arr(const T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
// Вывод массива
template <typename T>
void print_arr(const T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}


// Задача 1. Ср. арифм. двух чисел
double mean(double num1, double num2) {
	return (num1 + num2) / 2.0;
}


// Задача 2. Ср. арифм. элементов массива
double mean_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i] / length;
	return sum;
}


// Задача 3. Вывод степеней числа N от 0 до M включительно
void powers(const int N, const int M) {
	// int power = 1;
	for (int i = 0; i <= M; i++/*, power *= N*/)
		//std::cout << N << '^' << i << " = " << power << std::endl;
		std::cout << N << '^' << i << " = " << pow(N, i) << std::endl; // закомментировать, если предыдущий вараинт раскомментирован
}


// Задача 4. Преобразование отрицательных элементов массива в положительные
void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			arr[i] *= (-1);
}


int main() {
	system("chcp 1251>nul");
	int n, m;


	//Задача 1.
	std::cout << "Задача 1.\nВведите два числа -> ";
	std::cin >> n >> m;
	std::cout << "Ср. арифм. чисел: " << mean(n, m) << "\n\n";


	//Задача 2.
	std::cout << "Задача 2.\nМассив: ";
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 10, 31); // заполнение массива случайными числами от 10 до 30 включительно
	print_arr(arr, size); // вывод массива в консоль
	std::cout << "Ср. арифм. элементов массива: " << mean_arr(arr, size) << "\n\n";


	//Задача 3.
	std::cout << "Задача 3. Степени числа.\n";
	int N, M;
	std::cout << "Введите два числа, для возведения в степень -> ";
	std::cin >> N >> M;
	std::cout << "Степени числа " << N << " от 0 до " << M << ":\n";
	powers(N, M);
	std::cout << std::endl;


	//Задача 4.
	std::cout << "Задача 4.\nИзначальный массив:\n";
	const int size4 = 10;
	int arr4[size4];
	fill_arr(arr4, size4, -10, 11);
	print_arr(arr4, size4);
	
	positive_arr(arr4, size4);
	
	std::cout << "Итоговый массив:\n";
	print_arr(arr4, size4);


	return 0;
}
