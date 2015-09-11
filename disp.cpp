#include <conio.h>
#include<string>
#include <iostream>
#include<stdlib.h>
#include <windows.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_PLUS 43
#define ENTER 80
COORD coord = {0, 0};
    void tab_books();void tab_student();void tab_admin();void main_tab();
    void books_menu();

void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tab1()
{
    system("cls");
    cout<<endl<<"\t\t     -------------------------------------------";
    cout<<endl<<"\t\t\t~~~~~~~~~~  ___________   _________"<<endl<<"\t\t\t| BOOKS  |  | STUDENT |   | ADMIN |  ";
    cout<<endl<<"\t\t\t~~~~~~~~~~  -----------   ---------";
    cout<<endl<<"\t\t     -------------------------------------------";
}
void tab2()
{
    system("cls");
    cout<<endl<<"\t\t     -------------------------------------------";
    cout<<endl<<"\t\t\t__________  ~~~~~~~~~~~   _________"<<endl<<"\t\t\t| BOOKS  |  | STUDENT |   | ADMIN |  ";
    cout<<endl<<"\t\t\t----------  ~~~~~~~~~~~   ---------";
    cout<<endl<<"\t\t     -------------------------------------------";
}
void tab3()
{
    system("cls");
    cout<<endl<<"\t\t     -------------------------------------------";
    cout<<endl<<"\t\t\t__________  ___________   ~~~~~~~~~"<<endl<<"\t\t\t| BOOKS  |  | STUDENT |   | ADMIN |  ";
    cout<<endl<<"\t\t\t----------  -----------   ~~~~~~~~~";
    cout<<endl<<"\t\t     -------------------------------------------";
}

class book
{
    int book_id;
    char book_name[25],book_author;
    float book_prize;
public:
    void read()
    {
    cout<<"\nBook ID->";cin>>book_id;
    cout<<"\nBook Name->";cin>>book_name;
    cout<<"\nBook Author->";cin>>book_author;
    };

    void display()
    {
    cout<<"\nBook ID->";cout<<book_id;
    cout<<"\nBook Name->";cout<<book_name;
    cout<<"\nBook Author->";cout<<book_author;
    };
}books[5];


class students
{
    char student_id[10];
    char student_name[25];
public:
    void read()
    {
    cout<<"\nStudent ID->";cin>>student_id;
    cout<<"\nStudent Name->";cin>>student_name;
    };

    void display()
    {
    cout<<"\nStudent ID->";cout<<student_id;
    cout<<"\nStudent Name->";cout<<student_name;
    };
}students[5];

