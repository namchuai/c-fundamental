#include <stdio.h>

int main() {
	int size=0;
	printf("Nhap so phan tu cua mang=");
	scanf("%d", &size);
	
	int a[size];
	for(int i=0;i<size;i++) {
		printf("a[%d]=", i);
		scanf("%d",&a[i]);
	}
	
	printf("=======================\n");
	printf("Insertion sort\n");
	printf("Before:");
	for(int i=0;i<size;i++) {
		printf("%d ", a[i]);
	}
	
	for(int i=0;i<size;i++){
        if(a[i]>a[i+1]){
          
    }

	return 0;
}
