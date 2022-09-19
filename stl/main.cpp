#include <iostream>
#include <bits/stdc++.h>
#include <tuple>
using namespace std;

int main()

{
    tuple<int, char, bool, float> thing;
    thing = make_tuple(21, 'I', true, 12.50); //make_tuple to initialize your tuple
    cout<< get<1>(thing); // 21

    tuple<int, char, bool, float> thing2;
    thing = make_tuple(21, 'I', true, 12.50);
    thing.swap(thing2); //those two tuples must have the same number of elements with the same type

//decomposing tuples
    int x;
    char y;
    bool z;
    float a;

    tie(x,y,z,a) = thing;
    cout<<x<<y<<z<<a; //21 I true 12.50

//concatinating
    tuple<int, char, bool, float,int, char, bool, float> thing3 = tuple_cat(thing, thing2);
    cout<<get<4>(thing3);
    return 0;
}