void main_tab()
{
    int c = 0,space=0;
    int tab=1;

    while(space==0)
    {
        gotoxy(19,3);cout<<"~~";gotoxy(63,3);cout<<"~~";
        c = 0;
        switch((c=getch()))
        {
        case KEY_LEFT:
            if(tab==2){tab1();tab=1;break;}
            if(tab==3){tab2();tab=2;break;}
            break;
        case KEY_RIGHT:
            if(tab==1){tab2();tab=2;break;}
            if(tab==2){tab3();tab=3;break;}
            break;
        case ENTER:
            space=1;
            if(tab==1)books_menu();
            if(tab==2)tab_student();
            if(tab==1)tab_admin();break;
        default:
            break;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //while(1){int c=getch();cout<<"  "<<c;}
   tab1();
    main_tab();


   return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void books_menu()
{
    tab1();
    gotoxy(19,3);cout<<"  ";gotoxy(63,3);cout<<"  ";
int book_id;
char book_name[25],book_author;
float book_prize;
gotoxy(25,10);cout<<"|     ADD BOOK    |";
gotoxy(25,12);cout<<"    REMOVE BOOK    ";
gotoxy(25,14);cout<<"   DISPLAY BOOKS   ";
gotoxy(25,16);cout<<"       SEARCH      ";
 int c = 0,space=0;
    int tab=1;
    while(space==0)
    {
        c = 0;
        switch((c=getch()))
        {
        case KEY_UP:
            if(tab==1)main_tab();
            if(tab==2){tab=1;gotoxy(25,10);cout<<"|";gotoxy(43,10);cout<<"|";gotoxy(25,12);cout<<" ";gotoxy(43,12);cout<<" ";gotoxy(25,14);cout<<" ";gotoxy(43,14);cout<<" ";gotoxy(25,16);cout<<" ";gotoxy(43,16);cout<<" ";break;}
            if(tab==3){tab=2;gotoxy(25,10);cout<<" ";gotoxy(43,10);cout<<" ";gotoxy(25,12);cout<<"|";gotoxy(43,12);cout<<"|";gotoxy(25,14);cout<<" ";gotoxy(43,14);cout<<" ";gotoxy(25,16);cout<<" ";gotoxy(43,16);cout<<" ";break;}
            if(tab==4){tab=3;gotoxy(25,10);cout<<" ";gotoxy(43,10);cout<<" ";gotoxy(25,12);cout<<" ";gotoxy(43,12);cout<<" ";gotoxy(25,14);cout<<"|";gotoxy(43,14);cout<<"|";gotoxy(25,16);cout<<" ";gotoxy(43,16);cout<<" ";break;}
            break;
        case KEY_DOWN:
            if(tab==1){tab=2;gotoxy(25,10);cout<<" ";gotoxy(43,10);cout<<" ";gotoxy(25,12);cout<<"|";gotoxy(43,12);cout<<"|";gotoxy(25,14);cout<<" ";gotoxy(43,14);cout<<" ";gotoxy(25,16);cout<<" ";gotoxy(43,16);cout<<" ";break;}
            if(tab==2){tab=3;gotoxy(25,10);cout<<" ";gotoxy(43,10);cout<<" ";gotoxy(25,12);cout<<" ";gotoxy(43,12);cout<<" ";gotoxy(25,14);cout<<"|";gotoxy(43,14);cout<<"|";gotoxy(25,16);cout<<" ";gotoxy(43,16);cout<<" ";break;}
            if(tab==3){tab=4;gotoxy(25,10);cout<<" ";gotoxy(43,10);cout<<" ";gotoxy(25,12);cout<<" ";gotoxy(43,12);cout<<" ";gotoxy(25,14);cout<<" ";gotoxy(43,14);cout<<" ";gotoxy(25,16);cout<<"|";gotoxy(43,16);cout<<"|";break;}
            break;
        case KEY_PLUS:
            //space=1;
            if(tab==1){tab_books();tab=2;}
            break;
        default:
            break;
        }
    }


}



void tab_books()
{
    gotoxy(19,3);cout<<"  ";gotoxy(63,3);cout<<"  ";
int book_id;
char book_name[25],book_author;
float book_prize;
gotoxy(10,10);cout<<"ID";gotoxy(20,10);cout<<"|                       |";
gotoxy(10,12);cout<<"NAME";gotoxy(20,12);cout<<"|                       |";
gotoxy(10,14);cout<<"Author";gotoxy(20,14);cout<<"|                       |";
gotoxy(10,16);cout<<"Prize";gotoxy(20,16);cout<<"|                       |";
gotoxy(21,10);cout<<"|";gotoxy(41,10);cout<<"|";
gotoxy(22,10);
 int c = 0,space=0;
    int tab=1;
    while(space==0)
    {
        c = 0;
        switch((c=getch()))
        {
        case KEY_UP:
            if(tab==1)main_tab();
            if(tab==2){tab=1;gotoxy(21,10);cout<<"|";gotoxy(41,10);cout<<"|";gotoxy(21,12);cout<<" ";gotoxy(21,14);cout<<" ";gotoxy(21,16);cout<<" ";gotoxy(41,12);cout<<" ";gotoxy(41,14);cout<<" ";gotoxy(41,16);cout<<" ";gotoxy(22,10);break;}
            if(tab==3){tab=2;gotoxy(21,12);cout<<"|";gotoxy(41,12);cout<<"|";gotoxy(21,10);cout<<" ";gotoxy(21,14);cout<<" ";gotoxy(21,16);cout<<" ";gotoxy(41,10);cout<<" ";gotoxy(41,14);cout<<" ";gotoxy(41,16);cout<<" ";gotoxy(22,12);break;}
            if(tab==4){tab=3;gotoxy(21,14);cout<<"|";gotoxy(41,14);cout<<"|";gotoxy(21,10);cout<<" ";gotoxy(21,12);cout<<" ";gotoxy(21,16);cout<<" ";gotoxy(41,10);cout<<" ";gotoxy(41,12);cout<<" ";gotoxy(41,16);cout<<" ";gotoxy(22,14);break;}
            break;
        case KEY_DOWN:
            if(tab==1){tab=2;gotoxy(21,12);cout<<"|";gotoxy(41,12);cout<<"|";gotoxy(21,10);cout<<" ";gotoxy(21,14);cout<<" ";gotoxy(21,16);cout<<" ";gotoxy(41,10);cout<<" ";gotoxy(41,14);cout<<" ";gotoxy(41,16);cout<<" ";gotoxy(22,12);break;}
            if(tab==2){tab=3;gotoxy(21,14);cout<<"|";gotoxy(41,14);cout<<"|";gotoxy(21,10);cout<<" ";gotoxy(21,12);cout<<" ";gotoxy(21,16);cout<<" ";gotoxy(41,10);cout<<" ";gotoxy(41,12);cout<<" ";gotoxy(41,16);cout<<" ";gotoxy(22,14);break;}
            if(tab==3){tab=4;gotoxy(21,16);cout<<"|";gotoxy(41,16);cout<<"|";gotoxy(21,10);cout<<" ";gotoxy(21,12);cout<<" ";gotoxy(21,14);cout<<" ";gotoxy(41,10);cout<<" ";gotoxy(41,12);cout<<" ";gotoxy(41,14);cout<<" ";gotoxy(22,16);break;}
            break;
        case KEY_PLUS:
            //space=1;
            if(tab==1){gotoxy(22,10);cin>>book_id;gotoxy(22,12);tab=2;}
            if(tab==2){gotoxy(22,12);cin>>book_name;gotoxy(22,14);tab=3;}
            if(tab==3){gotoxy(22,14);cin>>book_author;gotoxy(22,16);tab=4;}
            if(tab==4){gotoxy(22,16);cin>>book_prize;}
            break;
        default:
            break;
        }
    }


}

void tab_student()
{
    gotoxy(19,3);cout<<"  ";gotoxy(63,3);cout<<"  ";
       for(int i=0;i<2;i++)students[i].read();
       for(int i=0;i<2;i++)students[i].display();
}
void tab_admin()
{
    gotoxy(19,3);cout<<"  ";gotoxy(63,3);cout<<"  ";
}
