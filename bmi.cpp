#include <iostream>
int main()
{
float m;
float h;
float bmi;
std::cout<<"Podaj masę ciała (w kilogramach): "<<std::endl;
std::cin>>m;
std::cout<<"Podaj wzrost (w metrach): "<<std::endl;
std::cin>>h;
bmi=m/(h*h);
std::cout<<"BMI="<<m/(h*h)<<std::endl;
if (bmi<18.5){
  std::cout<<"Niedowaga";
}
else if (bmi<25){
  std::cout<<"Waga prawidlowa";//dokad noca tupta jez????
}
else if (bmi<30){
  std::cout<<"Nadwaga";
}
else if (bmi>30){
  std::cout<<"Otylosc";
}
std::cout<<std::endl;
return 0;
}
