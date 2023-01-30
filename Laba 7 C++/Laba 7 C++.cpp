﻿#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;

class library//Основной класс, от которого наследуются 5 классов
{
public:
	library(string title, string description, string author, string date, string style, int id)//Наследуемый конструктор (инициализация)
	{
		this->title = title;
		this->description = description;
		this->author = author;
		this->date = date;
		this->style = style;
		this->id = id;
	}
	library()
	{

	}

	int GetId()
	{
		return id;
	}
protected://Поля характеристик
	string title;//Название
	string description;//Описание
	string author;//Автор
	string date;//Дата выхода
	string style;//Жанр
	int id;//Номер

	void adding()//Функция добавления
	{
		cout << "Введите название: ";
		cin >> title;
		cout << "Введите описание: ";
		cin >> description;
		cout << "Введите автора: ";
		cin >> author;
		cout << "Введите дату выхода: ";
		cin >> date;
		cout << "Введите жанр: ";
		cin >> style;
	};
public:
	virtual void info()//Функция получения информации
	{
		cout << "Название: " << title << endl;
		cout << "Описание: " << description << endl;
		cout << "Автор: " << author << endl;
		cout << "Дата выхода: " << date << endl;
		cout << "Жанр: " << style << endl;
	}

	void deleted()//Функция удаления
	{
		title = "";
		description = "";
		author = "";
		date = "";
		style = "";
	}

	void edit()//Функция редактирования
	{
		int parametr;
		cout << "\nВведите номер параметра для редактирования (1 - название, 2 - описание, 3 - автор, 4 - дата выхода, 5 - жанр): ";
		cin >> parametr;
		switch (parametr)
		{
		case 1:
			cout << "Введите новое название: ";
			cin >> title;
			break;
		case 2:
			cout << "Введите новое описание: ";
			cin >> description;
			break;
		case 3:
			cout << "Введите нового автора: ";
			cin >> author;
			break;
		case 4:
			cout << "Введите новую дату выхода: ";
			cin >> date;
			break;
		case 5:
			cout << "Введите новый жанр: ";
			cin >> style;
			break;
		default:
			break;
		}
	}
};
class book : public library//Наследованный класс книг
{
public:
	using library::library;
	book()
	{

	}
	void adding_book()
	{
		printf("\nФункция добавления книги.\n");
		adding();
	}
	void info() override
	{
		printf("\n...Книга...\n");
		info();
	}
	void deleted_book()
	{
		deleted();
		cout << "\nКнига была удалена\n";
	}
	void edit_book()
	{
		printf("\n\nФункция редактирования книги.");
		info();
		edit();
	}

private:
	int id;//Номер книги
};
class journal : public library//Наследованный класс журналов
{
public:
	using library::library;
	void adding_journal()
	{
		printf("\nФункция добавления журнала.\n");
		adding();
	}
	void info_journal()
	{
		printf("\n...Журнал...\n");
		info();
	}
	void deleted_journal()
	{
		deleted();
		cout << "\nЖурнал был удален\n";
	}
	void edit_journal()
	{
		printf("\n\nФункция редактирования журнала.");
		info_journal();
		edit();
	}
};
class newspaper : public library//Наследованный класс газет
{
public:
	using library::library;
	void adding_newspaper()
	{
		printf("\nФункция добавления газеты.\n");
		adding();
	}
	void info_newspaper()
	{
		printf("\n...Газета...\n");
		info();
	}
	void deleted_newspaper()
	{
		deleted();
		cout << "\nГазета была удалена\n";
	}
	void edit_newspaper()
	{
		printf("\n\nФункция редактирования газеты.");
		info_newspaper();
		edit();
	}
};
class article : public library//Наследованный класс статей
{
public:
	using library::library;
	void adding_article()
	{
		printf("\nФункция добавления статьи.\n");
		adding();
	}
	void info_article()
	{
		printf("\n...Статья...\n");
		info();
	}
	void deleted_article()
	{
		deleted();
		cout << "\nСтатья была удалена\n";
	}
	void edit_article()
	{
		printf("\n\nФункция редактирования статьи.");
		info_article();
		edit();
	}
};
class comic : public library//Наследованный класс комиксов
{
public:
	using library::library;
	void adding_comic()
	{
		printf("\nФункция добавления комикса.\n");
		adding();
	}
	void info_comic()
	{
		printf("\n...Комикс...\n");
		info();
	}
	void deleted_comic()
	{
		deleted();
		cout << "\nКомикс был удален\n";
	}
	void edit_comic()
	{
		printf("\n\nФункция редактирования комикса.");
		info_comic();
		edit();
	}
};

class Ticket//Класс с читательскими билетами, содержащий класс с данными клиента
{
public:
	Ticket(int id, string name, string passport_data, int number_taken_document)//Конструктор инициализации
	{
		this->id = id;
		client[id].name = name;
		client[id].passport_data = passport_data;
		client[id].number_taken_document = number_taken_document;
	}

