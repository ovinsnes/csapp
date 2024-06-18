#include <stdio.h>

/* Practice problem 2.12 */
int least_sig_byte(int x) {
    //   0000 1111 1111
    //&  0011 0010 0001
    //=  0000 0010 0001
    return x & 0xFF;
}

int complement_all_but_the_least(int x) {
    //   0000 1111 1111
    //&  0011 0010 0001
    //=  0000 0010 0001
    int lsb = least_sig_byte(x);

    int mask = 0xFFFFFF00;
    //  0100 0011 0010 0001
    //& 1111 1111 0000 0000
    //= 0100 0011 0000 0000
    int msb = x & mask;
    //  1011 1100 1111 1111
    //& 1111 1111 0000 0000
    //= 1011 1100 0000 0000
    int msbComplement = ~msb & mask;
    //| 0000 0000 0010 0001 
    //= 1011 1100 0010 0001
    int msbCmplWithLsb = msbComplement | lsb;

    return msbCmplWithLsb;
}

int least_sig_byte_changed(int x) {
    int mask = 0xFFFFFF00;
    //  0100 0011 0010 0001
    //& 1111 1111 0000 0000
    //= 0100 0011 0000 0000
    int msb = x & mask;
    //  0100 0011 0000 0000
    //| 0000 0000 1111 1111
    //= 0100 0011 1111 1111
    int res = msb | 0xFF;

    return res;
}

int main()
{
    int x = 0x87654321;
    int a = least_sig_byte(x);
    printf("The LSB of 0x%x is %.2x\n", x, a);
    int b = complement_all_but_the_least(x);
    printf("Complement all but the LSB of 0x%x: %.2x\n", x, b);
    int c = least_sig_byte_changed(x);
    printf("Set LSB of 0x%x to all ones: %.2x\n", x, c);
    
    return 0;
}