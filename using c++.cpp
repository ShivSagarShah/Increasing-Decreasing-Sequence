#include<iostream>
using namespace std;
int main()
{
   int n;
   bool isAscending=true,isDescending=true;
   cin>>n;
   int prev=INT_MAX;
   int curr;
   for(int i=0;i<n;i++)
   {
       cin>>curr;
       if(isDescending)
       {
           if(prev<=curr)
           {
            isDescending=false;
           }
       }
       else{
           if(prev>=curr)
            {
                isAscending=false;
                break;
            }
       }
     prev=curr;
   }
   if(isAscending) cout<<"true";
   else cout<<"false";
   return 0;
}
