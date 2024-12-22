#include <iostream>
#include <string>
using namespace std;


int main()

{
string word;
string newword = "";
// User inputs a word
cout<<"Enter the word: ";
getline(cin, word);
// Removing spaces from the word
int dl=word.size();
for (int i=0; i<dl;i++)
{
if(word[i]!=' ')
{
	newword+=word[i];
}
}
// Checking if the word without spaces is a palindrome
int d = newword.size();
for (int i=0;i<d/2;i++)
{
if(newword[i]!=newword[d-i-1])	
{
cout<<"Word "<<word<< " is not a palindrome"<<endl;
return 0;	
}
}
// Displaying the result
cout<<"Word "<< word <<" is a palindrome"<<endl;	
return 0;
}
