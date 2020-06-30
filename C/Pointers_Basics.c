#include <stdio.h>

int main(void) {
  int a = 10;
  int *ptr = &a;
  printf("a=%d\nptr=%p\n*ptr=%d\n&a=%p",a,ptr,*ptr,&a);
}

/* This program is written to understand the basics of the pointers in c language */

/* This use a variable called a which has a value 10 on it. A new variable is created named ptr which is of a type called pointer */

/* Pointer is a data type which contains the address or location of the data of an object it refers to */

/* So the address of the variable a is passed to the pointer through the usage of & before the variable and passing to the pointer ptr */

/* Now the pointer ptr contains the address of the variable a it points where the data in the variable a is present */

/* To access the data in the a we have to just use *(astrik) before the variable ptr */
