#include<iostream>
using namespace std;


int main(){
 
 int n;

 cin>>n;

 long double factorial = 1.0;

 for(int i =1; i<= n;++i){
     factorial *=i;
 }

 cout<< factorial;

    return 0;
}
