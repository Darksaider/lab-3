#include <stdio.h>
#include <math.h>
int main(){
    
    int x ;

    printf("Введiть цiле число x : ");
    scanf("%d",&x);

    if(x == 0)printf("Число 0\n");

    else if(x > 0 &&(x % 2) == 1)printf("Не парне  додатне число\n");

    else if(x >0 && !(x % 2) == 1)printf("Парне  додатне число\n");

    else if(x == 0)printf("Рiвно 0 ");

    else if( x < 0 && (x % 2) == -1)printf("Від'ємне не парне число\n");

    else if( x < 0 && !(x % -2) == 1)printf("Від'ємне парне число\n");

    else printf("Нічого не підійшло");

    return 0;
}


