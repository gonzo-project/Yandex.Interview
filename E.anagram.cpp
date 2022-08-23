/*
  Name: anagram
  Author: roboco
  Date: 23.08.22 22:10
  Task name: 		D. Анаграммы
  Description:		Даны две строки, состоящие из строчных латинских букв. Требуется определить, являются ли эти строки анаграммами, т. е. отличаются ли они только порядком следования символов.
  Формат ввода: 	Входной файл содержит две строки строчных латинских символов, каждая не длиннее 100 000 символов. Строки разделяются символом перевода строки.
  Формат вывода: 	Выходной файл должен содержать единицу, если строки являются анаграммами, и ноль в противном случае.
 */
#include <algorithm>
#include <iostream>
#include <fstream>

int main() {
	int resultCount{0};
	std::string line1, line2;
	std::ifstream file{ "anagram.input.txt" };
	file >> line1;
	file >> line2;

	if (line1.empty() || line2.empty()) {
		std::cout << "0";
	}
	if (line1.length() != line2.length()) {
		std::cout << "0";
	} else {
		std::sort(line1.begin(), line1.end());
		std::sort(line2.begin(), line2.end());
		if (line1 == line2) {
			std::cout << "1";
		} else {
			std::cout << "0";
		}
	}
}
