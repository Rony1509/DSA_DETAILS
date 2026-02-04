#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> prefix_sum(arr.size());
    prefix_sum[0] = arr[0];
    for(int i = 1; i < arr.size(); i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    cout << "Prefix Sum Array: ";
    for(int i = 0; i < prefix_sum.size(); i++){
        cout << prefix_sum[i] << " ";
    }
    return 0;
}