#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    string nameOfBook;
    string nameOfAuthor;
    string yearOfWriting;
    string numberOfPages;
    string originLanguage;
    string nameOfEdition;
    string yearOfPublish;

    cout << "Назва книги: ";
    getline(cin, nameOfBook);

   cout << "Автор книги: ";
    getline(cin, nameOfAuthor);

   
   cout << "Рiк написання: ";
    getline(cin, yearOfWriting);

    
    cout << "Кiлькiсть сторiнок: ";
    getline(cin, numberOfPages);

    
    cout << "Мова оригiналу: ";
    getline(cin, originLanguage);

    
    cout << "Найменування видавництва: ";
    getline(cin, nameOfEdition);

   
    cout << "Рiк видавництва: ";
    getline(cin, yearOfPublish);

    return 0;
}
