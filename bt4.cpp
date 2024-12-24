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
	int searchValue=0; 
	printf("Moi nhap vao gia tri can tim: ");
	scanf("%d",&searchValue);
	for(int i=0; i< n;i++){
		if(searchValue == arr[i]){
			printf("Gia tri %d co ton tai trong mang va nam o vi tri [%d] ",searchValue,i+1);
			return 0; 
		} 
	} 
	printf("Phan tu khong ton tai trong mang");
}
