/*
===============================================================
Project Title :  Number Analyzer
Author        : Pratham
Version       : 1.0
Date Created  : November 2025
Description   : A menu-driven C program that performs:
                - Odd/Even counting and percentages
                - Range-based sum of numbers
                - Factorial calculation
                Includes timestamps and clean console UI.
===============================================================
*/

#include<stdio.h>
#include<time.h>
void countOddEven( int limit, int slimit);
void countOdd(int limit, int slimit);
void countEven(int limit, int slimit);
void sumOfN(int limit, int slimit);
int factorial();
// adding avg and mean , percentage calculator , area of rec aggle 
// this is my mini project containing counting odd or even and both 
int main(){
 int limit, choice,slimit;

 while (1) // infinateloop for menu based program
 {
   system("cls"); // clears privous 
   system("color 0A"); // Green text on black background
 
   time_t t;
   time(&t); 
  printf("\n==== Odd & Even Number Analyzer ====\n");
   printf("Current Date & Time: %s", ctime(&t));  
  printf("\n==========================\n");
  printf("         MAIN MENU         \n");
  printf("==========================\n");
  printf("1. Display Odd Numbers\n");
  printf("2. Display Even Numbers\n");
  printf("3. Display Both Counts\n");
  printf("4. Sum Of N numbers\n");
  printf("5. Factorial\n");
  printf("6. Exit\n");
 printf("Enter Your Choice : ");
 scanf("%d", &choice);
 if (choice == 6) {
    printf("\nThank you for using Odd & Even Analyzer. Goodbye!\n");
    system("cls");
    return 0;
}
   if (choice == 5) {
        factorial();
        printf("\nPress Enter to continue...");
        getchar(); getchar();
        continue;
    }


 printf("==========================\n");
 printf("Enter your start limit :" );
 scanf("%d", &slimit);
 printf("\n--------------------------------------\n");
 printf("Enter The End Limit: ");
 scanf("%d",&limit);
 if (slimit > limit) {
    printf("Invalid Range! Start limit cannot be greater than End limit.\n");
    continue;
}

 switch (choice)
 {
 case 1: countOdd(limit , slimit);  
  break;
 case 2: countEven(limit, slimit);
  break;
 case 3: countOddEven(limit, slimit);
  break;
  case 4 : sumOfN(limit, slimit);
  break;
 default: printf("Invaild Choice");
  break;
 }
  printf("\n Returning to main menu...");
  printf("\nPress Enter to continue..."); // for ui purpose
  getchar(); getchar();  
 
}
}
// this counts both odd and even
void countOddEven(int limit, int slimit) {
    int i, countEven = 0, countOdd = 0;
    time_t t;
    time(&t);

    printf("\nSummary for range %d to %d:\n", slimit, limit);

    for (i = slimit; i <= limit; i++) {
        if (i % 2 == 0)
            countEven++;
        else
            countOdd++;
    }

    float total = (limit - slimit + 1);
    printf("\nTotal Numbers Analyzed : %.0f", total);
    printf("\nTotal Odd Numbers : %d", countOdd);
    printf("\nTotal Even Numbers: %d", countEven);
    printf("\nOdd Percentage : %.2f%%", ((float)countOdd / total) * 100);
    printf("\nEven Percentage: %.2f%%", ((float)countEven / total) * 100);

    printf("\n[Analyzed on: %s]\n", ctime(&t));
    printf("--------------------------------------\n");
}


// this count the odd numbers 
void countOdd(int limit, int slimit){
   int i , countOdd=0;
   time_t t;
   time(&t);
   printf("\nOdd Numbers Up To %d:\n", limit);
   for ( i = slimit; i <= limit; i++)
   {
    if (i%2!=0)
    {
      printf("%d ", i);
      countOdd++;
    }
  }
     printf("\nTotal Odd Numbers: %d\n", countOdd);
     printf("[Analyzed on: %s]\n", ctime(&t));
     printf("\n--------------------------------------\n");

}

// this counts even numbers 
void countEven(int limit , int slimit){
  int i , countEven =0 ;
  time_t t;
  time(&t);


  printf("\nEven Numbers Up To %d:\n", limit);
  for ( i = slimit; i <= limit; i++)
  {
    if (i%2==0)
    {
      printf("%d ", i);
     countEven ++;
    }
}
printf("\nTotal Even Numbers: %d\n", countEven);
printf("[Analyzed on: %s]\n", ctime(&t));
printf("\n--------------------------------------\n");

}
// sum of n numbers
void sumOfN(int limit, int slimit){
int sum=0,i;
time_t t;
  time(&t);
for ( i = slimit; i <=limit; i++)
{
  sum +=i;
}
printf("\nThe Sum of Numbers from %d to %d: %d\n", slimit, limit, sum);
printf("[Analyzed on: %s]\n", ctime(&t));
printf("\n--------------------------------------\n");
}
 int factorial() {
    long long int num, fact = 1;
    int i;
    time_t t;
    time(&t);

    printf("Enter The Number : ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Factorial not defined for negative numbers!\n");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("The Factorial of %lld is %lld\n", num, fact);
    printf("[Analyzed on: %s]\n", ctime(&t));
    printf("--------------------------------------\n");

    return 0;
}
