//Program C/C++ untuk implementasi//
//dari Bubble Sort//
#include <iostream>
#include <conio.h>

//Fungsi untuk mengimplementasikan bubble sort//
using namespace std;
    int data[30], data2[30];
    int Jml_Data;
    
//Base case//
int tukar (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
}

//Berapa Jumlah data yg akan dimasukkan//
int input(){
    cout<<"Masukan Jumlah Data = ";
cin>>Jml_Data;

cout<<endl;

//Untuk memasukkan data yg akan di sort//
    for (int i=0;i<Jml_Data;i++){
    	cout<<"Masukan Data Ke-"<<i+1<<" = ";
    	cin>>data[i];
    	
    	data2[i]=data[i];
	}
	cout<<endl;	
}
//Fungsi untuk mencetak array//
int tampil(){
	for (int i=0;i<Jml_Data;i++){
	     cout<<"["<<data[i]<<"] ";
	}
	cout<<endl;
}
	//Bubble sort Process//
//One pass of bubble sort. After//
//this pass, the largest element//
//is moved (or bubbled) to end.//
int bubble_sort(){
	for (int i=1; i<Jml_Data;i++){
		for (int j=Jml_Data-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}

//Program driver untuk menguji fungsi di atas//
int main()
  {
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	input();
	cout<<"Proses Bubble Sort"<<endl;
	tampil();
	bubble_sort();
  getch();
  }
