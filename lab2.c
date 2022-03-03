// if 
#include <stdio.h>
int main(){

   int a = 100;

   if(a<20){
      printf("Value less than 20\n");
   }
   else if(a<0){
      printf("Its  a negative value\n");
   }

  else{
     printf("all other things\n");
  }

   return 0;
}



// while 
int a = 0;

   while(a<5){
      printf("5 times\n");
      printf("%d\n", a);
      a++; // a = a+1
      printf("after increment : %d\n", a);
   }

// for 
for (int a = 5; a >; a++)
   {
      printf("%d\n", a);
      printf("5 times \n");
   }
for (int a = 5; a > 0; a--) // a= a-1
   {
      printf("%d\n", a);
      printf("5 times \n");
     
   }


// function
#include <stdio.h>
int max(int value1, int value2); // function declaration
int main()
{
   int a = 70;
   int b = 80;
   int c = 30;
   int result ;

   result = max(a,b);
   printf("%d", result);

   return 0;
}
int max (int value1 , int value2){ // int return type
   int num1 = value1;
   int num2 = value2;
   int finalResult;

   if(num1 < num2){
      finalResult = num2;
   }
   else{
      finalResult = num1;
   }
   return finalResult;
}


// call by name and call by value
#include <stdio.h>
int call_by_val(int a, int b);
int call_by_ref(int *pos_a, int *pos_b);

int max(int value1, int value2); // function declaration
int main()
{
   int a = 10;
   int b = 20;

   call_by_val(a,b);
   printf("Call By value");
   printf("%d\n", a);
   printf("%d", b);

   call_by_ref(&a, &b); // addresses of this variables. &x means addrsss of x.  &a means refrencing
   printf("Call By Reference");
   printf("%d\n", a);
   printf("%d", b);

   return 0;
}
int call_by_val (int a , int b){
   a = 20;// accessing the content of that variable 
   b = 10;
}
int call_by_ref(int *ptr_a, int *ptr_b){ // we use pointers. because pointers can hold addreses. 
   *ptr_a = 20; // ptr_a holds the adress of variable a. using we access the value of that particular address. derefrencing
   *ptr_b = 10; // ptr_b holds the adress of variable b
}
