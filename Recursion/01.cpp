#include<bits/stdc++.h>
using namespace std;

// When a function calls itself untill it reaches a its desired state, it is called recursion.

// Function to calculate Fibonacci sequence using recursion
int Fibonacci(int n){
    if(n == 0) return 0; // Base case
    if(n == 1) return 1; // Base case
    if(n== 2) return 1; // Base case for Fibonacci(2)
    return Fibonacci(n-1) + Fibonacci(n-2); // Recursive case
}

// Function to calculate factorial of a number using recursion
int Factorial(int n){
    if(n <= 1) return 1; // Base case
    return n * Factorial(n-1); // Recursive case
}

// Power of any number using recursion
int Power(int n,int num){
    if(n==0) return 1; // Base case
    if(n==1) return num; // Base case
    return num * Power(n-1, num); // Recursive case
}


int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Fibonacci sequence up to " << n << ":\n";
    for(int i = 0; i < n; i++){
        cout << Fibonacci(i) << " ";
    }
    cout << endl;
    // Calculate factorial of n
    cout << "Factorial of " << n << " is: " << Factorial(n) << endl;

    // Calculate power of 2^n
    cout << "2 raised to the power of " << n << " is: " << Power(n, 2) << endl;
    // Calculate power of 3^n
    cout << "3 raised to the power of " << n << " is: " << Power(n, 3) << endl;
    return 0;
} 