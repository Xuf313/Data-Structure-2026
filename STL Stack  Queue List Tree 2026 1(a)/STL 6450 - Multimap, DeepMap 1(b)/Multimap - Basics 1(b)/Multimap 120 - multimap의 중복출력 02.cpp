#include<iostream>
#include<map>
using namespace std;

int main(void){
    multimap<string, string> alias;
    alias.insert(pair<string, string>("±èÅÂ±Õ", "±èº°¸í"));
    alias.insert(pair<string, string>("±èÅÂ±Õ", "±è¸»ÄÚ"));
    alias.insert(pair<string, string>("±èÅÂ±Õ", "¸ö°³±×"));
    alias.insert(pair<string, string>("¼Õ¾Æ¼·", "¸ÚÂî³ª"));
    alias.insert(pair<string, string>("ÀÌ´ëÈ£", "µÅ¶ûÀÌ"));
    alias.insert(pair<string, string>("ÀüÁØ¿ì", "°í±¸¸¶"));
    alias.insert(pair<string, string>("ÀÌ´ëÈ£", "¹éµÅÁö"));

    // "±èÅÂ±Õ"ÀÇ ¸ğµç °ª Ãâ·Â
    cout << "\n=== '±èÅÂ±Õ'ÀÇ ¸ğµç º°¸í (find + count) ===";
    auto it = alias.find("±èÅÂ±Õ");
    int count = alias.count("±èÅÂ±Õ");

    for(int i = 0; i < count && it != alias.end(); i++, it++){
        cout << "\n " << it->second;
    }

    return 0;
}
