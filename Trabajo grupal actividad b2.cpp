// ==========================================================================
// hola ahor estoy mosrando este trabjo del ciclo paso a los nuevo estudiante
// ===========================================================================
#include<iostream>
using namespace std;
int main()
{
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
//Mostrar Matrices  Becerra Michael
cout<<"\n";
cout<<"Aqui se muestra la matriz 1 y la matriz 2"<<endl;
cout<<"**********************************"<<endl;
for(int c=0;c<10;c++){
		cout<<matriz1[c];
		cout<<" | ";
}
cout<<endl;
for(int c=0;c<10;c++){
		cout<<matriz2[c];
		cout<<" | ";
		
}
cout<<endl;
//Suma de Matrices  Giler Anni
cout<<"\n";
cout<<"Aqui se muestra la suma de la matriz 1 y la matriz 2"<<endl;
cout<<"**********************************"<<endl;
for(int c=0;c<10;c++){
	cout<<matriz1[c]+matriz2[c];
	cout<<" | ";	
	
}	
	
//Resta de Matrices Eras Joel
	cout<<endl;
cout<<"\n";
cout<<"Aqui se muestra la resta de la matriz 1 y la matriz 2"<<endl;
cout<<"**********************************"<<endl;
for(int c=0;c<10;c++){
	cout<<matriz1[c]-matriz2[c];
	cout<<" | ";
}
cout<<endl;

//Multiplicaión de Matrices  Baez Jose  
cout<<"\n";
cout<<"Aqui se muestra la multiplicacion de la matriz 1 y la matriz 2 "<<endl;
cout<<"**********************************"<<endl;
for(int c=0;c<10;c++){
	cout<<matriz1[c]*matriz2[c];
	cout<<" | ";
}
cout<<endl;
//División de Matrices Montaño Luis
cout<<"\n";
cout<<"Aqui se muestra la  division de la matriz 1 y la matriz 2 "<<endl;
cout<<"**********************************"<<endl;
for(int c=0;c<10;c++){
	cout<<matriz1[c]/matriz2[c];
	cout<<" | ";
}
cout<<endl;





return 0;


}
