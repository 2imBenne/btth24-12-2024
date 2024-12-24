#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap so phan tu cho mang: ");
	scanf("%d",&n);
	int arr[n];
	printf("Moi nhap cac gia tri cua phan tu trong mang\n");
	for(int i =0 ; i< n;i++){
		printf("Nhap phan tu thu [%d]: ",i+1);
		scanf("%d",&arr[i]); 
	} 
	printf("Before selection sort: \n"); 
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	for(int i = 0; i< n-1;i++){
		int max = i;
		for(int j = i+1;j<n;j++){
			if(arr[j]>arr[max]){
				max = j;
				 
			} 
		}	 
		int tmp = arr[i];
		arr[i]= arr[max];
		arr[max] = tmp; 
	}
	printf("\nAfter selection sort: \n"); 
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	return 0;
}



