#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main(){
        map<string, list<string>> myDictionary;
        list<string> name{"ilyes dfqsfd", "adam fqds", "akramfqds dfsq"};
        myDictionary.insert(pair<string, list<string>>("students",name));

        for(auto s:myDictionary){
                cout<<s.first<<" - ";
                for(auto a:s.second)
                    cout<<a<<",";
                cout<<endl;
        }
        return 0;
}
