#include <iostream>
using namespace std;
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float d = 0;
	float a = 0;
	float e = 0;
	int n = 0;
	
	float tong = 0;
	float trung_binh;
	float *D = new float[12];
	while(n<12){
		printf("\n Nhap diem mon thu %d ", n); 
		cin >> d;
		
		D[n] = d;
		n = n + 1;
		tong = tong + d;
	}
	
	trung_binh = tong/12;
	printf("\n Trung binh %f : ", trung_binh); 
	printf("\n Sap xep diem theo thu tu tang dan "); 
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (D[i] > D[j]) {
                float temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }
    printf("\n Diem cao nhat %f : ", D[n-1]); 

	
	
	
	return 0;
}
