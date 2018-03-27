//FCI - Programming 1 - 2018 - Assignment 2
//Program name: Team program
//Last Modification Date: 1/3/2018
//Author 1 and ID and group: Lauren Safwat - 20170203 - Group 8
//Author 2 and ID and group: Kareem Magdy - 20170197 - Group 8
//Author 3 and ID and group: Mario Osama - 20170209 - Group 8
//Teaching Assistants: Mohamed Atta & Ibrahim Zidan
//Purpose: To calculate the cost of calls


#include<iostream>
#include<string>
using namespace std;

 int main(){
 float time , cost;
 string day;
 int choice , duration;
 bool IsFinished=false;
 cout << "\t\t\t\t\t\t\tWelcome" << endl;

 //from monday to friday between 8 and 18 at rate 0.40 per min else the rate = 0.25 per min
 //calls on saterday or sunday cost 0.15 per min
 //take day time when the call started and no.of mins
 //output cost
 // MO TU WE TH FR SA SU

 while(IsFinished==false){

 cout << "To calculate the cost of your call: press 1" << endl << "To end the program: press 2" << endl << "Your choice is: ";
 cin>>choice;
 if (choice==1){
 cout<<"Please enter the following data to calculate your cost.\n{Mo,Tu,We,Th,Fr,Sa,Su}\nEnter the day from the list: ";
 cin>>day;
 cout<<"Enter the time when the call started using 24-hours format: ";
 cin>>time;
 while (time<0 || time>24){
    cout << "Invalid time, Enter the time again: ";
    cin >> time;
 }
 cout<<"Enter the duration of the call: ";
 cin>>duration;

 if(day=="mo"||day=="MO"||day=="Mo"||day=="mO"||day=="tu"||day=="TU"||day=="Tu"||day=="tU"||day=="we"||day=="WE"||day=="We"||day=="wE"||day=="th"||day=="TH"||day=="Th"||day=="tH"||day=="Fr"||day=="fr"||day=="FR"||day=="fR"){
    if (time >= 8 && time <= 18)
        cost=0.40*duration;
    else
        cost=0.25*duration;

 }
 else if (day=="su"||day=="SU"||day=="Su"||day=="sU"||day=="sa"||day=="SA"||day=="Sa"||day=="sA"){
    cost=0.15*duration;}
 cout << "The cost of your call= " << cost << "$" << endl << endl;
 }


 if(choice==2){
    cout<<"Thank you for using the program";
    return 0;}
 }
 }
