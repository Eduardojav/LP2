#include<iostream>
using namespace std;
 void prueba(){
 	my_string prim("h");
	my_string prim2("hsd");
	my_string prim3("bye");
    my_string prim4;
    my_string prim5;
    cin>>prim5;
    prim4=prim2;
	prim=prim3+prim2;
	cout<<prim5;
	prim3="GG la clase string";
	cout<<prim3<<endl;
	prim3=prim3 + " no lo crea profe si la terminamos";
	cout<<prim3<<endl;
	cout<<prim3[6]<<endl;
	if(prim2==prim4)cout<<"funciona todo ezzz"<<endl;
	else cout<<"no nos repruebe profe :'v"<<endl;
	cout<<prim<<endl;
	if(prim<prim3)cout<<"p3 mayor"<<endl;
	else    cout<<"p1 mayor"<<endl;
	if(prim4>prim5)cout<<"p4 mayor"<<endl;
	else    cout<<"p5 mayor"<<endl;}

