# include <iostream>
using namespace std;
main() {
    string word;
    char character;
    cout<<"Enter a word:";
    cin>>word;
    cout<<"Enter the character you want to find:";
    cin>>character;
    bool isfound=false;
    for(int idx=0;word[idx]!='\0';idx++){
        if(character==word[idx]){
             isfound=true;
             break;
        }
    }
    if(isfound){
        cout<<character << " is found in " << word<<endl;
    }
    else
    {
        cout<<character << " is not found in " << word <<endl;
    }
}