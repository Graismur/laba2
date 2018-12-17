#include <string> 
#include <iostream> 
#include <fstream> 
#include <sstream> 
#include "sss.h" 
using namespace std;
void Exception(string *name, int e)
{
	fstream file(name[e]);
	if
		(!file.is_open()) cout <<  "Не открывается\n"; // если не открылся 
	else if
		(file.peek() == EOF) cout << "Файл пуст\n"; // если первый символ конец файла 
}

int main() {
	setlocale(LC_ALL, "");
	setlocale(LC_ALL, "Russian");
	int e;
	string line;//slovo 
	stringstream ss; //strokovyi potoK 
	string name[5] = { "input.txt","input1.txt","input2.txt","input3.txt","input4.txt" };
	cout << "Выберите варианты: \n" << "1. Все предложения в одной строке." << endl << "2. Каждое предложение имеет свою строку." << endl << "3. Предложения могут быть в одной строке, могут быть разделены, конец предложения может быть на другой строке." << endl << "4. Файл пуст." << endl << "5. Нет Файла." << endl << "6. Выход." << endl;
	while (true)
	{
		switch (getchar()) {
		case '1': {
			e = 0;
			Exception(name, e);
			sss(name, e);
			break; }
		case '2': {
			e = 1;
			Exception(name, e);
			sss(name, e);
			break; }
		case '3': {
			e = 2;
			Exception(name, e);
			sss(name, e);
			break; }
		case '4': {
			e = 3;
			Exception(name, e);
			sss(name, e);
			break; }
		case '5': {
			e = 4;
			Exception(name, e);
			sss(name, e);
			break; }
		case '6':
			cout << "Exit" << endl;
			exit(EXIT_SUCCESS);
		}
	}
	return 0;
}