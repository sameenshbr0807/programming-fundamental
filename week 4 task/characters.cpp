#include <iostream>
using namespace std;
main() {
    cout<<"Enter any character in lower case:";
    char character;
    cin>>character;
    char vowels;
    char consonant;
    int number;
    if(character>='0' && character<='9'){
         cout<<"It is a number";
      }
    else if ( character=='a'){
        cout<<"It is vowel";
    }
       else if ( character=='e'){
            cout<<"It is vowel";
        }
      else if(character=='i'){
        cout<<"It is vowel";
      }
      else if (character=='o'){
        cout<<"It is vowel";
      }
     else if (character=='u'){
        cout<<"It is vowel";
      }
       
       else{
        cout<<"It is consonant";
      }
    }

   

