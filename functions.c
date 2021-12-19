#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void ex_1(char* a)
{
   
   int i, j = 0, k = 0, n = 0;
   
   int l = strlen(a);

   for (i = 1; i < l; i++)
      if (a[i] == ' ')
      {
         if (n == 0) n = i;
         k = i + 1;
      };
   int q = l - k;

   for (i = k; i < l; ++i)
      printf("%c", a[i]);
   
   for (i = n; i < l - q; i++)
      printf("%c", a[i]);       

   for (i = 0; i <= n; i++)
      printf("%c", a[i]);     

   return 0;
}

struct Inf
{
   char Name[32];
   char Surname[32];
   char Patronymic[32];
   char Sex[32];
   char Job[32];
   int Day;
   int Month;
   int Year;
};
void ex_2()
{
   int N = 0;
   printf("Number\n");
   scanf_s("%d", &N);
   struct Inf* arr = (struct Inf*)malloc(N * sizeof(struct Inf));
   for (int i = 0; i < N; ++i)
   {
      printf("Enter the Name: ");
      fscanf_s(stdin, "%s", arr[i].Name, 32);

      printf("Enter the Surname: ");
      fscanf_s(stdin, "%s", arr[i].Surname, 32);

      printf("Enter the Patronymic: ");
      fscanf_s(stdin, "%s", arr[i].Patronymic, 32);

      printf("Enter the Sex: ");
      fscanf_s(stdin, "%s", arr[i].Sex, 32);

      printf("Enter the Job: ");
      fscanf_s(stdin, "%s", arr[i].Job, 32);

      printf("Enter the Day: ");
      scanf_s("%d", &arr[i].Day);

      printf("Enter the Month: ");
      scanf_s("%d", &arr[i].Month);

      printf("Enter the Year: ");
      scanf_s("%d", &arr[i].Year);

   }
   for (int i = 0; i < N; ++i)
   {
      if (strcmp(arr[i].Job, "Engineer") == 0)
      {
         if (strcmp(arr[i].Sex, "M") == 0 && 2021 - arr[i].Year > 65)
            printf("Name = %s, Surname = %s, Patronymic = %s, Sex = %s, Job = %s, Date = %d.%d.%d\n", arr[i].Name, arr[i].Surname, arr[i].Patronymic, arr[i].Sex, arr[i].Job, arr[i].Day, arr[i].Month, arr[i].Year);

         if (strcmp(arr[i].Sex, "F") == 0 && 2021 - arr[i].Year > 60)
            printf("Name = %s, Surname = %s, Patronymic = %s, Sex = %s, Job = %s, Date = %d.%d.%d\n", arr[i].Name, arr[i].Surname, arr[i].Patronymic, arr[i].Sex, arr[i].Job, arr[i].Day, arr[i].Month, arr[i].Year);
      }
   }
}

void ex_3()
{
   FILE* f = NULL;
   FILE* g = NULL;

   fopen_s(&f, "f.txt", "r");
   if (!f)
   {
      printf("File not opened\n");
      return 0;
   }

   fopen_s(&g, "g.txt", "w");
   if (!g)
   {
      printf("File not opened\n");
      return 0;
   }
   int k = 1;
   for (char bd; fscanf_s(f, "%c", &bd) != EOF;)
   {
      if (bd == 'ï' || bd == 'Ï' || k % 4 == 0)
      {
         k++;
         while (bd != ' ')
            fscanf_s(f, "%c", &bd);
      }
      else
      {
         fprintf_s(g, "%c", bd);
      }
   }
   fclose(f);
   fclose(g);
}
