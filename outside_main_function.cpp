#include<iostream>
using namespace std;


int max(int num1,int num2){
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}


int main(){
    int a,b;
    cout<<"Enter 1 value:";
    cin>>a;
    cout<<"Enter 2 value:";
    cin>>b;
    int result = max(a,b);
    cout<<"Maximum value is:"<<result;
    return 0;
}
