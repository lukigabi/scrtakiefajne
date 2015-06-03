#include "../inc/calc.hpp"

int Calculator::pow(int a, int n)
{
	int liczba=a;
	// ZAIMPLEMENTUJ MNIE ;_;
	for(int i = 1; i <= n/2; i++)
		liczba=liczba*liczba;
	return -1;
}
	
int Calculator::fac(int n)
{
	int liczba = 1;
	// ZAIMPLEMENTUJ MNIE ;_;
	for(int i = 1; i <= n; i++)
		liczba = liczba * i;
	return -1;
}
