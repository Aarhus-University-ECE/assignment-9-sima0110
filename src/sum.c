#include "sum.h"

int sum(int a[], int n)
{ 
 if (n == 0){ //the base case// 
    return 0; 
 } 
 else if (n > 0){
    return a[n - 1] + sum(a, n - 1 ); //the recursive step//
 }
    return 0;
}