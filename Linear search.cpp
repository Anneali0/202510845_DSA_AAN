#include <iostream>

using namespace std;

int main(){
    long keyNumber= 796896828;
    int phoneNumber[3];
    int i=0;

    //filling numbers
    do{
            cout<<"Enter your phone number:"<<endl;
        cin>>phoneNumber[i];
    i=i+1;
    } while (i<3);

    //linear search
    //number Anne
    for (int i=0;i<3;i++){
        if(phoneNumber[i]==keyNumber){
            cout<<"Anne's number is found"<<endl;
            break;
        }
    }

    return 0;
}
