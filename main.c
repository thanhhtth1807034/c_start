#include <stdio.h>

int countUnsignedNumber(int arrNumber[], int sizeOfArr){
    int totalCountUnsignedNumber = 0;
    for (int i = 0; i < sizeOfArr; ++i) {
        if (arrNumber[i] > 0){
            totalCountUnsignedNumber += arrNumber[i];
        }
    }
    return totalCountUnsignedNumber;
}
int main(){
    int sizeOfArr;
    printf("Nhập size của mảng : \n");
    scanf("%d",&sizeOfArr);
    int arrNumber[sizeOfArr];
//        arrNumber[0]=12;
//        arrNumber[1]=-23;
//        arrNumber[2]=34;
//        arrNumber[3]=-45;
//        arrNumber[4]=44;
    for (int i = 0; i < sizeOfArr; ++i) {
        printf("Nhập giá trị các phần tử: %d\n",i);
        scanf("%d",&arrNumber[i]);
    }
    int totalCountUnsignedNumber = countUnsignedNumber(arrNumber, sizeOfArr);
    printf("kết quả cần tìm là: %d",totalCountUnsignedNumber);
    return 0;
}