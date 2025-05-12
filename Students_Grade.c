#include <stdio.h>

int main() {

   int m1,m2,m3,m4,m5;
   float avg;
   
   printf("Enter the marks :");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   
   int total = m1+m2+m3+m4+m5;
   
   avg = total/5.0;
   
   printf("\n Your Total Marks :%d",total);
   printf("\n Your Average Total :%0.0f",avg);
   
   
   if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
   {
       if(avg>=90 && avg<100)
       {
           
           printf("\nCongrats : Grade 'A'");
           
       }
       else if(avg>=80 && avg<90)
       {
           
           printf("\nCongrats : Grade 'B'");
           
           
       }
       else if(avg>=70 && avg<79)
       {
           
           
           
           printf("\nCongrats : Grade 'C'");
           
       }
       else if(avg>=60 && avg <=69)
       {
           
           printf("\n Congrats but you do better :  Grade 'D'");
           
           
           
       }
       
       
       
       
   }
   else
   {
       
       
       printf("\nStudy Hard and try to score more marks");
       
       printf("\n You have no Grades ");
       
       
       
       
       
   }
   








    return 0;
    
    
}
