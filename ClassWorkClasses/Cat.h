#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class Cat
{
private:
	int energy = 70;
	string name = "Barsik";
	string color = "Orange";
	unsigned int age = 10;
	double weight = 5;
	bool hungry = false;
	bool sleep = false;

public:
	//
	void Play();
	void Sleep();
	void Hungry();
	void Speak() const;
	void Print() const;
	void Hunt();

	void SetEnergy(int e);
	void SetName(string n);
	void SetColor(string c);
	void SetAge(int a);
	void SetWeight(int w);
};

