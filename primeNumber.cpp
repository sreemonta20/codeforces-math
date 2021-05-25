#include <iostream>
using namespace std;
// build --> ctrl+shift + B
//run --> ctrl +F5
//run in terminal --> ./watermeloncf4a

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "Enter a number to check Prime or not: \t";
    cin >> n;
    if(n<=1) {
        isPrime = false; 
    }
    
    for( i= 2; i<n; i++){
        if(n%i == 0){
           isPrime = false;
           break;
        }
           
    }
    
    if(isPrime){
        cout << n << " is a prime number\n";
        return 0;
    }
    else{
        cout  << n << " is not a prime number\n";
        return 0;
    }
    
    
}