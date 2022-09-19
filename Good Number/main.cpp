#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int l,num;
    cin>>l>>num;
    int arr[l];
    vector<int> vec;


    int n, good=0;
    bool done = false;
    for(int i=0; i<l; i++)
    {
                cin>>arr[i];

        vec.clear();
        while(arr[i])
        {
            vec.push_back(arr[i]%10);
            arr[i]/=10;
        }


        sort( vec.begin(), vec.end() );
        vec.erase( unique( vec.begin(), vec.end() ), vec.end() );


        for(int k=0; k<vec.size(); k++)
        {
            n=vec[k];

            for(int j=0; j<=num; j++)
            {
                if(j==n)
                {
                    done=true;
                    break;
                }
                else if(j!=n)
                {
                    done=false;
                    break;
                }
            }
            if(done == true) good++;


        }
    }

    cout<<good;
    return 0;
}
