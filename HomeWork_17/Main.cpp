#include<iostream>
#include<cstdlib>
#include<ctime>


double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

double mean_arr(int arr[], const int length) {
	srand(time(NULL));
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (25 - 1) + 1;
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b}\n";
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i] / length;
	std::cout << "Ср.ар. -> " << sum << std::endl;
	return sum;
}

void powers(int N, int M) {
	for (int i = 0; i <= M; i++)
		M *= i;
	std::cout << "Степени числа от 0 до M: \n" << N << std::endl;
	
}

int positive_arr(int arr[], const int length) {
	srand(time(NULL));
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (44 - 1) + 1;
	for (int i = 0; i < length; i++)
		if (i < 0) {
			i *= (-1);
			std::cout << arr[i] << ", ";
			std::cout << "\b\b }\n";

			return arr[i];
		}
}




int main() {
	system("chcp 1251>nul");
	int n, m;
	//Задача 1.
	std::cout << "Задача 1.\nВведите два числа ->";
	std::cin >> n >> m;
	std::cout << mean(n, m);

	//Задача 2.
	std::cout << "Задача 2. Ср. ариф. всех элементов массива.\n";
	const int size = 10;
	int arr[size];
	std::cout<<mean_arr(arr, size);

	//Задача 3.
	std::cout << "Задача 3. Степени числа.\n";
	int N, M;
	std::cout << "Введите два числа, для возведения в степень -> ";
	std::cin >> N >> M;
	powers(N, M);

	//Задача 4.
	std::cout << "Задача 4. Отрицательные на положительные.\n";
	const int size4 = 10;
	int arr4[size4];
	std::cout << positive_arr(arr4, size4) << std::endl;




	return 0;
}