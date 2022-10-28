#include<bits/stdc++.h>

using namespace std;

    void func(int ind, vector < int > &ds, int arr[],int n)
     {
         if (ind == n)
            {
                 for(auto it: ds){
                    cout<<it<<" ";
                 }
                 cout<<endl;
                  return;
            }
      //element is picked
      ds.push_back(arr[ind]);
      func(ind + 1, ds,arr, n);

      //element is not picked
           ds.pop_back();

           func(ind + 1, ds,arr, n);
    }


int main() {

   int arr[] = {1,3,2};
 vector<int>ds;

    func(0,ds,arr,3);


  return 0;
}
