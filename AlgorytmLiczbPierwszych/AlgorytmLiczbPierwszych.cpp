﻿#include<iostream>
using namespace std;

int main()
{
	int i;
	int	j;
	int	liczenie = 1;
	int	b = 0;
	int ilosc = 0;

	cout << "podaj ile chcesz liczb pierwszych\n" <<endl;

	cin >> ilosc;

	for (i = 3; i > 0; ++i)
	{
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0) {
				b = 1;
				break;
			}
		}
		if (b == 0)
		{
			cout << "\n" << i;
			liczenie++;
		}
		b = 0;
		if (liczenie == ilosc+1)
			break;
	}

	return 0;
}