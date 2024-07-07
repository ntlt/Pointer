#include <stdio.h>

void nhapMang(int *arr, int *number)   
{
    printf("Nhap so phan tu cua mang:");
    scanf("%d", number);

    for(int i=0; i<*number; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", (arr+i)); // arr vẫn đang ở vị trí 0 = &arr[i]
    }
}

void inMang(int *arr, int number)   
{

    for(int i=0; i<number; i++)
    {
        printf("arr[%d] = %d\n",i, arr[i]); //*(arr+1)
        
    }
}

int main() 
{

    int mang[100], sophantu;
    nhapMang(mang, &sophantu);
    inMang(mang, sophantu);

}