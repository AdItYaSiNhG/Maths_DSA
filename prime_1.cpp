#include <iostream>
using namespace std;

string isPrime(int n){
    for(int i =2; i*i <= n; i++){
        if(n % i == 0){
            return "non_prime"; // Not prime
        }
    }
    return "prime"; // Prime
}

int main(){
    int n = 43;
    cout<<isPrime(n)<<endl; // Call the function to check if n is prime
    return 0;
}