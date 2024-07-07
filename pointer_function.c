#include <stdio.h>

void hoanvi_thamchieu(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void hoanvi_thamtri(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 10, b = 1000;

    printf("Truoc khi goi ham hoan vi, a=%d, b=%d\n", a, b);

    hoanvi_thamtri(a,b);
    printf("sau khi goi ham hoan vi tham tri, a=%d, b=%d\n", a, b);
    
    hoanvi_thamchieu(&a,&b);
    printf("sau khi goi ham hoan vi tham chieu, a=%d, b=%d\n", a, b);
    return 0;
}