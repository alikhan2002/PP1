#include <iostream>
using namespace std;
int main (){
 int fahr;
 for(fahr=300;fahr>=0; fahr=fahr-20 ){
printf ("%3.0d %6.0f\n", fahr, (5.0/9.0)*(fahr-32));
 }   

    return 0;
}