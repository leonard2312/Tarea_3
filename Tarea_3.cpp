#include <iostream>

using namespace std;

void to_string(int []);
void get_item(int [],int);
void set_item(int [],int,int);
int get_Length(int[]);
void clear(int[],int);

int main(){
	int *lista;
	
	lista = new int [5];
	
	for(int i=0;i<5;i++){
		lista[i] = 0;
	}
	
	to_string(lista);
	get_item(lista,3);
	set_item(lista,5,4);
	cout<<"\n";
	to_string(lista);
	cout<<"\n"<<get_Length(lista);
	clear(lista,3);
	cout<<"\n";
	to_string(lista);
	
	return 0;
}

void to_string(int lista[]){
	for(int i=0;i<5;i++){
		cout<<lista[i]<<" ";
	}
}

void get_item(int lista[],int index){
	cout<<"\n"<<lista[index];
}

void set_item(int lista[],int data,int index){
	for(int i=0;i<5;i++){
		if(i == index){
			lista[i] = data;
		}
	}
}

int get_Length(int lista[]){
	int contador=0;
	for(int i=0;i<5;i++){
		contador++;
	}
	return contador;
}

void clear(int lista[],int data){
	for(int i=0;i<5;i++){
		lista[i] = data;
	}
}

