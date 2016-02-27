#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
cout<<"ingrese primer numero del 1 al 5";
cin>>a;
if (a>0){
	cout<<"ingrese segundo numero del 1 al 5";
	cin>>b;
}else {
	cout <<"debe ingresar mas de 1 numero";
}

if(b>0){
cout<<"ingrese tercer numero del 1 al 5";
cin>>c;
}else{
cout<<a;
} 

if (c>0){
	cout<<"ingrese cuarto numero del 1 al 5";
	cin>>d;
}else{
	cout<<b,a;
} 
if (d>0){
	cout<<"ingrese quinto numero del 1 al 5";
	cin>>e;
}else{
	cout<<c,b,a;
}

}
