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
	printf("Before bubble sort: \n"); 
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	for (int i =0 ; i< n-1 ;i++){
		for( int j= 0;j < n-i-1;j++){
			if(arr[j]> arr[j+1]){
				int tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp; 
			} 
		} 
	} 
	printf("\nAfter bubble sort: \n"); 
	for  (int i = 0;i < n; i++){
		printf("%d\t", arr[i]); 
	}
	return 0;
}
