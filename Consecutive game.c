#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,value,count=0,i;
    cin>>size;
    vector<int> vec1;
    for(i=0;i<size;i++)
    {
        cin>>value;
        vec1.push_back(value);
    }
    {
        sort(vec1.begin(), vec1.end());
        for(i=0;i<size;i++)
        {
            if((vec1[i+1]-vec1[i])==1)
                count++;
        }
        if(count==(size-1))
            cout<<"1";
        else
            cout<<"0";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
