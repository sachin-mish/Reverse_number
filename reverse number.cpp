#include <iostream>

#include<math.h>

using namespace std;

int main() {
  
 int n;
 
  cin>>n;
  
 int rev_num=0;
 
  while(n>0){
    
  int lastnumber=n%10;
   
   rev_num= rev_num*10+lastnumber;
 
     n=n/10;
  
 }
 
 cout<< rev_num;
 
return 0;

}