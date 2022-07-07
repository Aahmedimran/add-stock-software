
#include<iostream>
#include<string>
using namespace std;
//intialize class
class book{
	int book_Id;
	float Price;
	string Title;
	string Author;
	
public:
		book()
		
		{
			book_Id = 0;
			Price = 0.0;
			Title = "";
			Author = "";
			
		}
//		intilize setter founction
			void setbookid(){
				cin>>book_Id;
			}
			void settitle(){
				cin.ignore();
				getline(cin, Title);
			}
			void setauthor(){
				getline(cin, Author);
			}
			void setprice(){
				cin>>Price;
			}
			int getbookid(){
				return book_Id;
			}
			string gettitle(){
				return Title;
			}
			string getauthor(){
				return Author;
			}
			int getprice(){
				return Price;
			}
			
			void setter()
			{
			cout<<"\n Enter book's details ------------------";
			cout<<"\n \n ------------------------------------";
				
				cout<<"\n Book id: ";
				this -> setbookid();
				cout<<"\n Title: ";
				this -> settitle();
				cout<<"\n Author: ";
				this -> setauthor();
				cout<<"\n Price: ";
				this -> setprice();
				cout<<"book has been added";
			}

	//intialize getter founction
			
			void getter()
			{
			cout<<"\n \n ---------------------------";
			cout<<"\n Book id: "<<getbookid();
			cout<<"\n Title: "<<gettitle();\
			cout<<"\n Author: "<<getauthor();
			cout<<"\n Price: "<<getprice();
			cout<<"\n \n --------------------------";
				
			}
			
			~book()
			{
				cout<<"\n ----------------------";
				cout<<"\n Destructor Called;";
			}
};

int main()
	{
		book* b[25];
		int s=0, ch, count, k=1;
		char z;
		do {
			cout<<"Welcome to E-library Prototype \n";
			cout<< "--------------------------------";
			cout<<"\n Enter 1 to add book";
			cout<<"\n Enter 2 to Display books";
			cout<<"\n Enter 0 to exit";
			cout<< "\n ----------------------------";
			cout<<"\n Enter choice: ";
			cin>>ch;
			//intialze switch statement
			switch(ch)
			{
			case 1:
			cout<<"\n --------------------------------";
			cout<<"\n how many records you want to Enter? : ";
			cin>>count;
			//intialze do while loop
				do{
					b[s] = new book;
					b[s] -> setter();
					s++;
					k++;
					cout<<"\n ------------------------------";
					cout<<"\n Do you want to add another record? (Y, N): ";
					cin>>z;
				}
				while (k<=count && (z=='y' || z =='y'));
				if ((z=='y' || z=='y') && k > count)
				cout<<"\n you have reached the limit, can't entery any other records!";
				break;
				
				
				case 2:
					cout<<"\n -----------------------------------";
					cout<<"\n books detail ---------------------------------";
					for(int m=0; m < s; m++)
					b[m] -> getter();
					break;
				case 0:
					for(int m=0; m < s; m++)
					b[m] -> ~book();
				exit(0);
			}
			cout <<"\n \n show the main menu again? (Y, N); ";
			cin>>z;
			
			
		}
		
		while(z=='y' || z=='y');
		for(int m=0; m < s; m++)
		b[m] -> ~book();
		return 0;
	}
	
