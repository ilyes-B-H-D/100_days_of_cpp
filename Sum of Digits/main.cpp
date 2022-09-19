#include <iostream>

using namespace std;

int main()
{
    string n;
    cin>>n;
    if(n.length()<=1)
    {
        cout<<0;
        return 0;
    }
    else
    {
        int counter=0;
        int res;
        while(n.length()>1)
        {
            res=0;
            counter++;
            for(int i=0; i<n.length(); i++)
            {
                res+= int(n[i])-48;
            }
            n= to_string(res);
        }
          cout<<counter;
    }


    return 0;
}
