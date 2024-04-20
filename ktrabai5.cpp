#include <stdio.h>
#include <string.h>

int main() {
    char *ptrArrayMSSV[] = {"2305CT1001", "2305CT1002", "2305CT5775", "2305CT1004", "2305CT1005"};
    char *maxMSSV = ptrArrayMSSV[0];
    int index = 0;
    
    // Duyệt mảng để tìm phần tử chứa MSSV lớn nhất
    for (int i = 1; i < 5; i++) {
        if (strcmp(ptrArrayMSSV[i], maxMSSV) > 0) {
            maxMSSV = ptrArrayMSSV[i];
            index = i;
        }
    }
    
    // In địa chỉ và phần tử chứa MSSV lớn nhất
    printf("Địa chỉ của phần tử chứa MSSV lớn nhất là: %p\n", (void*)(ptrArrayMSSV + index));
    printf("Phần tử chứa MSSV lớn nhất là: %s\n", ptrArrayMSSV[index]);
    
    return 0;
}