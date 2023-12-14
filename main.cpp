#include<iostream>
#include "tablica.h"

int main(){
	
	//KAZDA KOMORKA W TABLICY MA PRZYPISANA WARTOSC 1

	//------=1=------ w i k podane przez uzytkownika
	std::cout<<std::endl<<"------=1=------"<<std::endl<<std::endl;

	unsigned short int wiersze = 0;
	unsigned short int kolumny = 0;

	std::cout<<"podaj liczbe wierszy: ";
	std::cin>>wiersze;
	std::cout<<"podaj liczbe kolumn: ";
	std::cin>>kolumny;

	Matrix Tab(wiersze,kolumny);

	std::cout<<"suma tablicy "<<Tab.w<<"x"<<Tab.k<<": "<<Tab.ObliczSume()<<std::endl;
	//std::cout<<sizeof(Tab)<<std::endl;


	//------=2=------ tablica statyczna z 2 tablicami dynamicznymi skladajaca sie z obiektow klasy Matrix
	std::cout<<std::endl<<"------=2=------"<<std::endl<<std::endl;

	Matrix Incepcja[2] = {Matrix(2,3), Matrix(5,4)};

	std::cout<<"suma tablicy "<<Incepcja[0].w<<"x"<<Incepcja[0].k<<": "<<Incepcja[0].ObliczSume()<<std::endl;
	std::cout<<"suma tablicy "<<Incepcja[1].w<<"x"<<Incepcja[1].k<<": "<<Incepcja[1].ObliczSume()<<std::endl;
	

	//------=3=------ konstruktor domsylny (bez argumentow - w i k przyjmuja wartosc 3)
	std::cout<<std::endl<<"------=3=------"<<std::endl<<std::endl;	

	Matrix x;
	std::cout<<"suma tablicy "<<x.w<<"x"<<x.k<<": "<<x.ObliczSume()<<std::endl;

	//------=4=------ dynamiczny obiekt klasy Matrix
	std::cout<<std::endl<<"------=4=------"<<std::endl<<std::endl;

	Matrix* y;
	y = new Matrix(3,4);
	std::cout<<"suma tablicy "<<y->w<<"x"<<y->k<<": "<<y->ObliczSume()<<std::endl;
	delete y;

	return 0;
}