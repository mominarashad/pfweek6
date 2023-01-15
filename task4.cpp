#include<iostream>
using namespace std;
int timeforproject(int neededhours,int days,int numofworkers);

main()
{
int neededhours;
int days;
int numofworkers;
cout<<"enter the needed hours:";
cin>>neededhours;
cout<<"enter the days firm has:";
cin>>days;
cout<<"enter the num of workers:";
cin>>numofworkers;
timeforproject( neededhours,days,numofworkers);

}
int timeforproject(int neededhours,int days,int numofworkers)
{
int totaltimeavailable;
int totaldays=days*0.10;
int totalhours=totaldays*8;
int totalworkerswork=numofworkers*2;
 totaltimeavailable=totaldays*totalhours*totalworkerswork;
if(totaltimeavailable>72)
{cout<<"yes!the time is enough"<<totaltimeavailable;}
if(totaltimeavailable<72)
{cout<<"no!the time is not enough"<<totaltimeavailable;}
return totaltimeavailable;
}


