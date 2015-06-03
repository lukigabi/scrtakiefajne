#include "../inc/calc.hpp"

int Calculator::add(int a, int b)
{
	return a+b;
}

int Calculator::pow(int a, int n)
{
	int liczba;
	// ZAIMPLEMENTUJ MNIE ;_;
	for(int i = 1; i <= n; i++)
		liczba = liczba * a;

	return liczba;
}
	
int Calculator::fac(int n)
{
	int liczba = 1;
	// ZAIMPLEMENTUJ MNIE ;_;
	for(int i = 1; i <= n; i++)
		liczba = liczba * i;
	return liczba;
}
