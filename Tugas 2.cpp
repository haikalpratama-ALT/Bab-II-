#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int num1, num2, num3, num4, num5, num6, num7, num8, num9;
	cout << "Masukan data matriks baris 1 : ";
	cin >> num1 >> num2 >> num3;
	cout << "Masukan data matriks baris 2 : ";
	cin >> num4 >> num5 >> num6;
	cout << "masukan data matriks baris 3 : ";
	cin >> num7 >> num8 >> num9;
	
	cout << "Data yang anda masukan : " << endl;
	cout << setw(5) << num1;
	cout << setw(5) << num2;
	cout << setw(5) << num3 << endl;
	
	cout << setw(5) << num4;
	cout << setw(5) << num5;
	cout << setw(5) << num6 << endl;
	
	cout << setw(5) << num7;
	cout << setw(5) << num8;
	cout << setw(5) << num9 << endl;
	
	return 0;
}
