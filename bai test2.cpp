#include <stdio.h>

int main() {
    const int MAX = 100;
    int arr[MAX][MAX];
    int rows = 0, cols = 0;
    int choice;

    do {
        // in menu ra ngoai man hinh
        printf("\n      MENU      \n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. in ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("4. In cac phan tu nam tren duong cheo chinh\n");
        printf("5. In cac phan tu nam tren duong cheo phu\n");
        printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
        printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { 
            // nhap gia tri va kich co cua mang
                printf("Nhap so hang: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);

                if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
                    printf("Kich co mang khong hop le!\n");
                } else {
                    printf("Nhap cac phan tu cua mang:\n");
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            printf("arr[%d][%d]: ", i, j);
                            scanf("%d", &arr[i][j]);
                        }
                    }
                }
                break;
            }
            case 2: { 
            // in mang ra theo kieu ma tran
                printf("Ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
           
            case 3: { 
            //in cac phan tu duong bien va tinh tich
                int product = 1;
                printf("Cac phan tu tren duong bien la:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
                break;
            }
            case 4: { // in cac phan tu cua duong cheo chinh
                if (rows != cols) {
                    printf("Ma tran khong phai vuong, khong co duong cheo chinh!\n");
                } else {
                    printf("Cac phan tu tren duong cheo chinh la:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i][i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 5: {
            	// in cac phan tu nam tren duong cheo phu
            	if (rows != cols) {
            		printf("Khong phai ma tran vuong , khong co duong cheo phu");
				}else{
					printf("Cac phan tu nam tren duong cheo phu la: \n");
					for (int i =0 ; i< rows; i++){
						printf("%d",arr[i][cols-1-i]);
					}
					printf("\n");
				}
				break;
			}
        }
    } while (choice != 8);
    printf("Ket thuc chuong trinh");

    return 0;
}

