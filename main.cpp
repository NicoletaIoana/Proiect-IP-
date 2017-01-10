#include <iostream>

using namespace std;
void AsciiFrameUp()
{   int i;
    cout<<"                    ";
    cout<<"OoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoO"<<endl;
    cout<<"                    ";
    cout<<"O                                                         O"<<endl;
    //cout<<"                    ";
    //cout<<"O                                                         O";
}
void AsciiFrameDown()
{   int i;
    //cout<<"                    ";
    //cout<<"O                                                         O"<<endl;
    cout<<"                    ";
    cout<<"O                                                         O"<<endl;
    cout<<"                    ";
    cout<<"OoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoO"<<endl;

}
void ProjName()
{   cout<<"                             ";
    cout<<"                         _           "<<endl;
    cout<<"                             ";
    cout<<" ___ ___ ___ _ _ ___ ___| |_ ___ ___ "<<endl;
    cout<<"                             ";
    cout<<"|  _| . |   | | | -_|  _|  _| . |  _|"<<endl;
    cout<<"                             ";
    cout<<"|___|___|_|_|\\_/|___|_| |_| |___|_|  "<<endl;

}
void LeftPadding()
{
    cout<<"                              ";
}
void MainOptions()
{
    LeftPadding();
    cout<<"1.LUNGIME"<<endl;
    LeftPadding();
    cout<<"2.ARIE"<<endl;
    LeftPadding();
    cout<<"3.VOLUM"<<endl;
    LeftPadding();
    cout<<"4.TIMP"<<endl;
    LeftPadding();
    cout<<"5.VITEZA"<<endl;
    LeftPadding();
    cout<<"6.TEMPERATURA"<<endl;
    LeftPadding();
    cout<<"7.MASA"<<endl;
    LeftPadding();
    cout<<"8.ENERGIE"<<endl;
    LeftPadding();
    cout<<"9.PRESIUNE"<<endl;
    LeftPadding();
    cout<<"10.DENSITATE"<<endl;
    LeftPadding();
    cout<<"11.CONSUM COMBUSTIBIL"<<endl;
}
void Lungime()
{   LeftPadding();
    cout<<"1.mm"<<endl;
    LeftPadding();
    cout<<"2.cm"<<endl;
    LeftPadding();
    cout<<"3.dm"<<endl;
    LeftPadding();
    cout<<"4.m"<<endl;
    LeftPadding();
    cout<<"5.dam"<<endl;
    LeftPadding();
    cout<<"6.hm"<<endl;
    LeftPadding();
    cout<<"7.km"<<endl;
    LeftPadding();
    cout<<"8.ft"<<endl;
    LeftPadding();
    cout<<"9.in"<<endl;
    LeftPadding();
    cout<<"10.mi"<<endl;
    LeftPadding();
    cout<<"11.nmi"<<endl;
    LeftPadding();
    cout<<"12.yd"<<endl;
}
int main()
{
    AsciiFrameUp();
    ProjName();
    AsciiFrameDown();
    cout<<endl;
    MainOptions();
    int first_input;
    bool valid;
    cout<<"Alegeti tipul conversiei:";
    do
    { valid=1;
      cin>>first_input;
      switch (first_input ) {
  case 1:
    Lungime();
    break;
  case 2:
    cout<<"ok!";
    break;
  case 3:
    cout<<"ok!";
    break;
  case 4:
    cout<<"ok!";
    break;
  case 5:
    cout<<"ok!";
    break;
  case 6:
    cout<<"ok!";
    break;
  case 7:
    cout<<"ok!";
    break;
  case 8:
    cout<<"ok!";
    break;
  case 9:
    cout<<"ok!";
    break;
  case 10:
    cout<<"ok!";
    break;
  default:
    valid=0;
    cout<<"Optiune invalida! Noua optiune:";
    break;
  }
}while(!valid);

    LeftPadding();
    cout<<"GATA!";
    return 0;
}
