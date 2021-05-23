#include<stdio.h>

#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getData(int *N){
	printf("\n Nhap so phan tu mang: "); 
	scanf("%d", N);
}

int main(int argc, char** argv) {
	int N;
	float x;
	float y;
	
	getData(&N);
	printf(" Mang co %d phan tu ", N); 

	float *X = new float[N];
	float *Y = new float[N];
	
	printf("\n Nhap gia tri cho mang X co %d phan tu \n", N); 
	for(int i=0; i<N; i++) {
		printf("\n Nhap toa do diem %d : ", i); 
		printf("\n Nhap phan tu X : ", i); 
  		scanf("%f", &X[i]); 
  		printf(" Nhap phan tu Y : ", i); 
  		scanf("%f", &Y[i]); 
	}  
	
	int so_phan_tu_bang_nhau = 0;
	printf("\n Kiem tra cac phan tu co toa do bang nhau"); 
	for(int i=0; i<N; i++) {
		if(X[i] == Y[i]){
			so_phan_tu_bang_nhau = so_phan_tu_bang_nhau + 1;	
		}
	}  
	printf("\n So phan tu co toa do bang nhau %d : ", so_phan_tu_bang_nhau); 

	printf("\n Kiem tra khoang cach"); 
	float *mang_khoang_cach = new float[N];
	float *mang_khoang_cach_sap_xep = new float[N];
	for(int i=0; i<N; i++) {
		float khoang_cach = sqrt(X[i]*X[i] + Y[i]*Y[i]);
		mang_khoang_cach[i] = khoang_cach;
		mang_khoang_cach_sap_xep[i] = khoang_cach;
	} 
	
	printf("\n Sap xep cac khoang cach theo thu tu tang dan "); 
	for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (mang_khoang_cach_sap_xep[i] > mang_khoang_cach_sap_xep[j]) {
                float temp = mang_khoang_cach_sap_xep[i];
                mang_khoang_cach_sap_xep[i] = mang_khoang_cach_sap_xep[j];
                mang_khoang_cach_sap_xep[j] = temp;
            }
        }
    } 
    float khoang_cach_xa_nhat = mang_khoang_cach_sap_xep[N-1];
    for(int i=0; i<N; i++) {
    	if(mang_khoang_cach[i] == khoang_cach_xa_nhat) {
    		printf("\n Diem xa goc nhat co toa do ( %f, %f ) voi khoang cach %f : ", X[i], Y[i], khoang_cach_xa_nhat); 
    	}
	} 
    
    
	
	return 0;
}
