#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
#include "shelf.h"
#include "Book_shelf.h"
using namespace std;
int main(int argc, char** argv) {
system("chcp 1251");

int mode = -1;

vector<Book_shelf> bshelfs;
Book_shelf bshelf;
while(mode!=0){
	cout<<"-=����=-"<<endl;
	cout<<"1.�������� ����."<<endl;
	cout<<"2.�������� ����� � ����."<<endl;
	cout<<"3.�������� �����."<<endl;
	cout<<"4.����� �� �����."<<endl;
	cout<<"0. �����."<<endl;
	cout<<"������� ����� � ������� <ENTER>: ";
	cin>>mode;
	switch(mode){
		case 0: continue;
		case 1: 
		
		bshelfs.push_back(bshelf);
		cout<<"���� ��������!"<<endl<<endl;
		break;
		case 2: 
		if(bshelfs.size()>0){
				cout<<"�������� "<<bshelfs.size()<<"������"<<endl;
			    cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"): ";
			    int n = 0;
			    cin>>n;
			    if(n>0 && n<=bshelfs.size()){
			    	bshelfs[n-1].addshelf();
			    	cout<<"����� ���������."<<endl<<endl;
				}else{
					cout<<"������ � ������ �����. ���������. "<<endl<<endl;
					}
		}else{
			cout<<"��������� ����� ������������!"<<endl<<endl;
		}
		break;
		case 3:
			if(bshelfs.size()>0){
					cout<<"�������� "<<bshelfs.size()<<"������"<<endl;
					  cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"): ";
					  int n = 0;
					  cin>>n;
			    if(n>0 && n<=bshelfs.size()){
			    	cout<<"������� ����� �����: ";
			    	int m=0;
			    	cin>>m;
			    	PrintBook pb;
			    	cout<<"������� �������� �����: ";
			    	string name;
			    	cin>>name;
			    	cout<<"������� ���-�� �������: ";
			    	int pages;
			    	cin>>pages;
			    	pb.setName(name);
			    	pb.setPages(pages);
			    	bshelfs[n].addBook(pb,m-1);
			    	}else{
			    		cout<<"������ � ������ �����. ���������. "<<endl<<endl;
			    		}
			    	
			}else{
				cout<<"��������� ����� ����������!"<<endl<<endl;
			} 
			break;
			
	}
}
cout<<"����!";
return 0;
}
