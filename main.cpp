#include <iostream>
#include <climits>
#include <iomanip>
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
void ChooseUnitsForConversion(int max_index,int &first_unit_index,double &value,int &second_unit_index)
{
    cout<<"Indexul unitatii pe care doriti sa o convertiti este: ";
    cin>>first_unit_index;
    while(first_unit_index>max_index||first_unit_index<=0)
    {
        cout<<"Index inexistent!Noul index: ";
        cin>>first_unit_index;
    }
    cout<<"Care este valoarea pe care doriti sa o convertiti? ";
    cin>>value;
    while(first_unit_index!=6&&value<0)
    {
        cout<<"Nu se accepta valori negative.Noua valoare: ";
        cin>>value;
    }
    cout<<"Indexul unitatii in care doriti sa faceti conversia: ";
    cin>>second_unit_index;
    while(second_unit_index>max_index||second_unit_index<=0)
    {
        cout<<"Index inexistent!Noul index: ";
        cin>>second_unit_index;
    }
}
void LengthUnits()
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
void LengthConversion()
{
    char length_symbol[][5]={"mm","cm","dm","m","dam","hm","km","ft","in","mi","nmi","yd"};
    double unit_into_meter[]={0.001,0.01,0.1,1,10,100,1000,0.3048,0.0254,1609.344,1852,0.9144};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=12;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_meter[first_unit_index-1]/unit_into_meter[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<length_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<result<<length_symbol[second_unit_index-1];
    else
     cout<<fixed<<result<<length_symbol[second_unit_index-1];
}
void AreaUnits()
{   LeftPadding();
    cout<<"1.mm^2"<<endl;
    LeftPadding();
    cout<<"2.cm^2"<<endl;
    LeftPadding();
    cout<<"3.dm^2"<<endl;
    LeftPadding();
    cout<<"4.m^2"<<endl;
    LeftPadding();
    cout<<"5.a(dam^2)"<<endl;
    LeftPadding();
    cout<<"6.ha(hm^2)"<<endl;
    LeftPadding();
    cout<<"7.km^2"<<endl;
    LeftPadding();
    cout<<"8.ft^2"<<endl;
    LeftPadding();
    cout<<"9.in^2"<<endl;
    LeftPadding();
    cout<<"10.yd^2"<<endl;
    LeftPadding();
    cout<<"11.ac"<<endl;
}
void AreaConversion()
{
    char area_symbol[][10]={"mm^2","cm^2","dm^2","m^2","a","ha","km^2","ft^2","in^2","yd^2","ac"};
    double unit_into_squareMeter[]={0.000001,0.0001,0.01,1,100,10000,1000000,0.0929,0.0006452,0.83612,4046.856119};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=11;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_squareMeter[first_unit_index-1]/unit_into_squareMeter[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<area_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<result<<area_symbol[second_unit_index-1];
    else
     cout<<fixed<<result<<area_symbol[second_unit_index-1];
}
void VolumUnits()
{   LeftPadding();
    cout<<"1.ml"<<endl;
    LeftPadding();
    cout<<"2.cl"<<endl;
    LeftPadding();
    cout<<"3.dl"<<endl;
    LeftPadding();
    cout<<"4.l"<<endl;
    LeftPadding();
    cout<<"5.dal"<<endl;
    LeftPadding();
    cout<<"6.hl"<<endl;
    LeftPadding();
    cout<<"7.kl"<<endl;
    LeftPadding();
    cout<<"8.dm^3"<<endl;
    LeftPadding();
    cout<<"9.cm^3"<<endl;
    LeftPadding();
    cout<<"10.dm^3"<<endl;
    LeftPadding();
    cout<<"11.m^3"<<endl;
    LeftPadding();
    cout<<"12.dam^3"<<endl;
    LeftPadding();
    cout<<"13.hm^3"<<endl;
    LeftPadding();
    cout<<"14.km^3"<<endl;
    LeftPadding();
    cout<<"15.ft^3"<<endl;
    LeftPadding();
    cout<<"16.in^3"<<endl;
    LeftPadding();
    cout<<"17.yd^3"<<endl;

}
void VolumConversion()
{
    char volum_symbol[][10]={"ml","cl","dl","l","dal","hl","kl","mm^3","cm^3","dm^3","m^3","dam^3","hm^3","km^3","ft^3","in^3","yd^3"};
    double unit_into_litre[]={0.001,0.01,0.1,1,10,100,1000,0.000001,0.001,1,1000,1000000,1000000000,1000000000000,28.32,0.016387064,764.56};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=17;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_litre[first_unit_index-1]/unit_into_litre[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<volum_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<result<<volum_symbol[second_unit_index-1];
    else
     cout<<fixed<<result<<volum_symbol[second_unit_index-1];
}
void TimeUnits()
{   LeftPadding();
    cout<<"1.ms"<<endl;
    LeftPadding();
    cout<<"2.s"<<endl;
    LeftPadding();
    cout<<"3.min"<<endl;
    LeftPadding();
    cout<<"4.ore"<<endl;
    LeftPadding();
    cout<<"5.zile"<<endl;
    LeftPadding();
    cout<<"6.saptamani"<<endl;
}
void TimeConversion()
{
    char time_symbol[][12]={"ms","s","minute","ore","zile","saptamani"};
    double unit_into_second[]={0.001,1,60,3600,86400,604800};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=6;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_second[first_unit_index-1]/unit_into_second[second_unit_index-1]);
    cout<<endl;
    cout<<"\n"<<value<<time_symbol[first_unit_index-1]<<" = ";
    cout<<fixed;
    cout<<setprecision(0)<<result<<time_symbol[second_unit_index-1];
}
void VelocityUnits()
{   LeftPadding();
    cout<<"1.mm/s"<<"       "<<"2.mm/min"<<"      "<<"3.mm/h"<<endl;
    LeftPadding();
    cout<<"4.cm/s"<<"       "<<"5.cm/min"<<"      "<<"6.cm/h"<<endl;
    LeftPadding();
    cout<<"7.dm/s"<<"       "<<"8.dm/min"<<"      "<<"9.dm/h"<<endl;
    LeftPadding();
    cout<<"10.m/s"<<"      "<<"11.m/min"<<"      "<<"12.m/h"<<endl;
    LeftPadding();
    cout<<"13.dam/s"<<"    "<<"14.dam/min"<<"    "<<"15.dam/h"<<endl;
    LeftPadding();
    cout<<"16.hm/s"<<"     "<<"17.hm/min"<<"     "<<"18.hm/h"<<endl;
    LeftPadding();
    cout<<"19.km/s"<<"     "<<"20.km/min"<<"     "<<"21.km/h"<<endl;
    LeftPadding();
    cout<<"22.ft/s"<<"     "<<"23.ft/min"<<"     "<<"24.ft/h"<<endl;
    LeftPadding();
    cout<<"25.in/s"<<"     "<<"26.in/min"<<"     "<<"27.in/h"<<endl;
    LeftPadding();
    cout<<"28.mi/s"<<"     "<<"29.mi/min"<<"     "<<"30.mi/h"<<endl;
    LeftPadding();
    cout<<"31.nmi/s"<<"    "<<"32.nmi/min"<<"    "<<"33.nmi/h"<<endl;
    LeftPadding();
    cout<<"34.yd/s"<<"     "<<"35.yd/min"<<"     "<<"36.yd/h"<<endl;
}
void VelocityConversion()
{
    char length_symbol[][5]={"mm","cm","dm","m","dam","hm","km","ft","in","mi","nmi","yd"};
    double unit_into_meter[]={0.001,0.01,0.1,1,10,100,1000,0.3048,0.0254,1609.344,1852,0.9144};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=36;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double multiplier_for_conversion=1;
    int column_difference,first_index_column,second_index_column;
    char time_unit[][5]={"/s","/min","/h"};
    first_index_column=first_unit_index%3;
    second_index_column=second_unit_index%3;
    if(first_index_column==0)
        first_index_column=3;
    if(second_index_column==0)
        second_index_column=3;
    column_difference=first_index_column-second_index_column;
    if(column_difference==-1)
     multiplier_for_conversion=60;
    else
        if(column_difference==-2)
         multiplier_for_conversion=3600;
        else
         if(column_difference==1)
          multiplier_for_conversion=0.01666666;
         else
           if(column_difference==2)
            multiplier_for_conversion=0.00277777;

    double result=multiplier_for_conversion*value*(unit_into_meter[(first_unit_index-first_index_column)/3]/unit_into_meter[(second_unit_index-second_index_column)/3]);
    cout.precision(15);
    cout<<"\n"<<value<<length_symbol[(first_unit_index-first_index_column)/3]<<time_unit[first_index_column-1]<<" = ";
    if(result>=0.0001)
     cout<<(double)(result)<<length_symbol[(second_unit_index-second_index_column)/3]<<time_unit[second_index_column-1];
    else
     cout<<fixed<<(double)(result)<<length_symbol[(second_unit_index-second_index_column)/3]<<time_unit[second_index_column-1];

}
void TemperatureUnits()
{   LeftPadding();
    cout<<"1.C"<<endl;
    LeftPadding();
    cout<<"2.F"<<endl;
    LeftPadding();
    cout<<"3.K"<<endl;
    LeftPadding();
    cout<<"4.R"<<endl;
}
void TemperatureConversion()
{   char temperature_symbol[][5]={"C","F","K","R"};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=4;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result;
    switch (first_unit_index) {
  case 1:
      switch(second_unit_index)
      {
         case 1:
             result=value;
             break;
         case 2:
             result=(value*9/5)+32;
             break;
         case 3:
             result=value+273.15;
             break;
         case 4:
             result=(value+273.15)*9/5;
      }
    break;
  case 2:
       switch(second_unit_index)
      {
         case 1:
             result=(value-32)*5/9;
             break;
         case 2:
             result=value;
             break;
         case 3:
             result=(value+459.67)*5/9;
             break;
         case 4:
             result=value+459.67;
      }
    break;
  case 3:
       switch(second_unit_index)
      {
         case 1:
             result=value-273.15;
             break;
         case 2:
             result=value*9/5-459.67;
             break;
         case 3:
             result=value;
             break;
         case 4:
             result=value*9/5;
      }
    break;
  case 4:
       switch(second_unit_index)
      {
         case 1:
             result=(value-491.67)*5/9;
             break;
         case 2:
             result=value-459.67;
             break;
         case 3:
             result=value*5/9;
             break;
         case 4:
             result=value;
      }
    break;
  default:
    break;
  }
    cout.precision(15);
    cout<<"\n"<<value<<temperature_symbol[first_unit_index-1]<<" = ";
    cout<<result<<temperature_symbol[second_unit_index-1];
}
void MassUnits()
{   LeftPadding();
    cout<<"1.mg"<<endl;
    LeftPadding();
    cout<<"2.cg"<<endl;
    LeftPadding();
    cout<<"3.dg"<<endl;
    LeftPadding();
    cout<<"4.g"<<endl;
    LeftPadding();
    cout<<"5.dag"<<endl;
    LeftPadding();
    cout<<"6.hg"<<endl;
    LeftPadding();
    cout<<"7.kg"<<endl;
    LeftPadding();
    cout<<"8.q"<<endl;
    LeftPadding();
    cout<<"9.t"<<endl;
    LeftPadding();
    cout<<"10.lb"<<endl;
    LeftPadding();
    cout<<"11.oz"<<endl;
}
void MassConversion()
{
    char mass_symbol[][5]={"mg","cg","dg","g","dag","hg","kg","q","t","lb","oz"};
    double unit_into_gram[]={0.001,0.01,0.1,1,10,100,1000,100000,1000000,453.59237,28.3495};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=11;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_gram[first_unit_index-1]/unit_into_gram[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<mass_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<(double)(result)<<mass_symbol[second_unit_index-1];
    else
     cout<<fixed<<(double)(result)<<mass_symbol[second_unit_index-1];
}
void EnergyUnits()
{   LeftPadding();
    cout<<"1.cal"<<endl;
    LeftPadding();
    cout<<"2.kcal"<<endl;
    LeftPadding();
    cout<<"3.J"<<endl;
    LeftPadding();
    cout<<"4.kJ"<<endl;
    LeftPadding();
    cout<<"5.BTU"<<endl;
    LeftPadding();
    cout<<"6.kBTU"<<endl;
    LeftPadding();
    cout<<"7.Wh"<<endl;
    LeftPadding();
    cout<<"8.kWh"<<endl;
    LeftPadding();
    cout<<"9.MWh"<<endl;
    LeftPadding();
    cout<<"10.MJ"<<endl;
    LeftPadding();
    cout<<"11.GJ"<<endl;
}
void EnergyConversion()
{
    char energy_symbol[][5]={"cal","kcal","J","kJ","BTU","kBTU","Wh","kWh","MWh","MJ","GJ"};
    double unit_into_joul[]={4.1868,4186.8,1,1000,1055.05585262,1055055.85262,3600,3600000,3600000000,1000000,1000000000};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=11;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_joul[first_unit_index-1]/unit_into_joul[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<energy_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<(double)(result)<<energy_symbol[second_unit_index-1];
    else
     cout<<fixed<<(double)(result)<<energy_symbol[second_unit_index-1];
}
void PressureUnits()
{   LeftPadding();
    cout<<"1.Pa"<<endl;
    LeftPadding();
    cout<<"2.at"<<endl;
    LeftPadding();
    cout<<"3.atm"<<endl;
    LeftPadding();
    cout<<"4.bar"<<endl;
    LeftPadding();
    cout<<"5.inH2O"<<endl;
    LeftPadding();
    cout<<"6.inHg"<<endl;
    LeftPadding();
    cout<<"7.kPa"<<endl;
    LeftPadding();
    cout<<"8.mH2O"<<endl;
    LeftPadding();
    cout<<"9.mmH2O"<<endl;
    LeftPadding();
    cout<<"10.mmHg"<<endl;
    LeftPadding();
    cout<<"11.N/mm^2"<<endl;
    LeftPadding();
    cout<<"12.PSI"<<endl;
    LeftPadding();
    cout<<"13.torr"<<endl;
    LeftPadding();
    cout<<"14.MPa"<<endl;
}
void PressureConversion()
{
    char pressure_symbol[][7]={"Pa","at","atm","bar","inH2O","inHg","KPa","mH2O","mmH2O","mmHg","N/mm^2","PSI","torr","MPa"};
    double unit_into_Pascal[]={1,98066.5,101325.2738,9800,248.84,3386.38815,1000,9800,9.8,133.32236,1000000,6894.74729317,133.3226,1000000};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=14;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_Pascal[first_unit_index-1]/unit_into_Pascal[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<pressure_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
    cout<<(double)(result)<<pressure_symbol[second_unit_index-1];
    else
    cout<<fixed<<(double)(result)<<pressure_symbol[second_unit_index-1];

}
void DensityUnits()
{   LeftPadding();
    cout<<"1.g/cm^3"<<endl;
    LeftPadding();
    cout<<"2.g/l"<<endl;
    LeftPadding();
    cout<<"3.g/m^3"<<endl;
    LeftPadding();
    cout<<"4.g/ml"<<endl;
    LeftPadding();
    cout<<"5.g/mm^3"<<endl;
    LeftPadding();
    cout<<"6.kg/cm^3"<<endl;
    LeftPadding();
    cout<<"7.kg/l"<<endl;
    LeftPadding();
    cout<<"8.kg/m^3"<<endl;
    LeftPadding();
    cout<<"9.mg/cm^3"<<endl;
    LeftPadding();
    cout<<"10.mg/l"<<endl;
    LeftPadding();
    cout<<"11.t/m^3"<<endl;
}
void DensityConversion()
{
    char density_symbol[][8]={"g/cm^3","g/l","g/m^3","g/ml","g/mm^3","kg/cm^3","kg/l","kg/m^3","mg/cm^3","mg/l","t/m^3"};
    double unit_into_l_per_g[]={1000,1,0.001,1000,1000000,1000000,1000,1,1,0.001,1000};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=11;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result=value*(unit_into_l_per_g[first_unit_index-1]/unit_into_l_per_g[second_unit_index-1]);
    cout.precision(15);
    cout<<"\n"<<value<<density_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<(double)(result)<<density_symbol[second_unit_index-1];
    else
     cout<<fixed<<(double)(result)<<density_symbol[second_unit_index-1];
}
void FuelConsUnits()
{   LeftPadding();
    cout<<"1.l/100km"<<endl;
    LeftPadding();
    cout<<"2.km/l"<<endl;
    LeftPadding();
    cout<<"3.mi/gal"<<endl;
    LeftPadding();
    cout<<"4.gal/100mi"<<endl;
    LeftPadding();
    cout<<"5.mi/l"<<endl;
    LeftPadding();
    cout<<"6.l/100mi"<<endl;
}
void FuelConsConversion()
{
    char fuelCons_symbol[][15]={"l/100km","km/l","mi/gal(UK)","gal/100mi(UK)","mi/l","l/100mi"};
    double unit_into_l_per_100km[]={1,100,282.4809363,2.824809363,62.1371192,0.621371192};
    int first_unit_index,second_unit_index,max_index;
    double value;
    max_index=6;
    ChooseUnitsForConversion(max_index,first_unit_index,value,second_unit_index);
    double result;
    if(second_unit_index==1||second_unit_index==4||second_unit_index==6)
     result=(unit_into_l_per_100km[first_unit_index-1]/unit_into_l_per_100km[second_unit_index-1])/value;
    else
      result=(unit_into_l_per_100km[second_unit_index-1]/unit_into_l_per_100km[first_unit_index-1])*value;
    cout.precision(15);
    cout<<"\n"<<value<<fuelCons_symbol[first_unit_index-1]<<" = ";
    if(result>=0.0001)
     cout<<(double)(result)<<fuelCons_symbol[second_unit_index-1];
    else
     cout<<fixed<<(double)(result)<<fuelCons_symbol[second_unit_index-1];
}
int main()
{   int Continue=0;
    AsciiFrameUp();
    ProjName();
    AsciiFrameDown();
    cout<<endl;
    do{
    MainOptions();
    int first_input;
    bool valid;
    cout<<"Alegeti tipul conversiei:";
    do
    { valid=1;
      cin>>first_input;
      switch (first_input ) {
  case 1:
    LengthUnits();
    LengthConversion();
    break;
  case 2:
    AreaUnits();
    AreaConversion();
    break;
  case 3:
    VolumUnits();
    VolumConversion();
    break;
  case 4:
    TimeUnits();
    TimeConversion();
    break;
  case 5:
    VelocityUnits();
    VelocityConversion();
    break;
  case 6:
    TemperatureUnits();
    TemperatureConversion();
    break;
  case 7:
    MassUnits();
    MassConversion();
    break;
  case 8:
    EnergyUnits();
    EnergyConversion();
    break;
  case 9:
    PressureUnits();
    PressureConversion();
    break;
  case 10:
    DensityUnits();
    DensityConversion();
    break;
  case 11:
    FuelConsUnits();
    FuelConsConversion();
    break;
  default:
    valid=0;
    cout<<"Optiune invalida! Noua optiune:";
    break;
  }
    }while(!valid);
   cout<<endl;
   cout<<"1.Convertiti o alta unitate\n";
   cout<<"2.Exit\n";
   cin>>Continue;
 }while(Continue==1);

    return 0;
}
