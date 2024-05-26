# Chapter 02: Practice problems

## 2.1

a) 
3 9 A 7 f 8

0011 1001 1010 0111 1111 1000

b) to hex

1100 1001 0111 1011

12   9	  7    11

C    9    7    B

c) to binary:

D 5 E 4 C

13 5 14 4 12

1101 0101 1110 0100 1100

d) to HEX:

0010 0110 1110 0111 1011 0101

2    6    14   7    11   5

2    6    E    7    B   5

## 2.2

n	2^n (decimal)	2^n (hex)
9	512		0x200
19	524,288		0x80000	
14	16,384		0x4000
16	65,536		0x10000
17	131,072		0x20000	
5	32		0x20
7	128		0x80

## 2.3

decimal		binary		hexadecimal
0		0000 0000	0x00
167		1010 0111	0xA7
62		0011 1110	0xD3
188		1011 1100	0xBC
55		0011 0111	0x37
136		1000 1000	0x88
243		1111 0011	0xF3
82		0101 0010	0x52
172		1010 1100	0xAC
231		1110 0111	0xE7

## 2.4

    0x503C
+   0x   8
=   0x5044

---

    0x503c
-   0x0040
=   0x0f0c

---
0x503c + 64 = 0x503c + 0x40


    0x503c
+   0x0040
=   0x507c   

---

    0x50ea
-   0x503c
=   0x00ae

## 2.5

int val = 0x87654321
byte_pointer valp = (byte_pointer) &val;
show_bytes(valp, 1);
show_bytes(valp, 2);
show_bytes(valp, 3);

a. Little endian: 21		Big endian: 87
b. Little endian: 21 43		big endian: 87 65
c. little endian: 21 43 65	big endian: 87 65 43

## 2.6

a. 

hex: 0x00 35 91 41	binary: 0000 0000 0011 0101 1001 0001 0100 0001
hex: 0x4A564504		binary: 0100 1010 0101 0110 0100 0101 0000 0100

b.

binary: 
binary: 00000000001101011001000101000001
                   *********************
binary:   01001010010101100100010100000100

21 matching bits

c. the first bit of the integer string, and the first 8 bits of the float string does not match.


## 2.7

const char s = "abcdef";
show_bytes((byte_pointer) s, strlen(s));

output = 61 62 63 64 65 66

## 2.8

a  = 01101001
b  = 01010101

~a = 10010110
~b = 10101010

a&b= 01000001
a|b= 01111101
a^b= 00111100

## 2.9

a.

Complement of:

black(000): 	111
blue(001):	110
green(010):	101
cyan(011):	100
red(100):	011
magenta(101):	010
yellow(110):	001
white(111):	000

b.

blue | green:
  001
| 010
= 011 	(cyan)

yellow & cyan:
  110
& 011
= 010	(green)

red ^ magenta:
  100
^ 101
= 001	(blue)

## 2.10

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

Start
*x = a
*y = b

Step 1:
*x = a		*y = a ^ b
*x = a ^ (a^b)  *y = a^b
*x = a ^ (a^b)  *y = (a^(a^b))^(a^b)

## 2.11

a.

index first, and last both has value = array[(2k+1)/2] in the final iteration

so, for array A = [1,2,3], k=1, the value is A[3/2] = 2

b.

for odd arrays the last call to inplace_swap uses the same parameter value for both *x and *y, resulting in the additive inverse a^a=0

c.

if we would terminate the loop before the last iteration this would not occur. first <= last ==> first < last



