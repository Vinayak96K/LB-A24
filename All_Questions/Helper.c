#include"MyHeader.h"

//Accepts number, switches the 4th bit to ON in its binary representation and returns the modified number.
UINT OnBit(UINT iNo)
{
    UINT iMask = 0x00000048;

    iNo=(iNo | iMask);
    return iNo;

}

//Accepts number, switches the 9th & 8th bit OFF in its binary representation and returns the modified number.
UINT OffBitX(UINT iNo)
{
    UINT iMask = 0xFFFFFE7F;
    
    iNo=(iNo & iMask);
    return iNo;
}

//Accepts number, switches the last four bits to On in its binary representation and returns the modified number.
UINT OnBitX(UINT iNo)
{
    UINT iMask = 0xF0000000;
    
    iNo=(iNo | iMask);
    return iNo;
}

//Accepts number, switches the first four and last four bits to ON in its binary representation and returns the modified number.
UINT OnBitX1(UINT iNo)
{
    UINT iMask = 0xF000000F;
    
    iNo=(iNo | iMask);
    return iNo;
}

//Accepts number, switches the first bit of each nibble to ON in its binary representation and returns the modified number.
UINT OnBitX2(UINT iNo)
{
    UINT iMask = 0x11111111;
    
    iNo=(iNo | iMask);
    return iNo;
}

//Accepts number, switches the 1st, 4th and 6th nibble to ON in its binary representation and returns the modified number.
UINT OnBitX3(UINT iNo)
{
    UINT iMask = 0x00F0F00F;
    
    iNo=(iNo | iMask);
    return iNo;
}

//Accepts number, switches the 15th, 27th and 31st bits to ON in its binary representation and returns the modified number.
UINT OnBitX4(UINT iNo)
{
    UINT iMask = 0x44004000;
    
    iNo=(iNo | iMask);
    return iNo;
}