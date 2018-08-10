#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int countp = 0, countn1 = 0, countz = 0;
    float p = 0, n1 = 0, z = 0, x = 0;

    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       x = arr[arr_i];

       if(x > 0)
            countp++;
       if(x < 0)
            countn1++;
       if(x == 0)
            countz++;

    }

    p = float(countp)/n;
    n1 = float(countn1)/n;
    z = float(countz)/n;

    printf("%f\n", p);
     printf("%f\n", n1);
      printf("%f\n", z);
    return 0;
}

