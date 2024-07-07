#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};

    unsigned char *pt;
    short *ptt;             //2byte

    pt = x;
    ptt = x;

    printf("%x\n", *pt);     //0x01 pt[0]

    printf("%x\n", *(pt+1));   //0x02 pt[1]

    printf("before pt = %d\n", pt);

    for (int i=0; i<10; i++)
    {
        printf("%x\n", *(pt+i));
    }

    printf("after pt = %d\n", pt);
    return 0;
}