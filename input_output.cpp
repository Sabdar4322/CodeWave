# include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1,num2;
    cout<<"Enter the value of num1:"; // '<<' this is called insertion operator
    cin>>num1; // '>>' is called Extration operator

    cout<<"Enter the value of num2:"; 
    cin>>num2; 

    cout<<"sum="<<num1 + num2;
    return 0;
}
