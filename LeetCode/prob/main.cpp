#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip=(meal_cost/100)*tip_percent;
    double tax=( (double) tax_percent/100)*meal_cost;
    double total_cost=meal_cost+tip+tax;

    cout<<round(total_cost)<<endl;
}

int main()
{
    solve(12.00,20,8);
    return 0;
}
