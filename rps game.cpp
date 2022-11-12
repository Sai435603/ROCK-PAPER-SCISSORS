//ROCK PAPER SCISSOR GAME CODE USING CPP//
#include<bits/stdc++.h>
using namespace std;
void Computer_vs_you(){
     int Computer_count=0,User_count=0;
      int User_option,Computer_option;
     cout<<"Enter Username : ||(without spaces)||  ";
     string username="Player ";
     cin>>username;
     srand(time(NULL));
     while(1){
       cout<<endl;
       cout<<username<<" SELECT ANY ONE OF THESE : "<<"\n1 : ROCK\n"<<"2 : PAPER\n"<<"3 : SCISSOR\n"<<"4 : EXIT\n"<<endl;
       cin>>User_option;
       if(User_option<=3&&User_option>=1){ 
        cout<<"COMPUTER OPTION = ";
       switch(rand()%3){
         case 0: cout<<"ROCK\n";
                 Computer_option=1;
                  break;
         case 1: 
                 cout<<"PAPER\n";
                 Computer_option=2;
          break;
         case 2: 
                 cout<<"SCISSOR\n";
                 Computer_option=3;
          break;
         default : cout<<"Something went wrong!!\n"; return; 
       }
       cout<<username<<" OPTION = ";
        switch(User_option){
         case 1: cout<<"ROCK\n";
                  break;
         case 2: 
                 cout<<"PAPER\n";
          break;
         case 3: 
                 cout<<"SCISSOR\n";
          break;

         default : cout<<"Something went wrong!!\n"; return;
        }
      //----------------------***-----------------------------

         if((Computer_option==1&&User_option==3)||(Computer_option==3&&User_option==2)||(Computer_option==2&&User_option==1)){
             cout<<"Winner - Computer\n";
             Computer_count++;
         }
         else{
             cout<<"Winner-"<<username<<endl;
             User_count++;
           
         }
          cout<<"-----STATUS-----\n";
         cout<<username<<" score : "<<User_count<<endl<<"Computer score : "<<Computer_count<<endl;
          cout<<"----------------\n";
      //---------------------------------------------------
       }
       else{
        cout<<"EXITING...\n";
        cout<<"END\n";
         break;
       }
     }
     return ;
}
int main(){
    cout<<"\n\nGAME :: ROCK PAPER SCISSORS\n"<<"LETS START THE GAME\n";
    cout<<"CHOOSE ANY ONE OF THESE OPTIONS\n"<<endl;
    cout<<"SELECT '1' : COMPUTER VS YOU\n"<<"SELECT '2' : EXIT\n";
    int choice;
    cout<<"-->  ";
    cin>>choice;
    cout<<endl;
    switch(choice){
         case 1: Computer_vs_you(); break;
         case 2: cout<<"EXITING...\n"; return 0;
         default : cout<<"INVALID CHOICE!!\n"; break;
    }

     return 0;
}