#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "functions.h"

void ex1(double a, double c, double x)
{
   double L;
   L = (sqrt(exp(x) - pow(cos(x * x * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(abs(a + x * pow(c, 4))));
   printf("%f", L);

}

void ex2(double t)
{
   double S;
   S = 3 * t * t - 6 * t;
   printf("%f", S);
}

void ex3(double a, double b, double c)
{
   double D;
   double x1;
   double x2;
   if (a == 0)
   {
      printf("Error!");
      exit(EXIT_FAILURE);
   }
   D = b * b - 4 * a * c;
   if (D > 0)
   {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      prinf("%f, %f", x1, x2);
   }
   if (D == 0)
   {
      x1 = -b / (2 * a);
      printf("%f", x1);
   }
   else
      printf("No results");

}

void ex4(int c, double t)
{
   switch (c)
   {
   case 48:
      return 15 * (t / 60);
   case 44:
      return 18 * (t / 60);
   case 46:
      return 13 * (t / 60);
   case 45:
      return 11 * (t / 60);
   default:
      break;

   }
}

void ex5()
{
   for (int i = 1000; i < 10000; ++i)
   {
      int q = i;
      int s = 0;
      for (int k = 0; k < 4; ++k)
      {
         s += pow(q % 10, 4);
         q = q / 10;
      }
      if (q == i)
         printf("%d", i);

   }
}

void ex6(int* arr, int n)
{
   int k = 0;
   int num = 0;
   int q = n - 1;
   while (k < q)
   {
      num += arr[k] * pow(2, q);
      k++;
      q--;

   }
   printf("%d", num);
}

void ex7(int I, int J)
{
   srand(time(NULL));
   int* L;
   L = malloc(I * J * sizeof(int));
   for (int i = 0; i < I * J; i++)
   {
      L[i] = -((rand() % 21) - 10) * 3;
   }
   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         printf("%d", L[i * J + j]);
      }
      printf("\n");
   }  
}

