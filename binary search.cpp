#include <iostream>
using namespace std;
int main(){
    string name[4]={"Anne","Ali","Sara","Ahmed"};
    int ages[4]={19,20,17,22};
    string keyName;
    cout<<"Enter name";
    cin>>keyName;
     int low =0, high=3;
     bool found = false;
     while(low <= high) {
            int mid = low+(high-low)/2;
     if(name[mid]==keyName){
        cout <<keyName<<"'s Name found and aged"<<ages[mid]<<endl;
        found = true;
        break;
     }
     if(name[mid]<keyName)
        low=mid+1;
     else
        high=mid-1;
        }
     if(!found)
        cout<<"Name is not found"<<endl;

  return 0;
}



























