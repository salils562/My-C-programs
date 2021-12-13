#include<iostream>
using namespace std;
void showName(string);
class Poem{
private:
int data1;
int data2;    
public:
Poem(){
    cout<<"Hello poem"<<endl;
}
Poem(int a,int b){
data1=a;
data2=b;
cout<<"The value of data 1 is "<<data1<<endl;
cout<<"The value of data 2 is "<<data2<<endl;
}
};
int main(){
Poem *ptr=new Poem(3,4);
Poem p1(5,6);
void (*p)(string);
p=&showName;
(*p)("salil");
return 0;
}
void showName(string name){
cout<<"Your name is "<<name<<endl;
}