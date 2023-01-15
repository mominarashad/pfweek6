#include<iostream>
using namespace std;
 
float pyramidvolume(float length,float width,float height);

main()
{
float length,width,height;
string cm,km,mm,unit;
cout<<"enter the length";
cin>>length;
cout<<"enter the width";
cin>>width;
cout<<"enter the height";
cin>>height;
cout<<"enter the unit";
cin>>unit;
float volume=pyramidvolume(length,width,height);
if(unit=="cm")
{float totalvolume=volume*1000*1000;
cout<<"the volume in cm is:"<<totalvolume<<unit;
}
if(unit=="km")
{float totalvolume=volume/1000000000;
cout<<"the volume in km is:"<<totalvolume<<unit;
}
if(unit=="mm")
{float totalvolume=volume*1000*1000*1000;
cout<<"the volume in mm is:"<<totalvolume<<unit;
}

}
float pyramidvolume(float length,float width,float height)
{
int volume=(length*height*width)/3;
return volume;
}
