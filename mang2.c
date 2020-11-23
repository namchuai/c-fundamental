#include <stdio.h>

int main()
{
    int a[200][200];
    int m,n;

    printf("so dong = ");
    scanf("%d",&m);
    printf("so cot = ");
    scanf("%d",&n);
    printf("nhap mang \n");

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        	printf("vao phan tu a[%d,%d] ",i,j);
        	scanf("%d",&a[i][j]);
        }
    }
    printf("mang = ");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           printf("%d",a[i][j]);
        }
    }
	
	// Tinh tong phan tu o cot thu 2
	printf("\n");
	int tong=0;
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			if (j == 2) {
				tong+=a[i][j];
			}
		}
	}
	printf("Tong cot thu 2=%d",tong);

    return 0;
}

