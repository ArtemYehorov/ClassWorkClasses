#include <iostream>
#include <string>
using namespace std;


class Cat
{
public:
	int energy = 70;
	string name;
	string color;
	unsigned int age;
	double weight;
	bool hungry = false;
	bool sleep = false;


	void Play()
	{
		cout << name << " by played" << endl;
		energy -= 20;
		hungry = true;
	}

	void Sleep()
	{
		if (sleep)
		{
			sleep = false;
			energy = 100;
		}
		else
		{
			sleep = true;
		}
	}

	void Hungry()
	{
		weight += 0.5;
		energy += 10;
		hungry = false;
	}

	void speak()
	{
		cout << "Meow!" << endl;
	}

	void Print()
	{
		if (energy > 0)
		{
			cout <<"Name - " << name << endl;
			cout <<"Color - " << color << endl;
			cout <<"Age - " << age << endl;
			cout <<"Weight - " << weight << endl;
			cout <<"Energy - " << energy << endl;
			if (hungry) cout << "Hungry cat" << endl;
			else cout << "The cat is full" << endl;

			if (sleep) cout << "the cat is sleeping" << endl << endl;
			else cout << "Cat doesn't sleep" << endl << endl;
		}
		else
		{
			cout << "The cat died" << endl;
		}
	}

};



int main()
{
	setlocale(0, "ru");
	
	int choice;

	Cat c; // создание объекта (переменной) другого типа, Кошка
	c.weight = 10;
	c.age = 11;
	c.name = "Aboba";
	c.color = "Orange";

	do
	{
		choice = 0;
		cout << "What is the cat doing?\n1 - play\n2 - Eating\n3 - Sleeping" << endl;
		cin >> choice;
		if (choice == 1)
		{
			c.Play(); // вызов метода с передачей объекта другого типа класса
			c.Print();
		}
		else if (choice == 2)
		{
			c.Hungry(p, p.Eat_cat);
			c.speak();
			c.Print();
		}
		else if (choice == 3)
		{
			c.Sleep();
			c.Print();
		}
		else
		{
			cout << "Meow!" << endl;
		}

	} while (c.energy > 0);

	// передача сообщения (посылка сообщения)
	// такое взаимодействие обычно подразумевает изменение состояния объектов (кошка устала и теперь хочет кушац, а человек поднял себе настроение и теперь ходит с поцарапанными руками, но очень довольный)
}
