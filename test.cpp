#include <iostream>
#include <algorithm>
using namespace std;

// // string reverse(string s){
// //     int st=0;
// //     int end=s.length()-1;
    
// //     while(st<end){
// //         swap(s[st],s[end]);
// //         st++;
// //         end--;
// //     }
// //     return s;
 
// // }

// // int main(){
// //     string s="lipsa";
// //     cout<<reverse(s);
    
// // return 0;
// // }


// //2.Palindrom

// // bool isAlphaNum( char ch){
// //   if((ch>=0 && ch<=9) || (ch>='a'&& ch<='z')){
// //       return true;
// //   }
// //   else{
// //      return false;
// //   }
// // };


// // bool ispalindrom(string s){
// // int st=0;
// // int end=s.length()-1;
// // //st==end for the complete string then return true.
// // //skip the special char.
 
// // while(st<end){
// //   if(!isAlphaNum(s[st])) {
// //       st++;
// //       continue;
// //   }
// //    else if(!isAlphaNum(s[end])){
// //       end--;
// //       continue;
// //   }
// //   else{
// //       if(to_string(s[st])!=to_string(s[end])){
// //             return false;
// //       }  
// //   }
// //   st++;
// //   end--;
// // }

// // return true;
 

// // }


// // int main(){
// //  string s="mom";
 
 
// //  cout<< ispalindrom(s);
// //  return 0;
// // }

// // 3.remove substring

// // string Remove(string s, string part){
// //  int st=0;
// //  while(st<s.length() && s.find(part)<s.length()){
// //   s.erase(s.find(part), part.length()); 
// //  }
// // return s;
// // }

// // int main(){
// //  string s= "kdfebrfoebfoebf";
// //  string sub="eb";
 
// //  cout << Remove(s,sub);
// //  return 0;
// // }


// // 4.permutaion in string

// bool isSame(int frq[], int frq1[]){
//  for(int i=0; i<26; i++){
//   if(frq[i]!=frq1[i]) return false;
//  }
//  return true;
// }

// bool permutation(string s, string sub){
//  int freq[26]={0};
//  for(int i=0; i<sub.length();i++){
//    freq[s[i]-'a']++;
// //a=65-65,b=66-65,c=67-65;
//  }
 
//  int windSize=sub.length();
 
//  for(int i=0; i<s.length(); i++){
//   int windIdx=0;
//   int Idx=i;
//   int freq1[26]={0};
//   while(windIdx<windSize && Idx<s.length()){
//     freq[s[Idx]-'a']++;
//     windIdx++;
//   }
//   if(isSame(freq, freq1)) return true;
//  }
//  return false;
 
// } 


// int main(){

//  string s="strwfjfljljljfljr";
//  string sub="ab";
 
//  cout<<permutation(s,sub);
// return 0;
// }


//5.reverse words

string ReverseWords(string s){
 string ans="";
 reverse(s.begin(), s.end());
 // Reverse the entire string first


 for(int st=0; st<s.length(); st++){
     string word="";
     while(s[st] != ' ' && st<s.length()){
   word+=s[st];
    st++;
 }
  reverse(word.begin(), word.end()); 
 if(word.length()>0){
   ans+=" "+word;
 }
}
 return ans.substr(1); // Remove leading space

}

int main(){
 string s= "i want a blue pen";
 cout<<ReverseWords(s);
return 0;
}