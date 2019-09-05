#include <stdio.h>
#include <stdlib.h>
#include "stats_lib.h"
#include <math.h>

float maximum(float nums[], int n)
{
    float max=0;
int i;
for (i = 0; i<n; i++)
{
    if (nums[i+1]> nums[i])
    {
        nums[i+1] = max;
    }
    else if(nums[i+1]< nums[i])
        {
        nums[i] = max;
    }
}
return max;
}

float minimum(float nums[], int n)
{
    float min=0;
int i;
for (i = 0; i<n; i++)
{
    if (nums[i+1]< nums[i])
    {
        nums[i+1] = min;
    }
}
return min;
}

float mean(float nums[], int n)
{
    int i;
    float sum = 0 ;
    float avg;
    for(i=0; i<n; i++)
    {
        sum = sum+nums[i];
    }
    avg = sum/n;
    return avg;
}

float median(float nums[], int n)
{
    int temp;
    int i, j;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(nums[j] < nums[i])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

float variance(float nums[], int n)
{
   int i;
    float sum = 0 ;
    float avg, sumsq = 0, var;
    for(i=0; i<n; i++)
    {
        sum = sum+nums[i];
    }
    avg = sum/n;
    return avg;
    for(i=0; i<n; i++)
    {
        sumsq = ((nums[i]-avg)*(nums[i] - avg)) + sumsq;
    }
    var = sumsq/n;
    return var;

}
float standard_deviation(float nums[ ], int n)
{
  int i;
    float sum = 0 ;
    float avg, sumsq = 0, var, stddev;
    for(i=0; i<n; i++)
    {
        sum = sum+nums[i];
    }
    avg = sum/n;
    return avg;
    for(i=0; i<n; i++)
    {
        sumsq = ((nums[i]-avg)*(nums[i] - avg)) + sumsq;
    }
    var = sumsq/n;
    stddev = sqrt(var);
    return stddev;
}
