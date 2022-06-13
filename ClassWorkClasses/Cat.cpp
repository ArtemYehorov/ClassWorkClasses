#include "Cat.h"

Cat::Cat() : Cat("Barsik", "Black", 7, 5, 100) {}

Cat::Cat(string n) : Cat("Barsik", "Black", 7, 5, 100) {}

Cat::Cat(string n, string c) : Cat(n, c, 7, 5, 100) {}

Cat::Cat(string n, string c, unsigned int a) : Cat(n, c, a, 7, 100) {}

Cat::Cat(string n, string c, unsigned int a, double w) : Cat(n, c, a, w, 100) {}

//1
Cat::Cat(string n, string c, unsigned int a, double w, int e)
{
	SetName(n);
	SetColor(c);
	SetAge(a);
	SetWeight(w);
	SetEnergy(e);
}

void Cat::Play()
{
	if (weight < 15)
	{
		if (energy > 20)
		{
			if (!hungry)
			{
				cout << name << " by played" << endl;
				energy -= 20;
				hungry = true;
			}
			else
			{
				cout << "The cat can't play, she's hungry!" << endl;
			}
		}
		else
		{
			cout << "The cat is tired, fell asleep right during the game" << endl;
			Sleep();
		}
	}
	else
	{
		if (energy > 20)
		{
			if (!hungry)
			{
				cout << name << " by played" << endl;
				energy -= 40;
				hungry = true;
			}
			else
			{
				cout << "The cat can't play, she's hungry!" << endl;
			}
		}
		else
		{
			cout << "The cat is tired, fell asleep right during the game" << endl;
			Sleep();
		}
	}
}

void Cat::Print() const
{
	if (energy > 0)
	{
		cout << "Name - " << GetName() << endl;
		cout << "Color - " << GetColor() << endl;
		cout << "Age - " << GetAge() << endl;
		cout << "Weight - " << GetWeight() << endl;
		cout << "Energy - " << GetEnergy() << endl;
		if (hungry) cout << "Hungry cat" << endl;
		else cout << "The cat is full" << endl;

		if (sleep) cout << "The cat is sleeping" << endl << endl;
		else cout << "Cat doesn't sleep" << endl << endl;
	}
	else
	{
		cout << "The cat died" << endl;
	}
}

void Cat::Sleep()
{
	if (sleep)
	{
		hungry = true;
		sleep = false;
		energy = 100;
		weight -= 0.5;
	}
	else
	{
		sleep = true;
	}
}

void Cat::Hungry()
{
	weight += 0.6;
	energy += 10;
	hungry = false;
}

void Cat::Speak() const
{
	cout << "Meow!" << endl;
}

void Cat::Hunt()
{
	int variables = rand() % 3;

	energy -= 10;
	if (weight < 15)
	{
		if (variables == 0)
		{
			cout << "The cat got her food!" << endl;
			hungry = false;
		}
		else
		{
			cout << "The hunt was unsuccessful" << endl;
		}
	}
	else
	{
		int variables = rand() % 3;

		energy -= 20;
		if (weight < 15)
		{
			if (variables == 0)
			{
				cout << "The cat got her food!" << endl;
				hungry = false;
			}
			else
			{
				cout << "The hunt was unsuccessful" << endl;
			}
		}
	}
}

void Cat::SetEnergy(int e)
{
	if (e >= 0 && e <= 100)
	{
		energy = e;
	}
	else
	{
		cout << "Incorrect energy!" << endl;
	}
}

void Cat::SetName(string n)
{
	name = n;
}

void Cat::SetColor(string c)
{
	if (c != "Purple" || c != "Blue" || c != "Red" || c != "Green")
	{
		color = c;
	}
	else
	{
		cout << "Incorrect color!" << endl;
	}
}

void Cat::SetAge(int a)
{
	if (a >= 0 && a <= 30)
	{
		age = a;
	}
	else
	{
		cout << "Incorrect Age!" << endl;
	}
}

void Cat::SetWeight(int w)
{
	if (w >= 1 && w <= 30)
	{
		weight = w;
	}
	else
	{
		cout << "Incporrect weight!" << endl;
	}
}

int Cat::GetEnergy() const
{
	return energy;
}

string Cat::GetName() const
{
	return name;
}

string Cat::GetColor() const
{
	return color;
}

int Cat::GetAge() const
{
	return age;
}

int Cat::GetWeight() const
{
	return weight;
}