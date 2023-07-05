//Write a program to find perimeter of a rectangle when sides are given.//
#include <stdio.h>
int main () {
    int n1, n2;
    
    printf("Enter FIRST SIDE of the RECTANGLE:\n");
    scanf("%d", &n1);
    
    printf("Enter SECOND SIDE of the RECTANGLE:\n");
    scanf("%d", &n2);
    
    printf ("The AREA of RECTANGLE with SIDE %d and %d is :%d", n1, n2, 2*(n1+n2));
    
    return 0;
}