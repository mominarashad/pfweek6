#include<iostream>
using namespace std;
float taxcalculator(float itemprice,char typecode);

main()
{
float itemprice;
char typecode;
float taxamount;
cout<<"enter the price of vehicle:";
cin>>itemprice;
cout<<"enter the type of vehicle:";
cin>>typecode;
taxcalculator(itemprice,typecode);

}
float taxcalculator(float itemprice,char typecode)
{
float taxamount;
float finalprice;
if(typecode='M')
{ taxamount=itemprice*0.6;}
if(typecode='E')
{ taxamount=itemprice*0.8;}
if(typecode='S')
{ taxamount=itemprice*0.10;}
if(typecode='V')
{ taxamount=itemprice*0.12;}
if(typecode='T')
{ taxamount=itemprice*0.15;}

{ finalprice=itemprice+taxamount;
cout<<"the final price is:"<<finalprice<<endl;
return finalprice;
}
}