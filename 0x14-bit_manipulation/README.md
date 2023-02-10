0. 0

Explanation of each line:

#include <stdlib.h> and #include <string.h> are header files that provide functions to handle strings.
unsigned int result = 0; declares a variable result of type unsigned int and initializes it to 0. This variable will be used to store the result of the conversion.
int i, len; declares two variables i and len of type int. i will be used as a loop counter, and len will store the length of the input string.
if (b == NULL) { return 0; } checks if the input string b is NULL. If it is, the function returns 0.
len = strlen(b); uses the strlen function from the string.h library to get the length of the input string b and store it in the len variable.
for (i = 0; i < len; i++) is the start of a for loop that will iterate len times. In each iteration, the code inside the loop will be executed.
if (b[i] != '0' && b[i] != '1') checks if the current character in the string (accessed by b[i]) is not '0' or '1'. If it's not, the function returns 0.
result = result * 2 + (b[i] - '0'); converts the current binary digit to decimal and adds it to the result variable. The b[i] - '0' expression converts the binary digit '0' or '1' to the decimal values 0 or 1.
The for loop continues to the next iteration until i is equal to len.
Finally, the return result; statement returns the converted decimal number stored in the result variable.




1. 1

Explanation of each line:

#include <stdio.h> is a header file that provides functions for input/output operations, including putchar which is used in this function to print individual characters.
void print_binary(unsigned long int n) declares the function print_binary that takes an unsigned long int argument n and returns no value (void).
int i; int flag = 0; declares two variables i and flag of type int. i will be used as a loop counter, and flag is used to keep track of whether any bits are set in the input number.
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--) is the start of a for loop that will iterate sizeof(unsigned long int) * 8 times. The loop starts from the most significant bit (the leftmost bit) and goes to the least significant bit (the rightmost bit).
if ((n & (1UL << i)) != 0) checks if the i-th bit of the number n is set. The 1UL << i expression shifts the value 1 to the i-th position, effectively creating a mask with only the i-th bit set. The & operator performs a bitwise AND operation between n and the mask, and the result is not equal to 0 if the i-th bit is set.
putchar('1'); if the i-th bit is set, the function prints a '1' character.
flag = 1; sets the value of flag to 1 to indicate that at least one bit is set in the input number.
else if (flag == 1) putchar('0'); if the i-th bit is not set and flag is 1, the function prints a '0' character to represent the unset bit.
The for loop continues to the next iteration until i is equal to 0.
if (flag == 0) putchar('0'); if all bits of the input number are unset and flag is 0, the function prints a single '0' character to represent the number.




2. 10

Explanation of each line:

int get_bit(unsigned long int n, unsigned int index) declares the function get_bit that takes two arguments: an unsigned long int n and an unsigned int index. The function returns an int value.
if (index >= sizeof(unsigned long int) * 8) checks if the input index is within the size of an unsigned long int in bits. If index is equal to or greater than sizeof(unsigned long int) * 8, the function returns -1 to indicate an error.
return (n & (1UL << index)) != 0; returns the value of the index-th bit of n. The expression 1UL << index shifts the value 1 to the index-th position, effectively creating a mask with only the index-th bit set. The & operator performs a bitwise AND operation between n and the mask, and the result is not equal to 0 if the index-th bit is set. The function returns 1 if the bit is set and 0 if the bit is not set.




3. 11

Explanation of each line:

int set_bit(unsigned long int *n, unsigned int index) declares the function set_bit that takes two arguments: a pointer to an unsigned long int n and an unsigned int index. The function returns an int value.
if (index >= sizeof(unsigned long int) * 8) checks if the input index is within the size of an unsigned long int in bits. If index is equal to or greater than sizeof(unsigned long int) * 8, the function returns -1 to indicate an error.
*n |= (1UL << index) sets the index-th bit of *n to 1. The expression 1UL << index shifts the value 1 to the index-th position, effectively creating a mask with only the index-th bit set. The |= operator performs a bitwise OR operation between *n and the mask, setting the index-th bit to 1.
return 1 returns 1 to indicate success.




4. 100

Explanation of each line:

int clear_bit(unsigned long int *n, unsigned int index) declares the function clear_bit that takes two arguments: a pointer to an unsigned long int n and an unsigned int index. The function returns an int value.
if (index >= sizeof(unsigned long int) * 8) checks if the input index is within the size of an unsigned long int in bits. If index is equal to or greater than sizeof(unsigned long int) * 8, the function returns -1 to indicate an error.
*n &= ~(1UL << index) sets the index-th bit of *n to 0. The expression 1UL << index shifts the value 1 to the index-th position, effectively creating a mask with only the index-th bit set. The ~ operator performs a bitwise NOT operation on the mask, flipping all the bits. The &= operator performs a bitwise AND operation between *n and the inverted mask, effectively clearing the index-th bit.
return 1 returns 1 to indicate success.




5. 101

Here's an explanation of the code:

unsigned long int diff; declares an unsigned long integer variable diff to store the result of the XOR operation between n and m.

int counter; declares an integer variable counter to keep track of the number of bits that need to be flipped.

diff = n ^ m; calculates the result of the XOR operation between n and m and stores it in the diff variable.

counter = 0; initializes the counter variable to 0.

while (diff) is a while loop that continues as long as diff is not equal to 0.

counter++; increments the counter variable by 1.

diff &= (diff - 1); is a bitwise AND operation between diff and diff - 1. This operation sets the least significant bit of diff to 0. This is a useful trick to count the number of set bits in a number, as it allows us to keep track of the number of set bits in diff until diff becomes 0.

return (counter); returns the number of bits that need to be flipped, which is stored in the counter variable.




6. Endianness

The function flip_bits takes in two unsigned long integers n and m and returns the number of bits that need to be flipped to convert n into m.

Here's an explanation of the code:

unsigned long int diff; declares an unsigned long integer variable diff to store the result of the XOR operation between n and m.

int counter; declares an integer variable counter to keep track of the number of bits that need to be flipped.

diff = n ^ m; calculates the result of the XOR operation between n and m and stores it in the diff variable.

counter = 0; initializes the counter variable to 0.

while (diff) is a while loop that continues as long as diff is not equal to 0.

counter++; increments the counter variable by 1.

diff &= (diff - 1); is a bitwise AND operation between diff and diff - 1. This operation sets the least significant bit of diff to 0. This is a useful trick to count the number of set bits in a number, as it allows us to keep track of the number of set bits in diff until diff becomes 0.

return (counter); returns the number of bits that need to be flipped, which is stored in the counter variable.




7. Crackme3


