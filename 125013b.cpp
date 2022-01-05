#include<iostream>
using namespace std;
int main(){
int x,y,result;
cout<< "enter x"<<"\n";
cout<<"enter y"<<"\n";
 try{
      if(y==0)
      throw (y);
      else
      result = x/y;
      cout<<"result"<<"\n";
     }
catch(char y){
cout<<"exception caught : char"<<"\n";
}
catch(float y){
cout<<"exception caught : float"<<"\n";
}

catch(...){
cout<<"exception caught : int"<<"\n";
}
return 0;
}'
