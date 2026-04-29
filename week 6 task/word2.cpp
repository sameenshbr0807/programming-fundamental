# include <iostream>
using namespace std;
main() {
    char character;
    string word;
    cout<<"Enter a word:";
    cin>>word;
    for(int index=0;word[index]!='\0';index++)
    {
        cout<<word[index] << " found at position " << index <<endl;
    }
}