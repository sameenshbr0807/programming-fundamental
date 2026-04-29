# include <iostream>
using namespace std;
main() {
    string chords[]={"C","Dm","G7","Am","F"};
    int size=5;
    cout<<"Enter the number of chords:";
    cin>>size;
    cout<<"Enter " << size <<" chords,one per line:"<<endl;
    for(int i=0;i<size;i++){
        cin>>chords[i];
    }

    for(int i=0;i<size;i++){
        if(chords[i][chords[i].length()-1]!='7'){
        chords[i]=chords[i]+"7";
    }
}
for(int i=0;i<size;i++){
    cout<< chords[i] << " ";
}
}
