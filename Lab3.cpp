//Код інформаційної моделі книги
#include <iostream>

using namespace std;

void bookInformationModel()
{
	//Назва книги
	string bookFullName = "Кобзар";
	//ПІБ автора
	string authorFullName = "Шевченко Тарас Григорович";
	//Місце народження автора
	string authorBirthPlace = "c.Моринці, Черкаська область, Україна";
	//Рік написання
	signed int dateOfWriting = 1840;
	//Кількість сторінок
	signed int numberOfPages = 115;
	//Чи живий автор на даний момент?
	bool isAuthorLive = true;

	unsigned int totalMemoryInBytes = sizeof(bookFullName) +
		sizeof(authorFullName) +
		sizeof(authorBirthPlace) +
		sizeof(dateOfWriting) +
		sizeof(numberOfPages) +
		sizeof(isAuthorLive);

	cout << "Назва книги:\t\t" << bookFullName << endl;
	cout << "ПІБ автора:\t\t" << authorFullName << endl;
	cout << "Місце народження автора:\t\t" << authorBirthPlace << endl;
	cout << "Рік написання:\t\t" << dateOfWriting << endl;
	cout << "Кількість сторінок:\t\t" << numberOfPages << endl;
	cout << "Чи живий автор на даний момент:\t" << ((isAuthorLive) ? "Так" : "Ні") << endl;

	cout << "Загальний об'єм використаної пам'яті (в байтах):\t" << totalMemoryInBytes << endl;
}

