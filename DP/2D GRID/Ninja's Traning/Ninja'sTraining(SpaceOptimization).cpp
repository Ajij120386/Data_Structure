#include<bits/stdc++.h>
using namespace std;

int  f(int n,vector< vector< int> >&points)
{

     vector< int>prev(4,0);


  prev[0] = max(points[0][1], points[0][2]);
  prev[1] = max(points[0][0], points[0][2]);
  prev[2] = max(points[0][0], points[0][1]);
  prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

       for(int day=1;day<n;day++)
      {
           vector< int>temp(4,0);

           for(int last=0;last<4;last++)
           {
               temp[last]=0;
                for(int task=0;task<3;task++)
              {


                 if(task!=last)
                 {


                     temp[last]=max(temp[last],points[day][task]+prev[task]);
                 }
              }

           }
           prev=temp;
      }

         return prev[3];



}
int main(){

  int n,x;
  cin>>n;

   vector< vector< int> > points(n+1);


   for(int i=0;i<n;i++)
 {
    for(int j=0;j<3;j++)

   {
        cin>>x;
     points[i].push_back(x);
    }

 }



  cout<<f(n,points)<<endl;

}





