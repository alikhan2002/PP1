
/*
      Finding the nth Prime Number
              Yasin OSMAN
*/

//Including Libraries
#include <iostream>
using namespace std;

//Defining a global counter
int counter = 0;
/*
         Defining Functions
*/

//isPrime Function (returns true if the given number is prime)
bool isPrime(int n) {
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main() {
    int userInput;
    cout<<"Please indicate which prime number do you want to see: ";
    cin>>userInput;

    for(int i=0;i<=userInput;i++){
        if(isPrime(counter)){
            if(counter==userInput){
                cout<<counter<<"th prime number is : "<<i<<endl;
            }
            counter++;
        }
        counter++;
    }

    return 0;
}