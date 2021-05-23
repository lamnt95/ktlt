#include <iostream>
using namespace std;
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a;
	float b;
	float c;
	float d;
	
	cout << " Nhap a: ";
	cin >> a;
	
	cout << " Nhap b: ";
	cin >> b;
	
	cout << " Nhap c: ";
	cin >> c;
	
	d = b*b - 4*a*c;
	
	if(d < 0) {
		printf("\n Phuong trinh vo nghiem "); 
	}
	
	float x1 = (-b + sqrt(d))/(2*a);
	float x2 = (-b - sqrt(d))/(2*a);
	
	if(d == 0) {
		printf("\n Nghiem kep: %f : ", x1); 
		return 0;
	}
	
	printf("\n Nghiem x1: %f : ", x1); 
	printf("\n Nghiem x2: %f : ", x2); 

	return 0;
}
