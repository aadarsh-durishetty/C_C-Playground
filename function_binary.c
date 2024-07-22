#include<stdio.h>  
  
int binary_rec(int);  
/*int binary(int);*/  
  
int main()  
{  
    int num;  
  
    printf("Enter a Decimal number\n");  
    scanf("%d", &num);  
  
    /*printf("Binary Equivalent (Iterative) of %d is %d\n", num, binary(num));*/  
    printf("Binary Equivalent (Recursive) of %d is %d\n", num, binary_rec(num));  
  
    return 0;  
}  
  
int binary_rec(int num)  
{  
    if(num == 0)  
        return 0;  
    else  
        return((num % 2) + 10 * binary_rec(num/2));  
}  
  
/*int binary(int num)  
{  
    int rem, bin = 0, place = 1;  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    return(bin);  
}*/ 