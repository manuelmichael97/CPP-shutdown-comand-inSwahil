#include<iostream>
using namespace std;
//Copy right reserved Created by Manuel(Black Hat Hacker)...
//2019
void zima(){
	system("shutdown -s");
}
void azisha(){
	system("shutdown -r");
}
void laza(){
	system("shutdown -h");
}
void badiliuser(){
	
}
int main(){
	cout<<"Bonyeza 1 kuzima Laptop yako\n";
	cout<<"Bonyeza 2 kuanzisha upya Laptop yako\n";
	cout<<"Bonyeza 3 kuilaza Laptop yako\n";
	cout<<endl;
	int select;
	char conf;
	cout<<"Ingiza chaguo lako: ";
	cin>>select;
	
	switch(select){
		case 1:
			cout<<"Upo tayari kuzima Laptop yako...? [n/h]";
			cin>>conf;
			if(conf=='n'){
				zima();
			}
			break;
		case 2:
			cout<<"Upo tayari kuanzisha upya Laptop yako...? [n/h]";
			cin>>conf;
			if(conf=='n'){
				azisha();
			}
			break;
		case 3:
			cout<<"Upo tayari kuilaza Laptop yako...? [n/h]";
			cin>>conf;
			if(conf=='n'){
				laza();
			}
			break;
	}
}
