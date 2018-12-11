#include <stdio.h> 
#include <tchar.h> 
#include <iostream> 
#include <cstdlib> 
#include <string> 
#include <malloc.h> 
#include <fstream> 
#include "sss.h" 
#include <sstream> 
using namespace std;
void sss(string *name, int e)
{
	string line, el;//слово
	stringstream ss; //строковый поток 
	ifstream in;
	in.exceptions(ifstream::failbit);
	try
	{
		in.open(name[e]);
		ifstream in(name[e]);
		int max = 0;//count 
		int maxmest = 0;//count 
		while (getline(in, line, '.')) {//считываем по одному предложению
			maxmest = 0;
			for (int i = 0; i < line.size(); i++)
			{
				el = line[i];
				if (el == ",")
				{ 
					maxmest++;
				}
			}
			if (maxmest > max)
				max = maxmest;
		}
		ifstream inn(name[e]);
		while (getline(inn, line, '.')) {
			maxmest = 0;
			for (int i = 0; i < line.size(); i++)
			{
				el = line[i];
				if (el == ",")
				{ 
					maxmest++;
				}
			}
			if (maxmest == max)
				cout << line << '\n'; //вывод в поток 

		}
	}
	catch (const ifstream::failure& exc)
	{

		cout << "Error while opening file:" << endl
			<< exc.what() << endl << endl;
	}


}
