#pragma once
#define shelf_h
#include <iostream>
#include <string>
#include <vector>
#include "PrintBook.h"



class Shelf{
protected:
		vector<PrintBook> pbooks;
public:
	Shelf() {
		#TODO: default actions
	}
	void addBook(PrintBook pd) {
		pbooks.push_back(pb);
	}
	PrintBook getBook(int id) {
		return pbooks[id];
	}
	void Print() {
		cout<<"Shelf contents: \n"
			for (int i = 0; i < pbooks.size(); i++) {
				pbooks[i].Print();

			}
	}
};

#endif