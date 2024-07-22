#include <stdio.h>
int main()
{
    float r,g,bl;
    float w1,w2,w3,w,c,y,b,max;
    printf("enter r,g,bl values \n");
    scanf("%f%f%f",&r,&g,&bl);
    if (r>0 && g>0 && bl>0 && r<255 && g<255 && bl<255){
       w1=r/255;
       w2=g/255;
       w3=bl/255;
       max=w1>w2?(w1>w3?w1:w3):(w2>w3?w2:w3);
       w=max;
       printf("white: %f \n",w);

       c=((w-r)/255)/w;
       printf("cyan: %f \n",c);

       y=((w-bl)/255)/w;
       printf("yellow: %f \n",y);

       b=1-w;
       printf("black: %f \n",b);
    }
    else{
       printf("invalid");
    }
    



       
}
