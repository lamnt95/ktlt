#include <iostream>
using namespace std;
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int getData() {
	
		int N;
		int t;
		float avg;

	  	cout << "Nhap so N: ";
		cin >> N;
		
		cout << "Nhap so avg: ";
		cin >> avg;
	  		  	
	  	int *D = new int[N];
	  	
		for(int i=0; i<N; i++) {
			printf(" ");
			printf("Nhap phan tu thu %d : ", i); 
	  		scanf("%d", &D[i]); 
		}  
		
		
		printf("Gia tri mang: "); 
		for (int i = 0; i <N; i++) {  
	  		printf(" %d ", D[i]); 
		}
		
		int tong = 0;
		for (int i = 0; i <N; i++) {  
	  		if(D[i] > sqrt(avg)) {
	  			tong = tong + D[i];
			}
		}
		printf("\n Tong cua mang %d : ", tong); 
		
		
		printf("\n Sap xep mang theo thu tu tang dan "); 
		for (int i = 0; i < N; i++) {
	        for (int j = i + 1; j < N; j++) {
	            if (D[i] > D[j]) {
	                int temp = D[i];
	                D[i] = D[j];
	                D[j] = temp;
	            }
	        }
	    }
	    
	    printf("\nGia tri mang: "); 
		for (int i = 0; i <N; i++) {  
	  		printf(" %d ", D[i]); 
		}
		
		int min;		
		for (int i = 0; i <N; i++) {  
	  		if(D[i] > avg) {
	  			min = D[i];
				printf("\n So be nhat trong mang lon hon avg: %d ", min);
				return 0; 
			}
		}
		return 0;			
	}
	
int main(int argc, char** argv) {
	getData();
	return 0;
}


