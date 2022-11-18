#include <stdio.h>
int main () {
    int grade;
    printf("Введiть число в дiапазонi вiд 10 до 20 : ");
    scanf("%d",&grade);
   switch(grade){
      case 10:
         printf("десять\n");
         break;
      case 11:
         printf("одинадцять\n");
         break;
      case 12:
         printf("дванадцять!\n" );
         break;
      case 13:
         printf("тринадцять!\n" );
         break;
      case 14:
         printf("чотирнадцять!\n" );
         break;
      case 15:
         printf("п`ятнадцять\n" );
         break;
      case 16:
         printf("шiстнадцять\n" );
         break;
      case 17:
         printf("сiмнадцять\n" );
         break;
      case 18:
         printf("вiсiмнадцять\n" );
         break;
      case 19:
         printf("девятнадцять\n" );
         break;
      case 20:
         printf("двадцять\n" );
         break;
        default:printf("Не iснуе такого числа\n");
   }
   return 0;
}

