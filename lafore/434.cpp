#include <iostream>
using namespace std;
int main(){
   void copystr(char*, const char*);
   char* str1="Pospeshis ludei nasmeshish!";
   char str2[80];
   copystr(str2,str1);
   cout<<str2<<endl;
   return 0;
}
  void copystr(char* dest, char *src){
        while(*src){
            *dest++=*src++;
            *dest='\0';
        }


  }