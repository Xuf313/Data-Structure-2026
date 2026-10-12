#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define pairout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w.first<<"|"<<w.second<<" , "


#define allout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;
#define pairout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w.first<<" | "<<w.second<<"  ,  "


int main() {

    vector< pair<string,int> > vecp { {"pizza", 45000}, \
                                      {"Beer", 6500}, {"±¹¹ä", 5600} } ;

    pairout(" vecp[]= ", vecp ) ;

    return 0;

}
