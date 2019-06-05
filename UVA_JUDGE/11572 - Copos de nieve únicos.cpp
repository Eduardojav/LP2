#include <iostream>
#include <set>
using namespace std;

int main() {
	long long int snowflakes,nsnow,cass;
	multiset<long long> package;
	long int MAX=0,TURBO=0;
	while(cin>>cass){
        if(cass==0){
        cout<<1<<endl;}
        else
        cin>>nsnow;
        for(int i=nsnow;i>0;i--)
        {       cin>>snowflakes;
                package.insert(snowflakes);
                if(MAX>TURBO)
                    TURBO=MAX;
                if(package.count(snowflakes)==1)
                    MAX++;
                else{
                    MAX=1;
                    package.clear();
                    package.insert(snowflakes);
                    }
        }
    cout<<TURBO<<endl;
    TURBO=MAX=0;
    cass--;}

	return 0;
}
