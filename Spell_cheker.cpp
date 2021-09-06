#include<iostream>
#include"Trie.h"
#include<vector>
#define UNDERLINE_ON "\033[4m"
#define UNDERLINE_OFF "\033[0m"
using namespace std;
int main(){
Trie oTree;
vector<string> word{"car","dog"," came","cat","bat","bats","ball"};
for(string i: word)
oTree.insertWord(i);
string w="";
while(char c = getchar()){
  if(c=='\n'){
    oTree.searchWord(w)? cout<<w:cout<< UNDERLINE_ON<<w<<UNDERLINE_OFF;
    w="";
    break;
  }else if( c==' '){
    oTree.searchWord(w)? cout<<w:cout<< UNDERLINE_ON<<w<<UNDERLINE_OFF;
    w="";
    cout<<c;

  }else{
    w=w+c;
  }
}



cout<< endl;
 return 0;


 }
