#include "Cat.h"

using namespace std;

int main()
{
	setlocale(0, "ru");
	srand(time(0));
	int choice;

	Cat c; // создание объекта (переменной) другого типа, Кошка
	system("cls");

	c.SetWeight(7);
	c.SetName("Murzik");
	c.SetColor("Black");
	c.SetAge(5);
	c.SetEnergy(100);
	c.Print();
	
}
