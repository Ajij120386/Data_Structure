#include<bits/stdc++.h>
using namespace std;

int  f(int ind,vector<int>&val,int T)
{
         if(ind==0)
         {
                if(T%val[0]==0)
                    return T/val[0];
               else
                  return 1e9;
         }

         int nottake =  0 +f(ind-1,val,T) ;

      int  take=INT_MAX;

      if(val[ind]<=T)
                take =  1+f(ind,val,T-val[ind]) ;


return min(take,nottake);

}
int main(){

  int n,W,T,x;
  cin>>n>>T;
   vector<int>val;

 for(int i=0;i<n;i++)
    {
          cin>>x;
          val.push_back(x);

    }

  cout<<f(n-1,val,T)<<endl;

}
/*
3 7
1 2 3
*/


