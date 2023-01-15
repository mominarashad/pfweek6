#include<iostream>
#include<windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void erase(int x,int y);
void printpacman(int x,int y);
char getCharAtxy(short int x,short int y);

main()
{
 int x=4;
 int y=4;
 bool gameRunning=true;
 
 system("cls");
 printmaze();
 printpacman( x, y);

 while(gameRunning) 
{
 if(GetAsyncKeyState(VK_LEFT))
{ 
  char nextlocation=getCharAtxy(x-1,y);
  if (nextlocation==' ')
    {
      erase(x,y);
      x=x-1;
      printpacman(x,y);
    }
}
  if(GetAsyncKeyState(VK_RIGHT))
 {
  char nextlocation=getCharAtxy(x+1,y);
  if (nextlocation==' ')
    {
      erase(x,y);
      x=x+1;
      printpacman(x,y);
    }
  }
  if(GetAsyncKeyState(VK_UP))
 {
  char nextlocation=getCharAtxy(x,y-1);
  if (nextlocation==' ')
    {
      erase(x,y);
      y=y-1;
      printpacman(x,y);
    } 
  }
  if(GetAsyncKeyState(VK_DOWN))
 {
  char nextlocation=getCharAtxy(x,y+1);
  if (nextlocation==' ')
    {
      erase(x,y);
      y=y+1;
      printpacman(x,y);
    }
  }
   if(GetAsyncKeyState(VK_ESCAPE))
   {
     gameRunning=false;
   }
   Sleep(200);
  }
}
void printmaze()
{
cout<< " #############################################################################  "<<endl;
cout<< " #...........................................................         .....  #  "<<endl; 
cout<< " #..  %%%%%%%%%%%%%%      ...      %%%%%%%%%%%%%        |%|..         %%%%   #  "<<endl;                                                             
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl;
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl; 
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%%%     |%|   ..         %%%%.  #  "<<endl;                                    
cout<< " #..      |%|       .. |%|...      .............     |%|   ..             .  #  "<<endl;
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%       |%|   ..         %%%%.  #  "<<endl;
cout<< " #..               |%|.            |%|......               ..          |%|.  #  "<<endl;                               
cout<< " #..|%|  ......... |%|.            |%|......|%|            ..          |%|.  #  "<<endl;
cout<< " #..|%|  |%|%%%|%|.|%|.   |%|         ......|%|             .|%|       |%|.  #  "<<endl;
cout<< " #..|%|  |%|   |%|..       %%%%%%%%%%  .....|%|            ..|%|.            #  "<<endl;
cout<< " #..|%|  |%|   |%|..            ...|%|     %%%%            ..|%|.            #  "<<endl;
cout<< " #..|%|               .         ...|%|                 |%| ..|%|.            #  "<<endl;
cout<< " #..|%|   %%%%%%%%%%%%          ...|%|%%%%%%%%%%%%%    |%| ..|%|%%%%%%%%%%   #  "<<endl;
cout<< " #.................................................    |%| .............     #  "<<endl;
cout<< " #.................................................             ........     #  "<<endl;
cout<< " #..|%|    |%|    |%|..     %%%%%%%%%%%   ........|%|  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    |%|    |%|..          ...|%|        %%%%%%  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|              .           ...|%|                |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    %%%%%%%%%%%%%%%%      ...|%|%%%%%%%%%%      |%|  ..|%|%%%%%%%%%%  #  "<<endl;
cout<< " #..................................................   |%|  ..............   #  "<<endl;
cout<< " #..................................................        ............     #  "<<endl;
cout<< " #############################################################################  "<<endl;
 }
void gotoxy (int x,int y)
{  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
void erase(int x,int y)
{
  gotoxy(x,y);
  cout<<" ";
}
void printpacman(int x,int y)
{
 gotoxy(x,y);
 cout<<"P";
}
char getCharAtxy(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x , y , x , y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy , &rect) ? ci.Char.AsciiChar : ' ';
}
  
