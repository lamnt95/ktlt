#include <iostream>
using namespace std;
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getData(){
	float income = 0;
	float rate1 = 0;
	float rate2 = 0;
	float rate3 = 0;
	float tax = 0;
	
	cout << " Nhap income: ";
	cin >> income;
	
	cout << " Nhap rate1: ";
	cin >> rate1;
	
	cout << " Nhap rate2: ";
	cin >> rate2;
	
	cout << " Nhap rate3: ";
	cin >> rate3;
	
	tax = income * rate1 + income * rate2 + income * rate3;
	
	printf("\n Phan tu thue phai nop la: %f : ", tax); 
}

int main(int argc, char** argv) {
	getData();
	return 0;
}
