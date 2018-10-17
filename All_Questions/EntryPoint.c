#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    int iValue=0;
    BOOL bRet=FALSE;
    
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);
    if(iValue<0)
    {
        iValue=-iValue;
    }
    printf("%d\n",iValue);

    printf("\nQuestion 1:\n");
    printf("Number of switching 4th & 7th bit ON is:%d\n",OnBit(iValue));
    
    printf("\nQuestion 2:\n");
    printf("Number of switching 9th & 8th bit OFF is:%d\n",OffBitX(iValue));
    
    printf("\nQuestion 3:\n");
    printf("Number of switching last 4 bits ON is:%u\n",OnBitX(iValue));

    printf("\nQuestion 4:\n");
    printf("Number of switching first and last 4 bits ON is:%u\n",OnBitX1(iValue));

    printf("\nQuestion 5:\n");
    printf("Number of switching first bit of each nibble to ON is:%u\n",OnBitX2(iValue));

    printf("\nQuestion 6:\n");
    printf("Number of switching 1st, 4th and 6th nibble to ON is:%u\n",OnBitX3(iValue));

    printf("\nQuestion 7:\n");
    printf("Number of switching 15th, 27th and 31st bit to ON is:%u\n",OnBitX4(iValue));
    return 0;
}
