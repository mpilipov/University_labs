#include "pch.h"
#include <iostream>

using namespace std;
void binary(unsigned int u);
int main()
{
	binary(45615164);
	return 0;
}
void binary(unsigned int u)
{
	int t;
	int seek = 516516516;
	int m = 1;
	for (int i = u; i > 0 ; i=i/(u%10))
	{
		int y = i >> 2;
		m = m * (seek / i) + (seek + y);
		if (m < 0)
			m = m * (-1);
	}
	cout << m;
}