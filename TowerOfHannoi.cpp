#include<iostream>
using namespace std;

void toh(char src,char helper,char des,int n)
{
    // base case
    if(n==0)
    {
        return;
    }
    // recursive case
    toh(src,des,helper,n-1);
    cout<<"taking disc "<< n <<" from "<<src<<" to "<<des<<endl;
    toh(helper,src,des,n-1);
}

int main()
{
    int n = 3;
    toh('A','B','C',n);
    return 0;
}
