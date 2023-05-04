#include <stdio.h>

int main(void)
{
   int sum = 0, score = 0, student = 0, subject = 0;
   float result = 0;
   int scores[1000][1000] = { 0 };
   int subjects[1000] = { 0 };
   float averages[1000] = { 0 };
   scanf("%d", &student);
   for (int i = 0; i < student; i++)
   {
      scanf("%d", &subject);
      for (int j = 0; j < subject; j++)
      {
         scanf("%d", &score);
         scores[i][j] = score;
         sum += score;
      }
      subjects[i] = subject;
      averages[i] = (float)sum / subject;
      sum = 0;
   }
   for (int i = 0; i < student; i++)
   {
      for (int j = 0; j < subjects[i]; j++)
      {
         if (scores[i][j] > averages[i])
            sum++;
      }
      result = (float)sum / subjects[i] * 100;
      printf("%.3f%%\n", result);
      sum = 0;
   }
   return 0;
}
