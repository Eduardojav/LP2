#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
using namespace std ;


int main(){
 std :: multiset <int > G , B ;
 std :: multiset <int> :: iterator fit ,it ;
 vector < int > storeG , storeB ;
 int n , i  ,  j , k , x , y ,battles , ng ,nb;
 cin>>n;
  while ( n-- ){
       G.clear ()  ; B.clear() ;
       storeB.clear() ; storeG.clear() ;
       cin>>battles>>ng>>nb;
       for ( i = 0 ; i < ng ; i++)
       {
                cin>>x;
             G.insert ( x );
       }
       for ( i = 0 ; i < nb; i++)
       {
             cin>>x;
             B.insert ( x );
       }

      while ( G.size() > 0 && B.size() > 0)
      {     storeG.clear() ; storeB.clear() ;

             for ( i = 0 ; i < battles ; i++)
              {
                    it = G.end() ; it -- ;
                    fit = B.end() ; fit-- ;
                    if ( *it > *fit)
                    {
                          G.erase(it); B.erase(fit);
                          storeG.push_back ( *it - *fit);
                    }
                    else if ( *it < *fit)
                    {
                          G.erase(it); B.erase(fit);
                          storeB.push_back ( *fit - *it);
                    }
                    else
                        {
                            G.erase(it); B.erase(fit);
                        }


                    if (G.size() == 0 || B.size() == 0)
                    break ;
              }

              for ( int z = 0 ; z < storeB.size() ; z++)
                     B.insert( storeB [z] );
              for ( int z = 0 ; z < storeG.size() ; z++)
                     G.insert ( storeG [z] );

      }


      if ( G.size() == 0 && B.size() == 0)
      {
           cout<<"green and blue died"<<endl;;
      }
      else if (G.size() > 0)
      {
            cout <<"green wins"<<endl;
            it = G.end() ;
          do {
              it --;
              cout<<*it<<endl;
          }
          while ( it != G.begin());

      }
      else if (B.size() > 0)
      {
         cout<<"blue wins"<<endl;;
          it = B.end() ;
          do {
              it --;
              cout<<*it<<endl;
          }
          while ( it != B.begin());

      }
      if (n)
      cout<<endl;
  }


    return 0;

}
