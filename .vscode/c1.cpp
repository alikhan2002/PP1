#include <iostream>
using namespace std;
int main (){
float fahr, celsius;
int lower, upper, step;
lower=-50;
upper=500;
step=50;
celsius=lower;
while (celsius<=upper){
fahr=(9.0/5.0)*celsius+32.0;
printf ("%3.0f %6.0f\n", celsius,fahr); 
celsius=celsius+step;
}  
    return 0;
}