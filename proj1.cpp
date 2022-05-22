#include <iostream>
using namespace std;
int main(){
	
   float a,b;
   cout<<"Enter values of a and b : "<<endl;
   //yea but why so? :D
   cin>>a>>b;
   try{
   	if (b==0){
   		throw 3;
	   }
   
   float c=a/b;
   cout<<c;
}
    catch(int a){
    	cout<<"Division by zero is not possible"<<endl;
}
    return 0;
 }
 
