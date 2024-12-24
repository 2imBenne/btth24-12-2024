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
	printf("Before insertion sort: \n"); 
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	for(int i = 0; i< n;i++){
		int value = arr[i];
		int j = i - 1;
		while(j >=0 && value < arr[j]){
			arr[j+1] = arr[j];
			j -= 1; 
		} 
		arr[j + 1] = value; 
	}
	printf("\nAfter insertion sort: \n") ;
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	return 0; 
} 

