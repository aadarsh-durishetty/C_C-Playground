#include <stdio.h>
int main()
{
    float hrd,cc,tstr;
    int grade=0,hrd1=0,cc1=0,tstr1=0;
    printf("enter hardness(hrd), carbon content(cc), tensile strength(tstr) \n");
    scanf("%f%f%f",&hrd, &cc, &tstr);

    if (hrd>50)
        hrd1=1;
    if (cc<0.7)
        cc1=1;
    if (tstr>5600)
       tstr1=1;

    if (hrd1==0 && cc1==0 && tstr1==0)
       grade=5;
    if (hrd1==1 || cc1==1 || tstr1==1)
       grade=6;
    if (hrd1==1 && cc1==0 && tstr1==1)
       grade=7;
    if (hrd1==0 && cc1==1 && tstr1==1)
       grade=8;
    if (hrd1==1 && cc1==1 && tstr1==0)
       grade=9;
    if (hrd1==1 && cc1==1 && tstr1==1)
       grade=10;
    
   printf("grade of the steel : %d", grade);   
}
  