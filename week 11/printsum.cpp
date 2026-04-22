# include <iostream>
using namespace std;
void printSum(int matrix[][3],int rowSize)
{
    int sum=0;
    for(int i=0;i<rowSize;i++)
{
    for(int j=0;j<3;j++){
        sum=sum+matrix[i][j];
    }
}
cout << "The sum of the elements is:"<<sum;
}
int main(){
    int rowSize;
    cout << "Enter row size:";
    cin >>rowSize;
    int matrix[rowSize][3];
    cout <<"Enter the element of the matrix:"<<endl;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<3;j++){
            cout << "Enter the elements at position["<<i<<"]["<<j<<"]:";
            cin >>matrix[i][j];
        }
    }
        printSum(matrix,rowSize);
        return 0;
}