/* Enter your solutions in this file */
  
#include<stdio.h>
#include<cs50.h>

float average_of_five_numbers(int a,int b,int c,int d,int e)
{  
  
  float avg;
          
            avg= (a+b+c+d+e)/5.0;
            return avg;
  
  
  }
  
  int main (void)
     {
       int u,v,w,x,y;
       float average;
       u=get_int("ENTER FIRST NUMBER:");
       v=get_int("ENTER SECOND NUMBER:");
       w=get_int("ENTER THIRD NUMBER:");
       x=get_int("ENTER FOURTH NUMBER:");
       y=get_int("ENTER FIFTH NUMBER:");
       
       average=average_of_five_numbers(u,v,w,x,y);
       printf("AVERAGE OF 5 NUMBERS=%.2f \n",average);
       }
     
