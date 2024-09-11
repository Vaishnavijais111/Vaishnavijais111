#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"character";
    cin>>ch;
    if (ch>='a'&&ch<='z')
     {
        cout<<"is a lowercase and the value is"<<ch<<endl;
    }
    else if (ch>='A'&&ch<='Z'){
        cout<<"is a uppercase and the value is"<<ch<<endl;
    }
    else if (ch>='0'&&ch>='9') {
        cout<<"is a numeric value and the value is"<<ch<<endl;
    }
    else 
    { cout<<"is not numeric not cases"<<endl;
    }
    return 0;
}
