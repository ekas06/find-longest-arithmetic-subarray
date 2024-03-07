#include <iostream>
using namespace std;

int main() {
  cout<<"enter number of elements";
  int n;
  cin>>n;
  int a[n];

  cout<<"enter all elements";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  
  float y=1;
 
  
  for(int i=0;i<n-1;i++){
     float x=0;
     float count=1;
    int j=i;
    float c=a[i]-a[i+1];
  while(j<n-1){
    x+=a[j]-a[j+1];  
    
   if(x/count==c){
     count++;
   }
    else{
      break;
    }    
    j++;
  }
    if(count>y){
      y=count;
      
      
    }
  
   }
  cout<<y<<endl;
  
}