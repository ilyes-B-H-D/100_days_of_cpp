#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;
 
int main(){
	map<string, list<string>> myDictionary;
	list<string> name {"ilyes", "adam", "akram"};
	myDictionary.insert(pair<string, list<string>("students",name));

	for(auto s:myDictionary){
		cout<<s.first<<" "<<s.second<<endl;
	}
	return 0;
}
