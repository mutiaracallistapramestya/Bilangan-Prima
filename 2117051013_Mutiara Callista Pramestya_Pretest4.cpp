#include <iostream>
 
using namespace std;

//Mutiara Callista Pramestya
//2117051013
//Kelas C
 
int main(){
	
	int x ;
	int y ;
	
	cin>>x;
	y=2;
	
	do{
	
	if (x==2||x==3||x==5||x==7){
		cout<<x<< " adalah bilangan prima";
	    break;	
	}else if (x%2==0||x%3==0||x%5==0||x%7==0||x%11==0||x%13==0||x%17==0||x%19==0||x%29==0||x%31==0||x%37==0||x%41==0||x%43==0||x%47||x<0||x==1){
		cout<<x<< " bukan bilangan prima";
		break;
	}else{
		cout <<x<< " adalah bilangan prima";
		break;
	}	y++;
	
	}while (x<y);
	
 
}
