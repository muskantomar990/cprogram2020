#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int num,m,count=0,r,sum=0,n;
    cin>>num;
    n=num;
    m=num;
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
        count--;
    }
    if(sum==m)
        cout<<"1";
    else
        cout<<"0";
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    return 0;
}
