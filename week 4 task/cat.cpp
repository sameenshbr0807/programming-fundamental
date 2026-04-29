#include <iostream>
using namespace std;
main() {
    cout<<"Number of holidays:";
    int holidays;
    cin>>holidays;
    int norm_of_games=30000;
    int days_in_year=365;
    int working_days;
    working_days=days_in_year-holidays;
    int play_on_working_days=63;
    int play_on_holidays=127;
    int hours;
    int minutes;
    int time_for_games;
    time_for_games=working_days*63+holidays*127;
    int difference;
    difference=abs(norm_of_games-time_for_games);
    hours= difference/60;
       minutes=difference-(hours*60);
      if (time_for_games<= norm_of_games){
        cout<<"Tom sleeps well" <<endl;
       cout<< hours <<" hours and " << minutes << " minutes less for play";
    }
    else{
        cout<<"Tom will run away"<<endl;
        cout<< hours <<" hours and " <<minutes << " minutes for play ";
    }


}