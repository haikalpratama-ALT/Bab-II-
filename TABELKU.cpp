#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	string judul = "TABEL PENJUALAN";
	cout << left;
	cout << setw(5) << judul << endl;
	cout << "-------------------------------"<< endl;
	cout << endl;
	
	string bulan = "Bulan", jual = "Penjualan";
	cout << left;
	cout << setw(5) << bulan;
	cout << right;
	cout << setw(26) << jual << endl;
	cout << "-------------------------------"<< endl;
	
	string jan = "Januari", feb = "Februari", mar = "Maret", apr = "April";
	int num1 = 10000, num2 = 200000, num3 = 50000, num4 = 0;
	cout << left;
	cout << setw(5) << jan;
	cout << right;
	cout << setw(24) << num1 << endl;
	
	cout << left;
	cout << setw(5) << feb;
	cout << right;
	cout << setw(23) << num2 << endl;
	
	cout << left;
	cout << setw(5) << mar;
	cout << right;
	cout << setw(26) << num3 << endl;
	
	cout << left;
	cout << setw(5) << apr;
	cout << right;
	cout << setw(26) << num4 << endl;
	
	return 0;
}
