#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tc;
    
    cin>>tc;
    while(tc--){
       
        int n; cin>>n;
         if(n%2==0) cout<<"No"<<endl;
    vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  int start=0, end=n-1,counter=1;
  bool flag=true;
 
  while(start<=end){
      if(v[start] != counter or v[end] != counter){
          flag=false;
          break;
      }
      else {
          start++;
          end--;
          counter++;
      }
  }
  if(flag==true) cout<<"Yes"<<"\n";
  else cout<<"No"<<"\n";
    }
  return 0;

    
}