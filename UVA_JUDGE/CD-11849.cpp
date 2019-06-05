
#include <iostream>
#include <set>
using namespace std;

int main() {
	long long int Jack,Jill,NJK,NJL,Comp;
	multiset<long long> JK_and_JL;
	while(cin>>Jack>>Jill && (Jack != 0 || Jill != 0))
        {Comp=0;
        while (Jack > 0)
            {
            cin>>NJK;
            JK_and_JL.insert(NJK);
            Jack--;
            }
        while(Jill > 0)
        {
            //scanf("%d\n",&NJL);
             cin>>NJL;
            if(*JK_and_JL.find(NJL)==NJL)
                Comp++;
            Jill--;
        }
    cout<<Comp<<endl;
    JK_and_JL.clear();
    }

	return 0;
}
