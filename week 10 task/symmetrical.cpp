# include <iostream>
using namespace std;
bool isSymmetrical(int num){
   int original=num;
   int digit1=num/100;
   int digit3=num%10;
   if(digit1==digit3){
    return true;
   }
   else{
    return false;
   }
}
int main(){
    int number;
    cout << "Enter the number:";
    cin >>number;
    if (isSymmetrical(number)){
        cout << "The number is Symmetrical";
    }
    else{
        cout << "The number is not Symmetrical";
    }
}