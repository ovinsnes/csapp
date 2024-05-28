#include <stdio.h>

int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return bis(x, m) ^ m;
}

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_xor(int x, int y) {
    int result = bic(x, y);
    return result;
}

int main() {
    int x = 0x4321;
    int m = 0xF0F0;
    //  0100 0011 0010 0001
    //| 1111 0000 1111 0000
    //= 1111 0011 1111 0001
    int z = bool_or(x, m);
    //  1111 0011 1111 0001
    //^ 1111 0000 1111 0000
    //= 0000 0011 0000 0001
    int y = bool_xor(x, m);
    printf("Bit set   0x%x with mask 0x%x -> %.2x\n", x, m, z);
    printf("Bit clear 0x%x with mask 0x%x -> %.2x\n", x, m, y);
}