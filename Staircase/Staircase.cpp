// Staircase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int s = 0; s < n - 1; s++) cout << " ";
		for (int j = 0; j < i; j++) cout << "#";
		cout << endl;
	}
    return 0;
}

