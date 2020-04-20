#include<iostream>

using namespace std;

int main(){
	float N1,n2,N3, n4;
	
	cout<<"digite un numero para dividirlo entre 100"<<endl;
	cin>>N1;
	
	n2=(N1/100);
	N3=(n2+5);
	n4=N3*5;
	cout<<"\nel resultado de la division es: "<<n2<<endl;
	cout<<"le sume 5 al resultado, ahora es: "<<N3<<endl;
	cout<<"Ahora multiplica por 5, la respuesta es: "<<n4<<endl;
	
	return 0;
}
