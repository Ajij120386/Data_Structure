

#include<bits/stdc++.h>
using namespace std;

int  f(vector<int>&arr)
{
    int n=arr.size();
    int prev=arr[0];
    int prev2=0;

 for(int i=1;i<n;i++)
{
      int pick =arr[i];

        if(i>1)
               pick+=prev2;

       int notpick =prev + 0;

       int cur= max(pick,notpick);
       prev2=prev;
       prev=cur;
 }
   return prev;
}
int main(){

  int n,x;
  cin>>n;
   vector<int>arr1,arr2;

  for(int i=0;i<n;i++){
        cin>>x;
        if(i!=n-1)
         arr1.push_back(x);
         if(i!=0)
         arr2.push_back(x);
  }


 int Firsthalf=f(arr1);

 int Secondhalf=f(arr2);

  cout<<max(Firsthalf,Secondhalf)<<endl;

}




