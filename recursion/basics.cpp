#include <iostream>

/*
Things to look for in a recursive solution:
1. Base case <-- when you just know the answer without recurring
2. reduction <-- the recursive call that will eventually get to the base case
Things to consider
1. Try small examples by hand
2. look for self similarity - smaller simpler problems 
*/

int fact(int n){
  if (n == 0){
    return 1;
  } 
  else {
    return n * fact(n-1);
  }
}

/*
 *
 1 1 2 3 5 8 13 21 34

 the next fib number is the sum of the previous two fib numbers

*/

int fib(int n){

  if (n <2){
    return 1;
  } 
  else {
    return fib(n-1) + fib(n-2);
  }
}

int fibonacci(int n)
{
  int arr[n] = {};
  arr[0] = 1; 
  arr[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    arr[i] = arr[i-1] + arr[i-2];
  }
  return arr[n];
}

int main()
{

  // int i;

  // for (i=0; i < 10 ; i++){
  //   std::cout << i << "! = " << fact(i) << "\n";
  // }

  for (int i = 0; i < 10 ; i++){
    std::cout << fibonacci(i) << ", ";
  }

  std::cout << "\n";
  return 0;
}
