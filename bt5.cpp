#include <stdio.h>

int main(){
	
	int arr[5]= {1,2,3,4,5};
	int searchValue;
	printf("Moi nhap vao gia tri can tim kiem: ");
	scanf("%d",&searchValue); 
	int start = 0;
	int end = sizeof(arr) / sizeof(int); 
	
	int mid;
	while(start < end) {
    mid = (start + end)/2;
    if (arr[mid] == searchValue) {
        break;
    } else if (arr[mid] < searchValue) {
        start = mid + 1;
    } else {
        end = mid - 1;
    }
}

	if (arr[mid] == searchValue) {
	    printf("Phan tu co chi so %d trong mang co gia tri %d\n", mid, arr[mid]);
	} else {
	    printf("Khong tim thay phan tu co gia tri %d trong mang\n", searchValue);
	}
 	return 0; 
} 
