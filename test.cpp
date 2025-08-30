#include <iostream>
using namespace std;

bool PrimeNum(int num){
int cnt=0;
 for(int i=1; i*i<=num ; i++){
  if(num%i==0) cnt++;
  if (i!=num/i) cnt++;
 }
if(cnt==2)return true;
}



int main(){
 int num=9;
 int num1=11;
 if (PrimeNum(num)) {
  cout<< "Prime!!";
 }
 else {
  cout<<"Not Prime!!";
 };
 

 return 0;
}