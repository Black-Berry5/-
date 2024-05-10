#include <iostream>

int main()
{
	int n;//высота треугольника
	int Point = 0;//количество звёздачек в строке
	std::cin >> n;
	//цикл по высоте
	for (int i = 0; i <= n; i++) {
		//цикл по строке
		while (Point != i) {
			std::cout << '*';
			Point++;
		}
		std::cout << std::endl;
		Point = 0;
	}
}
