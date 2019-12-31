#include <iostream>
#include <cmath>
#include<math.h>

using namespace std;
int main()
{
	int r;//radius
	int g;//weight
	int f;//buoyant force
	int v;//volume
	const double pi = 3.1415926535897;
	char ans;
	do {
		cout << "Enter the radius of sphere\n ";
		cin >> r;
		v = (4 / 3)*pi*(r*r*r);
		f = v * 62.4;
		cout << "Enter weight\n ";
		cin >> g;
		if (f >= g) {
			cout << "The sphere will float!";
		}
		else {
			cout<<"The sphere will sink!";
		}
		cout << "Do you want to try another time? (Y for yes)  \n";
		cin >> ans;
	} while (ans == 'Y');


	system("pause");
	return 0;
}
