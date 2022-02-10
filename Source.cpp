#include <iostream>
#include <conio.h>
#include <cmath>
#include <string>
using namespace std;

//structure s'il y en a
//Protoype s'il y en a

double Puissance(double, double);
//grosse bertha
double QuadratiquePositive(double, double, double);
//calculatrice
enum Operation_e
{
Plus, Moins, Mult, Div
};
double Calculatrice(double, double, Operation_e op);


void main(void)
{
	float Reponse;
	Reponse = 0;
	
	//ici le code du programme
	int appel1 = Puissance(2, 2);
	int appel2 = Puissance(3, 3);
	float berta1 = QuadratiquePositive(9, 3, 0);
	cout << appel1 << "\n";
	cout << appel2 << "\n";
	cout << hex << Puissance(3, 3) << "\n";
	cout << berta1;
	cout << Reponse;
	
}


//Fonction s'il y a lieu
double Puissance(double x, double y)
{
	double Resultat = 1;
	for (int i = 0; i < y; i++)
	{
		Resultat *= x;
	}
	return Resultat;
}

double QuadratiquePositive(double a, double b, double c) 
{
	double x;
	x = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	return x;
}

double Calculatrice(double a, double b, Operation_e op)
{
	double Reponse;


	switch (op)
	{
	case Plus:

		Reponse = a + b;
		break;
	case Moins:
		Reponse = a - b;
		break;
	case Mult:
		Reponse = a * b;
		break;
	case Div:
			Reponse = a / b;
			break;
	default:
		break;
	}
	return Reponse;




}


