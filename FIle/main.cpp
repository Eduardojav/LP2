#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
struct A{
int x;
int y;
string str;
friend ostream & operator <<(ostream& os , A&a){
	os<<a.x<<" "<<a.str;
	return os;
}
friend istream & operator >>(istream & is, A& a){

		is>>a.x>>a.str;
		a.y=a.str.size();
	return is;
}
};

void save_array(vector<A> data){
	ofstream fs ("out.txt",ios::app|ios::binary);
	for(int i=0;i<data.size();i++){
        	fs.write( (char *) &data[i].x, sizeof( int ));
			fs.write( (char *) &data[i].y, sizeof( int ) );
			fs.write(data[i].str.c_str(),data[i].y);
	}
    fs.close();
}
void read(){
	A b;
	size_t y;
	ifstream fs("out.txt",ios::binary);
		while(fs.read( (char *) &b.x, sizeof( int ))) {
			fs.read( (char *) & b.y, sizeof( int ));
			char* f=new char[b.y+2];
			fs.read( f, b.y );
			f[b.y]=0;
			b.str=f;
			delete []f;
		cout << b << endl;
	}

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
