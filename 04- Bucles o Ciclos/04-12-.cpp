/*escriva un programa que calcule el valor de la 
  siguiente suma   1*2*3*....*n    */

  #include<iostream>
  #include<conio.h>

  using namespace std;

  int main(){
    int n, factorial = 1;

    cout<<"digite el numero del elementos: "; cin>>n;
    
    for(int i=1; i<=n; i++) { factorial *= i;}

    cout<<"\nla suma es: "<<factorial<<endl;


    getch();
    return 0;
  }