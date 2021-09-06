#include<iostream>
using namespace std;

struct TrieNode{

  bool end=false;
  TrieNode* next[26]={ NULL };
};
class Trie{

TrieNode* root =  NULL;
public:
Trie();
void insertWord(string word);
bool searchWord(string word);
bool deleteWord(string word);
void updateWord(string oldWord,string newWord);
};
