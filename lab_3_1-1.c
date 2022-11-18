#include <stdio.h>
#include <math.h>
int main(){

    float a;
    float b ,c;

    printf("Введiть цiле числа  b: ");
    scanf("%f", &b );
    printf("Введiть цiле числа  с: ");
    scanf("%f", &c );
    
     if (c == 5) {a = sqrt(b) + 2* sqrt(c);
     }
     else if (c == 0) {a = b / (c-8);
     }
     else if( c  == -5) {a = b * ( 12 * pow(c ,4)); 
     }
        else {printf("Нiчого не пiдiйшло\n");
        }
    if(a != 0)
    printf("a = %.2f \n" ,a);
   
    return 0 ;
}

