#include<iostream>

class Matrix{
	
	public:
	
		int** table;  //tablica
		unsigned int w; //wiersze
		unsigned int k; //kolumny
		

	public:

		Matrix(){
			this->w = 3;
			this->k = 3;
			table = new int*[w];
	        for (int i = 0; i < w; ++i) {
	            table[i] = new int[k];
	        }
	        for (int i = 0; i < w; ++i) {
	            for (int j = 0; j < k; ++j) {
	                table[i][j] = 1;
	            }
	        }
		}

	    Matrix(unsigned int w, unsigned int k) {
			this->w = w;
			this->k = k;
	        table = new int*[w];
	        for (int i = 0; i < w; ++i) {
	            table[i] = new int[k];
	        }
	        for (int i = 0; i < w; ++i) {
	            for (int j = 0; j < k; ++j) {
	                table[i][j] = 1;
	            }
	        }
	    }

	    ~Matrix() {
	        for (int i = 0; i < w; ++i) {
	            delete[] table[i];
	        }
	        delete[] table;
	    }

		int ObliczSume(){
			int suma;
		    for (int i = 0; i < w; ++i) {
		        for (int j = 0; j < k; ++j) {
		            suma += table[i][j];
		        }
		    }
		    return suma;
		}

};