#include <iostream>
using namespace std;
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getData(int &N){
	cout << " Nhap so phan tu mang: ";
	cin >> N;
}

int check(float* D, int N){
	printf("\n Phan tu lon hon 1 hoac nho hon 2 la "); 
	for(int i=0; i<N; i++) {
  		if(D[i] > 1 || D[i] <2) {
  			printf(" %f ", D[i]); 
  		}
	}  
}

int main(int argc, char** argv) {
	int N;
	
	getData(N);
	printf("\n Phan tu N co gia tri: %d : ", N); 

	
  	float *D = new float[N];
  	
  	printf("\n Nhap gia tri cho mang D co %d phan tu \n", N); 
	for(int i=0; i<N; i++) {
		printf(" Nhap phan tu thu %d : ", i); 
  		scanf("%f", &D[i]); 
	}  
	
	check(D,N);
	return 0;
}
