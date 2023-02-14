#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	//Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.

	string simbols = "London is the capital of Great Britain";
	replace(simbols.begin(), simbols.end(), ' ', '\t');
    cout << simbols << endl;

	//Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.


	string simbols1 = "2 pizza, please :)";
	cout << simbols1 << endl;
	int letters = 0, digits = 0, otherSimbols = 0;
	for (int i = 0; simbols1[i]!='\0'; i++)
	{
		if (simbols1[i] >= 97 && simbols1[i] <= 122)
			letters++;
		else if (simbols1[i] >= 65 && simbols1[i] <= 90)
			letters++;
		else if (simbols1[i] >= 48 && simbols1[i] <= 57)
			digits++;
		else
			otherSimbols++;
	}
	cout << "The number of letters : "<<letters << endl;
	cout << "The number of digits : " << digits << endl;
	cout << "The number of other simbols : " << otherSimbols << endl;

	//Задание 3. Подсчитать количество слов во введенном предложении.

	string simbols2 = "London is the capital of Great Britain";
	int count = 0;
	for (int i = 0; simbols2[i] != '\0'; i++)
	{
		if (simbols2[i] == ' ')
			count++;
	}
	cout <<"The number of words in a sentence :  "  <<simbols2 << "  is " << count + 1 << endl;
	
	
	return 0;
}
