#include <stdio.h>


int main()
{
    int x = 1000;

    unsigned char *pt;
    //&pt là địa chỉ của con trỏ trên RAM
    //pt: là địa chỉ con trỏ trỏ đến trên Ram
    //*pt giá trị của con trỏ tại vùng địa chỉ con trỏ trên RAM

    pt = &x;

    printf("%d\n", &x);
    printf("&pt = %d\n", &pt);
    printf("pt = %d\n", pt);
    printf("*pt = %d\n", *pt);

    printf("*p = %x - %x\n", *pt, *(pt+1));
    return 0;
}

