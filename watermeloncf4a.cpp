#include<iostream>
using namespace std;
// build --> ctrl+shift + B
//run --> ctrl +F5
//run in terminal --> ./watermeloncf4a

int main(){
    int weight = 0;
    int result = 0;
    cout << "Enter the weight of the Watermelon: \t";
    cin >> weight;


    if (weight <= 2)
    {
        cout << "No \n";
    }
    else if(weight % 2 == 0){
        cout << "Yes \n";
    }
    else if (weight % 2 != 0)
    {
        cout << "No \n";
    }
    
    return result;
}