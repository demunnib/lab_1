#include <stdio.h>
#include <stdlib.h>
#include "stats_lib.h"
#include <math.h>
int main()
{
    int i;
      FILE *fp;
      int count = 143;
   fp = fopen("data.txt", "r");
   float nums[count];

     for(i=0; i<143; i++)
     {
         fscanf(fp, "%f", &nums[i]);
     }
     for(i=0; i<143; i++)
     {
         printf("%f\n", nums[i]);
     }
     float max = maximum(nums, count);
     float min = minimum(nums, count);
     float avg = mean(nums, count);
     float mead = median(nums, count);
     float var = variance(nums, count);
     float stddev = standard_deviation(nums, count);

printf("max: %.0f\nmin: %.0f\nmean:%.0f\nmedian:%.0f\nvariance:%.0f\nstandard deviation:%.0f",max ,min, avg, mead, var, stddev);
fclose(fp);
}
