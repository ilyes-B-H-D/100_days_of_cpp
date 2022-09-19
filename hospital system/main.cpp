#include <iostream>
#include <queue>

using namespace std;

struct specialization{
    int num;
    int status;
    queue<string> spec;
};

int main()
{
    cout<<"Enter your choice: "<<endl<<"1) Add new patient"<<endl<<"2) Print all patients"<<endl<<"3) Get next patient"<<endl<<"4) Exit"<<endl;
    char res;
    cin>>res;
    specialization s;

    if(res=='1'){
        cout<<"Enter specialization, name, status"<<endl;
        cin>>s.
    }
    return 0;

}
