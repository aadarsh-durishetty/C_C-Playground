#include <stdio.h>
int main()
{
    float salary,hra,da,total;
    printf("enter the salary \n");
    scanf("%f",&salary);
    if (salary<1500){ 
          hra=salary*10/100;
          da=salary*90/100;
    }  
    else{
          hra=500;
          da=salary*98/100;
    }
    total = salary+hra+da;
    printf("the total income = Rs. %f",total);

}