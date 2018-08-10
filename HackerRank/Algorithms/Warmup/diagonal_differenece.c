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
    int a[n][n];
    int sum1 = 0;
    int sum2 = 0;
    int sum, a_i = 0, a_j = 0;

    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }

     for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){
           if(a_i == a_j){
                sum1 = sum1 + a[a_i][a_j];
           }

           if((a_i + a_j) == (n - 1)){
                sum2 = sum2 + a[a_i][a_j];
                printf("%d %d, ", a_i, a_j);
           }
       }
    }

    printf("Sum1: %d\n", sum1);
    printf("Sum2: %d\n", sum2);

    sum = abs(sum1 - sum2);
    printf("%d\n", sum);
    return 0;
}
