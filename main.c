#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int addition();
int subtraction();
int multplication();
int division();
int power();
int factorial();
int primenumber();
int oddandeven();
int fibonacci();

int main()
{
    fflush(stdin);
    int choice;

    do
    {

    printf("Please\nEnter your choice:\n1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n5 = Power\n6 = Factorial\n7 = Prime Number\n8 = ODD & EVEN Identification\n9 = Fibonacci\n10 = Exit\n\n");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                system("CLS");
                printf("You have chosen Addition.\n\n");
                addition();
                break;
            case 2:
                system("CLS");
                printf("You have chosen Subtraction.\n\n");
                subtraction();
                break;
            case 3:
                system("CLS");
                printf("You have chosen Multiplication.\n\n");
                multplication();
                break;
            case 4:
                system("CLS");
                printf("You have chosen Division.\n\n");
                division();
                break;
            case 5:
                system("CLS");
                printf("You have chosen Power function.\n\n");
                power();
                break;
            case 6:
                system("CLS");
                printf("You have chosen factorial.\n\n");
                factorial();
                break;
            case 7:
                system("CLS");
                printf("You have chosen the method of identifying the number as prime number.\n\n");
                primenumber();
                break;
            case 8:
                system("CLS");
                printf("You have chosen the method of identifying the number as ODD or EVEN.\n\n");
                oddandeven();
                break;
            case 9:
                system("CLS");
                printf("You have chosen the method to print out the series of Fibonacci number.\n\n");
                fibonacci();
                break;
            case 10:
                system("CLS");
                printf("Thank You For Using The Calculator.\n\n");
                return;
            default:
                printf("Please enter the correct choices's from 1 to 5.\n\n");
        }
    }while(1);
    return 0;
}

int fibonacci()
{
    int firstvalue, secondvalue, num, sum, counter = 0; char menu;

    do
    {
    printf("Enter the term's:  ");
    scanf("%d",&num);

    printf("Enter the first value:  ");
    scanf("%d",&firstvalue);

    printf("Enter the second value:  ");
    scanf("%d",&secondvalue);

    printf("The Fibonacci Series is: %d  %d",firstvalue,secondvalue);

    while(counter < num)
    {
        sum = firstvalue + secondvalue;
        printf("%d  ", sum);
        firstvalue = secondvalue;
        secondvalue = sum;
        counter++;
    }

    printf("\nDo you wont to continue with this Series y/n?\n");
    scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");
    return 0;

}

int oddandeven()
{
    int num; char menu;
    do
    {
        printf("Enter the number that you want to identify as an ODD or EVEN.\n");
        scanf("%d",&num);

        if(num % 2 == 0)
            printf("The number is Even!!\n");
        else
            printf("The number is Odd!!\n");

        printf("Do you want to continue with this process again y/n?\n");
        scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;
}

int primenumber()
{
    int num; char menu;
    do
    {
    printf("Enter the number for which want to identify the prime number: \n");
    scanf("%d",&num);

    if((num == 2)&&(num == 3 ))
    {
        printf("Its a prime number.\n");
    }
    else if((num % 2 == 0)&&(num % 3 == 0))
    {
        printf("Its not a prime number!!\n");
    }
    else
    {
        printf("Its a prime number!!\n");
    }

    printf("Do you wont to repeat this process again y/n.\n");
    scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");
    return 0;
}

int factorial()
{
    int num, num1; unsigned long int factorial, firstnumber; char menu;
    do
    {

    printf("Enter the value for factorial value: ");
    scanf("%d", &firstnumber);

    for(num = 1;num <= firstnumber ; ++num)
    {
        factorial = 1;
        for(num1 = num;num1 > 0; --num1)
        {
            factorial = factorial * num1;
        }
        printf("For the number %d the factorial is %d.\n",num,factorial);
    }

        printf("Do u want to continue with factorial y/n? \n");
        scanf(" %c",&menu);

     }while(menu == 'y');

    system("CLS");


    return 0;
}

int power()
{
    float firstnumber, secondnumber; char menu;

    do
    {
        printf("Enter the first number: \n");
        scanf("%f",&firstnumber);

        printf("Enter the second number that you wont to use as the power: \n");
        scanf("%f",&secondnumber);

        printf("For the number %f and %f. The answer is %f. \n", firstnumber, secondnumber, pow(firstnumber, secondnumber));

        printf("Do u want to continue with power y/n? \n");
        scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;

}

int addition()
{
    int num1, sum = 0; char menu;
    do{

   printf("Enter the number  ");
   scanf("%d",&num1);

   do
   {
       sum = sum + num1;

       printf("Enter The Number that you wont to add and enter -1 to quit:  ");
       scanf("%d",&num1);

   }while(num1 != -1);
   printf("The sum is %d\n\n",sum);

   printf("Do u want to continue with addition y/n? \n");
   scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;
}

int subtraction()
{
   int num1, diff = 0; char menu;

    do
    {
   printf("Enter the first number: ");
   scanf("%d",&num1);

   do
   {
       diff = diff - num1;

       printf("Enter The Number that you wont to subtract or enter -1 to quit:  ");
       scanf("%d",&num1);

   }while(num1 != -1);
   printf("The Subtraction is %d\n\n",diff);

   printf("Do u want to continue with subtraction y/n? \n");
   scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;
}
int multplication()
{
    int num1, product = 1; char menu;

    do
    {
   printf("Enter the first number: ");
   scanf("%d",&num1);

   do
   {
       product = product * num1;

       printf("Enter The Number that you wont to multiply and enter -1 to quit:  ");
       scanf("%d",&num1);

   }while(num1 != -1);
   printf("The product is %d\n\n",product);

    printf("Do u want to continue with multiplication y/n? \n");
   scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;
}
int division()
{
    int num1, rem = 1, div = 1; char menu;

    do
    {

   printf("Enter the first number: ");
   scanf("%d",&num1);

   do
   {
       div = num1 / div;
       rem = num1 % div;


       printf("Enter The Number that you wont to divide and enter -1 to quit:  ");
       scanf("%d",&num1);

   }while(num1 != -1);
   printf("The Division is %d and the remainder is %d.\n\n",div,rem);

    printf("Do u want to continue with division y/n? \n");
   scanf(" %c",&menu);
    }while(menu == 'y');

    system("CLS");

    return 0;
}
