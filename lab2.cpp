#include <stdio.h>
#include <math.h>

void main(){
    float a, b, h, d, x, k, s, y;
    
    printf("input a = ");
    scanf("%f", &a);
    printf("input b = ");
    scanf("%f", &b);
    printf("input h = ");
    scanf("%f", &h);
    printf("input d = ");
    scanf("%f", &d);
    
    for(x=a;x<=b;x=x+h){
        k=0;
        s=0;
        do
        {
            y=(x/pow((2*k+1),3))*(sin(2*k+1));
            s=s+y;
            k++;
        }
        while(fabs(y)>d);
        printf("x: %.1f, s: %.3f\n", x, s);
    }
}
