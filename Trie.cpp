#include"Trie.h"
using namespace std;

Trie ::Trie(){
root=  new TrieNode();

}

void Trie ::  insertWord(string word){

TrieNode* currNode= root;

for(char c : word){

  if(currNode->next[c-'a']==NULL)
  currNode->next[c-'a']= new TrieNode();
    currNode=currNode->next[c-'a'];

}
currNode->end= true;
}

bool Trie :: searchWord(string word){

  TrieNode* currNode= root;

  for(char c : word){

    if(currNode->next[c-'a']==NULL)
    return false;
    else
      currNode=currNode->next[c-'a'];

  }
  return currNode->end;


}

bool Trie :: deleteWord(string word){


  TrieNode* currNode= root;

  for(char c : word){

    if(currNode->next[c-'a']==NULL)
    return false;
    else
      currNode=currNode->next[c-'a'];

  }
  currNode->end=false;
  return true;

}

void Trie :: updateWord(string oldWord,string newWord){

this->deleteWord(oldWord);
this->insertWord(newWord);

}
