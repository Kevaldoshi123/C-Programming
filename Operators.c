#include <stdio.h>
#include <conio.h>

int main(){

// Arithmetic Operators
int a = 10, b = 5;
printf("a + b = %d\n", a + b); // Addition
printf("a - b = %d\n", a - b); // Subtraction   
printf("a * b = %d\n", a * b); // Multiplication
printf("a / b = %d\n", a / b); // Division
printf("a %% b = %d\n", a % b); // Modulus
printf("++a = %d\n", ++a); // Pre-increment
printf("--b = %d\n", --b); // Pre-decrement
printf("a++ = %d\n", a++); // Post-increment
printf("b-- = %d\n", b--); // Post-decrement
printf("a = %d, b = %d\n", a, b); // Display updated values

// Relational Operators
int x = 10, y = 20;
printf("x == y: %d\n", x == y); // Equal to
printf("x != y: %d\n", x != y); // Not equal to
printf("x > y: %d\n", x > y); // Greater than
printf("x < y: %d\n", x < y); // Less than
printf("x >= y: %d\n", x >= y); // Greater than or equal to
printf("x <= y: %d\n", x <= y); // Less than or equal to

// Logical Operators
int p = 1, q = 0;
printf("p && q: %d\n", p && q); // Logical AND
printf("p || q: %d\n", p || q); // Logical OR
printf("!p: %d\n", !p); // Logical NOT

// Bitwise Operators
int m = 5, n = 3; // m = 0101, n = 0011 in binary
printf("m & n: %d\n", m & n); // Bitwise AND
printf("m | n: %d\n", m | n); // Bitwise OR
printf("m ^ n: %d\n", m ^ n); // Bitwise XOR
printf("m << 1: %d\n", m << 1); // Left shift
printf("n >> 1: %d\n", n >> 1); // Right shift

// Assignment Operators
int c = 10;
c += 5; // c = c + 5
printf("c += 5: %d\n", c);
c -= 3; // c = c - 3
printf("c -= 3: %d\n", c);
c *= 2; // c = c * 2
printf("c *= 2: %d\n", c);
c /= 4; // c = c / 4
printf("c /= 4: %d\n", c);
c %= 3; // c = c % 3
printf("c %%= 3: %d\n", c);

// Miscellaneous Operators
int arr[5] = {1, 2, 3, 4, 5};
printf("Size of arr: %d\n", sizeof(arr)); // Sizeof operator
printf("Address of arr: %p\n", &arr); // Address operator
printf("Value at arr[0]: %d\n", *arr); // Pointer dereference operator
int z = (x > y) ? x : y; // Ternary operator
printf("Larger value between x and y: %d\n", z);


return  0;
}