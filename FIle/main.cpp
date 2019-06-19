#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
struct A{
int x;
char str[100];
friend ostream & operator <<(ostream& os , A&a){
	os<<a.x<<" "<<a.str;
	return os;
}
friend istream & operator >>(istream & is, A& a){

		is>>a.x>>a.str;
	return is;
}
};
void save_array(vector<A> data){
	ofstream fs ("out.txt",ios::app|ios::binary);
	for(int i=0;i<data.size();i++)
        	fs.write( (char *) &data[i], sizeof( A ) );
    fs.close();
}
void read(){
	A b;
	ifstream fs("out.txt",ios::binary);
		while( fs.read( (char *) &b, sizeof( A ) ) ) {
		cout << b << endl;
		}
		fs.close();

}
int main(){
A a;
vector <A> va;
read();
cout<<"hola"<<endl;
	while(cin>>a){
		va.push_back(a);}
cout<<"salio"<<endl;
save_array(va);
return 0;
}
