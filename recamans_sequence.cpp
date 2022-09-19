#include <iostream>
#include <algorithm>

using namespace std;

int arr[200];
int index=0;
int last_value;
int res;

int main(){
do{
	last_value = arr[index];
	res = last_value - index - 1;
	if(unique(arr.begin(), arr.end(),res)){
	if(res>0){
		arr[index+1]=res;
	}else {
		arr[index+1]=(last_value+index+1);
	}}
	index++;
}while(index<=200);

for(int i=0; i<200;i++){
cout<<arr[i];
}
return 0;
}
