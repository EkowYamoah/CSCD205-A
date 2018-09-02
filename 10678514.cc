#include <iostream>
using namespace std;

  int main(){
     int num;
	cout<<"ENTER POSITIVE NUMBER HERE:  ";
	cin>>num;
    
   for(int i=2; i<num; i++){
    if(num%i==0 && num>1 && num>=6){
	cout<<num <<" IS NOT A PRIME NUMBER.";
	break;
	}
	
}
        if(num>1 ){
     cout<<num<<" IS A PRIME NUMBER.";

}else{
    cout<<"IT'S NOT A PRIME NUMBER! ";
	}
return 0;
}
