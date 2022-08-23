/*
	Name: maxOnesSequence
	Author: roboco
	Date: 26.07.22 16:12
	Task name: B. Последовательно идущие единицы
	Description:	Требуется найти в бинарном векторе самую длинную последовательность единиц и вывести её длину.
					Желательно получить решение, работающее за линейное время и при этом проходящее по входному массиву только один раз.
					Первая строка входного файла содержит одно число n, n ≤ 10000. Каждая из следующих n строк содержит ровно одно число — очередной элемент массива.
					Выходной файл должен содержать единственное число — длину самой длинной последовательности единиц во входном массиве.
*/
#include <iostream>
#include <vector>

int main() {
	int x;
	bool b;
	std::vector<bool> array;

	std::cin >> x;
	for (int i = 0; i < x; i++) {
		std::cin >> b;
		array.push_back(b);
	}

	int maxOnesSequence = 0;
	int countResult = 0;

	for (auto element : array) {
		if (element) ++countResult;
		else {
			if (countResult > maxOnesSequence) maxOnesSequence = countResult;
			countResult = 0;
		}
	}
	if (countResult > maxOnesSequence) maxOnesSequence = countResult;
	countResult = 0;

	std::cout << maxOnesSequence << std::endl;
}
