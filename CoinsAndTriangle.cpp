    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            unsigned long int n,h;
            cin>>n;
            /*h(h+1)/2<=n;
            pow(h,2) + h - 2n=0;*/
            h= (-1 + sqrt(1+8*n))/2;
            cout<<h<<endl;
        }
        return 0;
    }
