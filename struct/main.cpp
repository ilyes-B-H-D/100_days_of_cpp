#include <iostream>

using namespace std;

struct my_queue{
int arr[100];
int len;

my_queue(){
len=0;
}

void add_end(int value){
    //arr[len++]=value;
    arr[len]=value;
    len++;
}

void add_front(int value){
    for(int i=len-1; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    len++;
}

int remove_front(){
int ret=arr[0];
for(int i=0; i<len; i++)arr[i]=arr[i+1];
len--;
return ret;
}

void print(){
for(int i=0; i<len; i++)cout<<arr[i];
}
};


struct hospital_queue{

};
int main()
{
    return 0;
}
