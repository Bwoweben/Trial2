#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <minmax.h>
#include <mem.h>

/*void sayHi(char name[10], int age){
    printf("Hello %s, Today you are %d years old!", name, age);}*/

/*int evenNumbers(int num){
    int result = num * num;
    printf("%d", result);
    return result;}*/


/*int squareRoot(int num1){
int result = num1 * num1 * num1;
    return result;}*/

/*int maximo(num1, num2, num3){
    int result;
    if(num1 > num2 && num1 > num3){
        result = num1;
    }else if(num2 > num1 && num2 > num3){
      result = num2;
    }else{result = num3;}

    return result;
}*/

/*int betterCalculator(int num1, char op, int num2){
   int result;
   if(op == '-'){
       result = num1 - num2;
   } else if(op == '+'){
       result = num1 + num2;
   } else{
       result = num1;
   }
    return result;}*/

/*struct Student {
    char Fname[100];
    char Sname[20];
    int age;
    double CGPA;
};*/

int main() {
   /* sayHi("Ben", 22);
   evenNumbers(5);*/

    /*
    int age;
    printf("Hello, Welcome to the Age guesser\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You're %d years old!", age);*/


    /*char emotion[5];
    printf("Please tell me how you feel: ");
    scanf("%s", emotion);
    printf("Well, I think you're %s", emotion);*/

    /*double gpa = 4.78;
     char celebrity[10] = "Tom Hanks";
     printf("%s's CGPA is %f\n", celebrity, gpa);
     printf("%s is mad,\n A cgpa of %f is impossible", celebrity, gpa);*/

    /*int age = 12;
    char poem[100] = "The quick brown fox jumped over the lazy dogs!";
    char grade = 'A';

    printf("The %d year old boy wrote this poem \"%s\"\n I can't!! I gave him an %c", age, poem, grade);*/

    /*double accelerationDueToGravity = 9.8;
     int num1 = 54;
     int num2 = 2;

     printf("%f", accelerationDueToGravity + num1 + num2);*/

    /*printf("%f\n", pow(2,3));
    printf("%f", sqrtf(36));*/

    /*int NUM = 100;
    NUM = 22;
    const char class = 'A';
    char class = 'D';
    printf("%d%c", NUM, class);*/

    /*char name[25];
      int age;
      double gpa;
      char grade;

      printf("Enter your Name: ");
      fgets(name, 25, stdin);
      printf("Your name is %s\n", name);

      printf("Enter your Age: ");
      scanf("%d", &age);
      printf("Your age is %s\n", age);

      printf("Enter your GPA: ");
      scanf("%lf", &gpa);
      printf("Your CGPA is %f\n", gpa);*/

    /* double num1;
     double num2;

     printf("Enter first number: ");
     scanf("%lf", &num1);

     printf("Enter second number: ");
     scanf("%lf", &num2);

     printf("Answer is: %f", num1 + num2);*/

/* char color[6];
 char pluralNouns[10];
 char FnameCelebrity[20];
 char SnameCelebrity[20];

 printf("Enter a color: ");
 scanf("%s", color);

 printf("Input any plural noun: ");
 scanf("%s", pluralNouns);

 printf("Lastly, we need a celebrity  sir name: ");
    scanf("%s", FnameCelebrity);

    printf("Lastly, we need the celebrity  christian name: ");
    scanf("%s", SnameCelebrity);

 printf("Roses are %s\n%s are blue\nI think you hate on %s %s", color, pluralNouns, FnameCelebrity, SnameCelebrity);*/

/*int evenNumbers[] = {0, 2, 4, 6, 8, 10, 12};
printf("%d\n", evenNumbers[3]);
evenNumbers[3] = 13;
printf("%d", evenNumbers[3]);*/

    /*sayHi("Benjamin", 22);

    printf("Answer is; %d", squareRoot(3));*/

    /*int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Your square is %d", evenNumbers(num));*/

    /*int num1;
    int num2;
    int num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter last number to compare: ");
    scanf("%d", &num3);

    printf("The maximum number of the 3 is actually %d", maximo(num1, num2, num3));*/
    /*int age = 33;
    printf("Hello World!!, you are %d years old", age);*/

    /*int num1, num2;
    char op;


    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator: \n");
    scanf("%c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int res = betterCalculator(num1, op, num2);
    printf("%d", res);*/

    /*int num1, num2;
    char op;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num2);

    printf("Enter another: ");
    scanf("%d", &num2);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    if (op == 'a') {
        printf("%d", num1 + num2);
    } else if (op == 'b') {
        printf("%d", num1 - num2);
    } else {
        printf("Hshahaha");
    }*/

   /* char grade;

    printf("Please enter your grade: ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("This is excellent");
            break;

        case 'B':
            printf("This is very good too!");
            break;

        case 'C':
            printf("This is good, but fair");
            break;

        default:
            printf("I dont even know what to tell you!");
    }*/

   /* struct Student student1;
    strcpy(student1.Fname, "Bwowe");
    strcpy(student1.Sname, "Benjamin");
    student1.age = 22;
    student1.CGPA = 3.77;

    printf("%s\n", student1.Fname);
    printf("%s", student1.Sname);}*/


   /* int index = 1;
    int age = 32;
    while (index <= 5){
        printf("%d\n", age);

        index = index + 1;
    }*/

    int secretNumber = 3;
    int guess;
    int guessCount = 0;

    printf("Please enter your guess: ");
    scanf("%d", &guess)

    while (guessCount <= 5 && guess != secretNumber){
        printf("Please enter your guess: ");
        scanf("%d", &guess);

        if(guess == secretNumber){
            printf("Correcee! You win!\n");
        }else{printf("Very stupid!\n");}

        guessCount++;

    }

    /*int i;
    int j;
    for (i = 1; i <= 5; i++){
        for (j = int i; j <= 5 ; ++j) {
            printf("This is good!");
        }

    } */

    /*int LuckyNumbers[] = {2,4,6,8,10,12,14,16,18,20};
    int i;
    for (i = 0; i < 6; i++){
        printf("%d\n", LuckyNumbers[i]);
    }*/

   /* int numbers[3][2] = {{1,2},{3,4},{5,6}};

    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d\n", numbers[i][j]);
        }}*/

  /* int age = 22;
   char grade = 'A';
   double cgpa = 3.88;

   //printf("%d\n", &age);
   //printf("%c", &grade);
   printf("age: %d\ngrade: %c\ncgpa: %x", &age, &grade, &cgpa);*/

 /* int age = 22;
  char name[25];
  //char regno[34];
  printf("input name\n");
  fgets(age, 0, stdin);
  printf("your name is %d", age);*/


    return 0;

}


