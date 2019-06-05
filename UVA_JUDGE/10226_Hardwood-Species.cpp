#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include<string.h>
#include <map>
using namespace std;

int main() {
	int cases;
	map<string, int> trees;
	map<string, int>::iterator it;
	char name[35];

	int a=cases;
	scanf("%d\n\n",&cases);
	while (cases--) {
		int total = 0;
		total = 0;
		while (gets(name)) {
			if (strlen(name) == 0){
				break;}

			if (trees.count(name) == 0)
				trees[name] = 1;
            else
				trees[name] = trees[name] + 1;

			total++;
		}
		for (it = trees.begin(); it != trees.end(); it++)
            cout<<(*it).first.data()<< " "<<std::fixed << std::setprecision(4) <<(double) (*it).second/(double) total* 100.0<<endl;
		if (cases > 0)
        {
			cout<<endl;
			trees.clear();
		}

	}
	return 0;
}
	}
}
