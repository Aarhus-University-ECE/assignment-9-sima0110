#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{ 
if(n > 0 && a[n - 1] == x){ //base case//
    return true; //returns true if the element if found//
}
else if (n > 0 && a[n - 1] != x){
    return search(a, n-1,x); 
}
else if(n == 0){ //base case//
    return false; //returns false if the element is not found//
}
}