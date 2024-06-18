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


## 2.14

 x = 0x66 = 0110 0110, y = 0x39 = 0011 1001
~x = 	  = 1001 1001,~Y = 	= 1100 0110

x&y
  0110 0110
& 0011 1001
= 0010 0000 = 0x20

x|y
  0110 0110
| 0011 1001
= 0111 1111 = 0x7F

~x|~y
  1001 1001
| 1100 0110
= 1101 1111 = 0xDF

x & !y
  1001 1001
& 0000 0000
= 0000 0000 = 0x00

x && y = 0x01
x || y = 0x01
!x || !y = 0x00
x && ~y = 0x01

## 2.15

ikke ferdig

## 2.16

	x	 |        x<<3	    |     x>>2(log)    |   x>>2 (arit)
0xC3 | 1100 0011 | 0001 1000 | 0x18 | 0011 0000 | 0x20 | 1111 0000 | 0xF0
0x75 | 0111 0101 | 1010 0000 | 0xA0 | 0001 1101 | 0x1D | 1101 1101 | 0xDD
0x87 | 1000 0111 | 0011 1000 | 0x38 | 0010 0001 | 0xE1 | 1110 0001 | 0xE1
0x66 | 0110 0110 | 0011 0000 | 0x30 | 0001 1001 | 0x19 | 1101 1001 | 0xD9


## 2.17

   x,vec     |        B2U_4(x,vec)         |     B2T_4(x,vec)
0xE | [1110] |  2^3 + 2^2 + 2^1 = 14       |  -2^3 + 2^2 + 2^1 = -2
0x0 | [0000] |  0*2^3 + 0*2^2 + 0*2^1 = 0  | -0*2^3 + 0*2^2 + 0*2^1 = 0
0x5 | [0101] |  2^2 + 2^0 = 5		   |   2^2 + 2^0 = 5
0x8 | [1000] |  2^3 = 8			   |  -2^3 = -8
0xD | [1101] |  2^3 + 2^2 + 2^0 = 13	   |   2^3 + 2^2 + 2^0 = 13
0xF | [1111] |  2^3 + 2^2 + 2^1 + 2^0 = 15 |  -2^3 + 2^2 + 2^1 + 2^0 = -1

## 2.18

sub	0x2E0	0010 1110 0000   2^9 + 2^7 + 2^6 + 2^5 = 512+128+64+32 =736
mov    -0x58	     0101 1000   2^6+2^4+2^3 = 64+16+8 = -88
add	0x28	     0010 1000	 2^5+2^3 = 32+8 = 40
mov    -0x30	     		 -3*16 = -48
mov	0x78	     0111 1000	 7*16+8 = 120
mox	0x88			 8*16+8 = 136
mov	0x1f8			16^2 + 15*16 + 8 = 256+240+8 = 504

add	0x8		  1000   0*16+8 = 8

mov	0xC0	     1100 0000 	 12*16+8 = 200
mov    -0x48			- (4*16+8) = -72

## 2.19

 x  | hex | binary | B2T_4(x,vec)      |  T2U_4(x)
-8  | 0x8 | 1000   | -2^3 = -8         |  8
-3  | 0xD | 1101   | -2^3+2^2+2^0 = -3 | 13
-2  | 0xE | 1110   | -2^3 + 2^2 + 2^1 = -2 | 14
-1  | 0xF | 1111   | -2^3 + 2^2 + 2^1 + 1 = -1 | 15
0   | 0x0 | 0000   | 0			| 0
5   | 0x5 | 0101   | 5			| 5

## 2.20

-8 --> T2U_w(x) = x + 2^4 = -8 + 16 = 0
T2U_4(-3) = -3 + 2^4 = 13
T2U_4(-2) = -2 + 2^4 = 14
T2U_4(-1) = -1 + 2^4 = 15
T2U_4(5) = 5

## 2.21

Expression			Type		Evaluation
-2147483647-1 == 2147483648U	unsigned	1
-2147483647-1 < 2147483647	signed		1
-2147483647-1U < 2147483647	unsigned	0
-2147483647-1 < -2147483647	signed		1
-2147483647-1U < -2147483647	unsigned	0

## 2.22


## 2.23

	w	fun1(w)	step1 | step2		fun2(w) step1 | step2
0x00000076	0x76000000    |  00000076	0x76000000    | 0x00000076
0x87654321	0x21000000    |0x00000021	0x21000000    | 0x00000021
0x000000C9	0xC9000000    |0x000000C9	0xC9000000    | 0xffffffC9
0xEDCBA987	0x87000000    |0x00000087	0x87000000    | 0xffffff87

b.fun1 extracts the lower 8 bits, and since the preceding bits are all zeros, the value is unsigned, giving a range of 0-255

fun2 also extracts the lower 8 bits, but because of sign extension the range of values is -128 -> 127 instead


## 2.24

u: 9 mod 2^3 = 1
s: U2T_3(x mod 2^k)

1011 - 011 - 0101	u: 11 mod 2^3 = 3, s: 
1111 - 111 - 0001



	Hex    |  Unsigned	|  Signed
original trunc | original trunc | original trunc
   0	   0   |    0	    0   |    0	     0
   2	   2   |    2       2   |    2	     2
   9	   1   |    9  	    1   |   -7	    -7
   B	   3   |   11	    3   |   -5	    -5
   F	   7   |   15	    7   |   -1	    -1

We first use equation 2.9 to find the truncated unsigned value, and then we apply U2T_k on the result to find the two's-complement truncated value. 

## 2.25

The code encounters a memory error in line 7 because when we subtract 1 from an unsigned int of zero, it wraps around to the maximum value that an unsigned int can hold.

The maximum value of an unsigned is twice as big as the maximum signed, leading int i to wrap around to its minimum value at some point. Since this will cause access of a negative index in the array, we get a array out of bounds error, or similar.

We can correct the code by making length a signed int as well.

## 2.28

2^4 - 8 = 8
2^4 - 5 = 11
2^4 - 13 = 3
2^4 - 15 = 1
0101 -> 1011 -> B
1000 -> 1000 -> 8
1101 -> 0011 -> 3
1111 -> 0001 -> 1


       x	   |        -u 4 x
Hex	Decimal		Decimal	Hex
0	0		0	0
5	5		-5	B
8	8		-8	8
D	13		-13	3
F	15		-15	1

# 2.29


   x	   y	  x+y	  T_x+y	  case

    -12	    -15	     -27       5   1
[10100]	[10001] [100101] [00101] 

     -8      -8      -16     -16   2   
[11000]	[11000]	 [10000] [10000]

     -9	      8	      -1      -1  
[10111]	[01000]	 [11111] [11111]   2

      2	      5	       7       7 
[00010]	[00101]	 [00111] [00111]   3

     12	      4	     -16     -16   4
[01100]	[00100]	 [10000] [10000]



# 2.31

I laught at the code because in the case where x = 127, y = 1, and we're using signed char, when adding these two we are clearly producing a positive overflow. And the function should return a zero. Yet, the function evevaluates sum-x == y to true. Since -128-127 actually is 1, because it wraps around. What is strange is that the code seems to work, yet the solution in the book using abelian groups shows it should not.


