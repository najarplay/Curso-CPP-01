/*escriva un programa que calcule el valor de la 
  siguiente suma   1+3+5+....+2n-1*/

  #include<iostream>
  #include<conio.h>

  using namespace std;

  int main(){
    int n, suma = 0;

    cout<<"digite el numero del elementos: "; cin>>n;
    
    for(int i=1; i<=n; i++) { suma += 2*i-1;}

    cout<<"\nla suma es: "<<suma<<endl;


    getch();
    return 0;
  }