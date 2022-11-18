#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Введiть цiле числа  b: ");
    scanf("%g", &b );
    printf("Введiть цiле числа  a: ");
    scanf("%g", &a );
    if(2 * b > a)printf("корiнь з від'ємного число не може бути від'ємним\n");
        else
        {
     c = ((2 * a - b) * (2 * b - a)) / (sqrt(a - 2*b) +2*b);
     printf("c = %f\n" ,c );
}
    
}