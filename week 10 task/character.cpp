# include <iostream>
using namespace std;
string checkAlphabetcase(char ch){
    if(ch>='A' && ch<='Z'){
        cout << "You have entered capital "<<ch;
    }
    else if(ch>='a' && ch<='z')
    {
        cout << "You have entered small " <<ch;
    }
    else{
        cout <<"Invalid input(not an alphabet)";
    }
}
    int main(){
        char input;
        cout << "Enter the Character:";
        cin >>input;
        cout << checkAlphabetcase(input) <<endl;
        return 0;
    }