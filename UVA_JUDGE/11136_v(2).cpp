#include<iostream>
#include<vector>


using namespace std;

int mini(vector<int> one)
    {
    int two=0;
    for(int i=0; i<one.size(); i++)
        if(one[two]>one[i])
            two=i;
    return two;
    }
int maxi(vector<int> one )
    {
    int two=0;
    for(int i=0; i<one.size(); i++)
        if(one[two]<one[i])
            two=i;
    return two;
    }
int main()
    {
    vector<int> pay;
    long long int days,repeat, cost,infi,supp, client=0;
    while(cin>>days)
        {
        pay.clear();
        if(days==0)
            return 0;
        for(int i=0;i<days;i++)
        {
            cin>>repeat;
            for(int j=0;j<repeat;j++)
        {
                cin>>cost;
                pay.push_back(cost);
        }
            infi = mini(pay);
            supp = maxi(pay);
            client += pay[supp] - pay[infi];
            pay.erase(pay.begin() + infi);
            pay.erase(pay.begin() + supp-1);
            }
        cout<<client<<endl;
        client=0;
        }
    };
