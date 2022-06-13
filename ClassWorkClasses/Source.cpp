#include "Cat.h"

using namespace std;

int main()
{
	setlocale(0, "ru");
	srand(time(0));
	int choice;

	Cat c(60,"Murzik","Green"); // создание объекта (переменной) другого типа, Кошка
	system("cls");

	c.Print();
	
}
