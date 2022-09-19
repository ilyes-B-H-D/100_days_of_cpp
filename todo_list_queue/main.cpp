#include <iostream>
#include <queue>

using namespace std;

void exit()
{
    cout<<"w're sorry to see u leaving "<<endl;
    return ;
}

void addTask(queue<string> tasks)
{
    string s;
    cout<<"enter you next task"<<endl;
    cin>>s;
    tasks.push(s);
    cout<<"1)add another task"<<endl<<"2) next task"<<endl<<"3) exit"<<endl;
    char res;
    cin>>res;
    if(res=='1'){
        addTask(tasks);
    }else if(res=='2'){
        if(!tasks.empty()){
            cout<<tasks.front();
            cout<<endl<<"RQ: don't ask for the next task before continue this one before "<<endl;
            tasks.pop();
        }
    }else if(res=='3') exit();
}

int main()
{
    queue<string> tasks;

    char res;
    cout<<"hello there !"<<endl;
    cout<<"1) start my todo "<<endl<<"2) exit"<<endl;
    cin>>res;
    if(res=='1')
    {
        addTask(tasks);
    }
    else exit();

    return 0;
}
