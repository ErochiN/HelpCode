#include <iostream>
#include <string>

using namespace std;

class Apple
{
private:
	int weight;
	string color;

public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}

	void Show()
	{
		cout << "weight: " << weight << " color: " << color << endl;
	}
};

class Car
{
private:
	int weight;
	string color;
	string model;

public:
	Car (int weight, string color, string model)
	{
		this->weight = weight;
		this->color = color;
		this->model = model;
	}

	void Show()
	{
		cout << "weight: " << weight
			<< " color: " << color
			<< " model: " << model
			<< endl;
	}
};

class Humen
{
public:
	template <class T>
	void InspectObject(T &other)
	{
		other.Show();
	}
};

int main()
{
	Apple a(100, "RED");
	Car streetCar(1000, "Yellow", "Porsche");

	Humen Stive;

	Stive.InspectObject(a);
	Stive.InspectObject(streetCar);

	return 0;
}