	class Client//Вложенный класс с данными клиента
	{
	public:
		string name;//ФИО клиента
		string passport_data;//Паспортные данные
		int number_taken_document;//Номер взятого документа
	}client[MAX];

	int id;

	void add_ticket(int id)
	{
		cout << "Читательский билет id " << id << endl;
		cout << "Введите ФИО клиета: ";
		cin >> client[id].name;
		cout << "Введите паспортные данные клиента: ";
		cin >> client[id].passport_data;
		this->id = id;
		cout << "Читательский билет id " << id << " добавлен" << endl << endl;
	}

	void give_book(int id)
	{
		cout << "Читательский билет id " << id << endl;
		cout << "Введите номер книги, которую хотите выдать: ";
		cin >> client[id].number_taken_document;
		cout << "Книга выдана" << endl << endl;
	}

	void give_journal(int id)
	{
		cout << "Читательский билет id " << id << endl;
		cout << "Введите номер журнала, который хотите выдать: ";
		cin >> client[id].number_taken_document;
		cout << "Журнал выдан" << endl << endl;
	}

	void info_client(int id)
	{
		cout << "\nЧитательский билет id " << id << endl;
		cout << "ФИО клиета: " << client[id].name << endl;
		cout << "Паспортные данные клиета: " << client[id].passport_data << endl;
		cout << "Выданный документ: № " << client[id].number_taken_document << endl;
		//book[client[id].number_taken_document].info_book();
	}
};

class minibook :public book
{
	
};

bool con(book book1, book book2)//Предикант. Сортировка по возрастанию id
{
	if (book1.GetId()<book2.GetId())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool con2(book book1)//Предикант. Поиск элемента с id == 1
{
	if (book1.GetId() == 1)
	{
		cout << "YES";
		return true;
	}
	else
	{
		cout << "NO";
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	system("color F0");


	/*
	vector<library*> v;

	book *book1;
	library* lib1;
	lib1 = new library;
	book1 = new book;
	lib1 = new library("title 1", "desk c", "author c", "date c", "style constructor", 36);
	v.push_back(lib1);
	book1 = new book("title 1", "desk c", "author c", "date c", "style constructor", 21);
	v.push_back(book1);
	lib1 = new library("title 2", "desk c", "author c", "date c", "style constructor", 31);
	v.push_back(lib1);
	book1 = new book("title 2", "desk c", "author c", "date c", "style constructor", 55);
	v.push_back(book1);*/
	
	book book2("title 2", "desk c", "author c", "date c", "style constructor", 36);
	book book3("title 3", "desk c", "author c", "date c", "style constructor", 21);
	book book4("title 4", "desk c", "author c", "date c", "style constructor", 1);
	book book5("title 5", "desk c", "author c", "date c", "style constructor", 65);
	book book6("title 6", "desk c", "author c", "date c", "style constructor", 31);

	
	library lib2("title 2", "desk c", "author c", "date c", "style constructor", 36);
	library lib3("title 3", "desk c", "author c", "date c", "style constructor", 21);
	library lib4("title 4", "desk c", "author c", "date c", "style constructor", 54);
	library lib5("title 5", "desk c", "author c", "date c", "style constructor", 65);
	library lib6("title 6", "desk c", "author c", "date c", "style constructor", 31);
	

	vector<book> v;
	//v.push_back(book1);
	v.push_back(book2);
	v.push_back(book3);
	v.push_back(book4);
	v.push_back(book5);
	v.push_back(book6);
	
	

	find_if(v.begin(), v.end(), con2);


	/*
	vector<library*>::iterator  ir;
	for (ir = v.begin(); ir != v.end(); ++ir)
	{
		(*ir)->info();
	}*/

	/*
	sort(v.begin(), v.end(), con);


	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	*/





	//book book[100];
	//journal journal[100];
	//newspaper newspaper[100];
	//article article[100];
	//comic comic[100];
	//Ticket ticket(1, "q", "q", 1);
	//ticket.info_client(1);
	//book1.info_book();
	//ticket[0].add_ticket(0);
	//ticket[0].give_book(0);
	//book[0].adding_book();
	//ticket[0].info_client(0);

	//book1[0].adding_book();
	//book1[0].info_book();
	/*
	book1[0].deleted_book();
	book1[0].info_book();
	book1[0].adding_book();
	book1[0].edit_book();
	book1[0].info_book();*/
	//journal[0].info_journal();

	/*journal[0].adding_journal();
	journal[0].info_journal();
	journal[0].deleted_journal();
	journal[0].info_journal();
	journal[0].adding_journal();
	journal[0].edit_journal();
	journal[0].info_journal();*/

	//while (getchar() != '\n');
}