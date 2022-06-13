#include<iostream>
#include<string>
#include<Windows.h>
#pragma once
using namespace std;

class Cat
{
private:
	int energy;
	string name;
	string color;
	unsigned int age;
	double weight;
	bool hungry = false;
	bool sleep = false;

public:
	//Constructors
	Cat();
	Cat(string n);
	Cat(string n, string c);
	Cat(string n, string c, unsigned int a);
	Cat(string n, string c, unsigned int a, double w);
	Cat(string n, string c, unsigned int a, double w, int e);

	//Actions
	void Play();
	void Sleep();
	void Hungry();
	void Speak() const;
	void Print() const;
	void Hunt();

	//Setters
	void SetEnergy(int e);
	void SetName(string n);
	void SetColor(string c);
	void SetAge(int a);
	void SetWeight(int w);

	//Getters
	int GetEnergy() const;
	string GetName() const;
	string GetColor() const;
	int GetAge() const;
	int GetWeight() const;
};

