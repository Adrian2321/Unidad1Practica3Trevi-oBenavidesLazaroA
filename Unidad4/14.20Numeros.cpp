#include <stdio.h> 
#include<iostream>
using namespace std;
int main(void)
{
 
int i,x=0,vector[20], n=20, dato, centro,inf=0,sup=n-1;

for (i=0;i<20;i++){ 
cout<<"Escriba un numero: ";
cin>>vector[i];
}

 cout<<"Escriba el numero que busca: ";
cin>>dato;

while(inf<=sup)
{
centro=(sup+inf)/2;
if (vector[centro]==dato){
cout<<"Existe"<<endl;
break;
}
else if(dato<vector [centro] ){
sup=centro-1;
}
else{
inf=centro+1;
}
}
if (x==0)
{
 cout<<"No existe" << endl;
}

system("PAUSE");
 return 0;

}

