#include <iostream>

using namespace std;
float addFourFloatNumbers(float x,float y,float z, float a){
return x,y,z,a;
}
int main(){
    float number1,number2,number3,number4,sum;
    cout<<"enter four float numbers:";
    cin>>number1>>number2>>number3>>number4;
    sum=addFourFloatNumbers(number1,number2,number3,number4);
    cout<<"sum = "<<sum;

    return 0;
}
