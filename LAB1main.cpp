#include <iostream>
using namespace std;
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getData() {
	
	int N;
	float avg;
	float v;
	float max;
	float min;

  	cout << " Nhap so phan tu mang: ";
	cin >> N;
	
	printf("\n Phan tu N co gia tri: %d : ", N); 
	
  	float *D = new float[N];
  	
  	printf("\n Nhap gia tri cho mang D co %d phan tu \n", N); 
	for(int i=0; i<N; i++) {
		printf(" Nhap phan tu thu %d : ", i); 
  		scanf("%f", &D[i]); 
	}  
	
	printf("\n Kiem tra cac gia tri hop le"); 
	for(int i=0; i<N; i++) {
		if(D[i] < 0 || D[i] > 10){
			D[i] = 0;
		}
	}
	
	printf("\n Tinh toan cac diem"); 
	
	printf("\n Sap xep mang theo thu tu tang dan "); 
	for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (D[i] > D[j]) {
                float temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }
	for (int i = 0; i <N; i++) {  
	  	printf(" %f ", D[i]); 
	}
    
    
    printf("\n Diem cao nhat %f : ", D[N-1]); 
	printf("\n Diem thap nhat %f : ", D[0]); 

	float tong = 0;
	for(int i=0; i<N; i++) {
		tong = tong + D[i];
	}
	avg = tong/N;
	printf("\n Trung binh cong %f : ", avg); 
	
	float do_lech_chuan = 0;
	float tong_binh_phuong_phuong_sai = 0;
	for(int i=0; i<N; i++) {
		tong_binh_phuong_phuong_sai = tong_binh_phuong_phuong_sai + (D[i] - avg)*(D[i] - avg);
	}
	do_lech_chuan = sqrt(tong_binh_phuong_phuong_sai/(N-1));
	printf("\n Do lech chuan %f : ", do_lech_chuan); 
	
	if(do_lech_chuan > 2){
		printf("\n Hoc sinh hoc lech. "); 
	}

	return 0;			
}

int main(int argc, char** argv) {
	getData();	
	return 0;
}

