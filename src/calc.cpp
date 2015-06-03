#include "../inc/calc.hpp"

int Calculator::pow(int a, int n)
{
	int liczba;
	// ZAIMPLEMENTUJ MNIE ;_;
	liczba = a^n;
	return liczba;
}
	
int Calculator::fac(int n)
{
	int liczba = 1;
	// ZAIMPLEMENTUJ MNIE ;_;
	for(int i = 1; i <= n; i++)
		liczba = liczba * i;
	return -1;
}
