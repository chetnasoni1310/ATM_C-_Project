#include<iostream>
#include<stdlib.h>
using namespace std;
class bank{
	int tot=50000;
    
   
    public:
    	char log;
	    int n;
	    void hi2();
	    void withdrawl();
	    void deposite();
	    void showbal();
	    void login();
	    void hi();
		int acc1()
		{   
		    
			cout<<"name = chetna"<<endl;
			cout<<"account no. 12345."<<endl;
			cout<<"your pin = 1234."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;			
		}
		int acc2()
		{    
		    
			cout<<"name = soniya"<<endl;
			cout<<"account no. 56789."<<endl;
			cout<<"your pin = 5678."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc3()
		{ 
		    
			cout<<"name = hemant"<<endl;
			cout<<"account no. 90123."<<endl;
			cout<<"your pin = 9012."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc4()
		{ 
		    
			cout<<"name = harshita"<<endl;
			cout<<"account no. 34567."<<endl;
			cout<<"your pin = 3456."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
		int acc5()
		{ 
		    
			cout<<"name =himanshi "<<endl;
			cout<<"account no. 78901."<<endl;
			cout<<"your pin = 7890."<<endl;
			cout<<"your phone no. = 1234567890."<<endl;
			cout<<"your opening account balance is: 50000."<<endl;
			cout<<"your current balance is: "<<tot<<endl;
			cout<<"\n"<<endl;	
		}
};
		void bank::login(){
			string user1="chetna";
			int pass1=1234;
			string user2="soniya";
			int pass2=5678;
			string user3="hemant";
			int pass3=9012;
			string user4="harshita";
			int pass4=3456;
			string user5="himanshi";
			int pass5=7890;
		    string username;
		     int pin;
		     cout<<"\nplease enter your username"<<endl;
		     cin>>username;
		     cout<<"please enter your pin"<<endl;
		     cin>>pin;
			 if(username == user1 && pin == pass1)
		     {  
		        
		     	cout<<"              ******login successful******             \n"<<endl;
		     	cout<<"welcome chetna\n"<<endl;
			 }
			 else if(username == user2 && pin == pass2)
		     {  
		        
		     	cout<<"              ******login successful******             \n"<<endl;
		     	cout<<"welcome soniya \n"<<endl;
			 }
			 else if(username == user3 && pin == pass3)
		     {  
		        
		     	cout<<"              ******login successful******             \n"<<endl;
		     	cout<<"welcome hemant \n"<<endl;
			 }
			 else if(username == user4 && pin == pass4)
		     {   
		        
		     	cout<<"              **login successful**             \n"<<endl;
		     	cout<<"welcome harshita \n"<<endl;
			 }
			 else if(username == user5 && pin == pass5)
		     {  
		        
		     	cout<<"              **login successful**            \n"<<endl;
		     	cout<<"welcome himanshi \n"<<endl;
			 }
			 else 
			 {  
			    
			 	cout<<"invalid details.\nplease re-enter username and pin."<<endl;
			 	login();
			 }	 
      }
	    
		void bank::deposite()
		{   int amount=0;
			cout<<"enter the amount you want to deposit"<<endl;
			cin>>amount;
			
			tot = tot + amount;
			cout<<"your updated amount is: "<<tot<<endl;
			cout<<"\n"<<endl;
		}
		void bank::showbal()
		{  int p;
			cout<<"enter your pin: "<<endl;
			cin>>p;
			if(p==1234)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
			  
	    	  cout<<"welcome chetna your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==5678)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  
	    	  cout<<"welcome soniya your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==9012)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  
	    	  cout<<"welcome hemant your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==3456)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  
	    	  cout<<"welcome harshita your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else if(p==7890)
			{
			  {  
			    int amount=0;
		    	tot = tot + amount;
			    cout<<"total balance is : "<<tot<<endl;
	    	  }
	    	  
	    	  cout<<"welcome himanshi your balance is: "<<tot<<endl;
	    	  cout<<"\n"<<endl;
			}
			else 
			{ 
			  
			  cout<<"pin is wrong."<<endl;
		      cout<<"please enter right pin & choose option again.\n"<<endl;
			}
		}
		void bank::withdrawl()
		{
			int a;
			cout<<"enter amount to withdraw: "<<endl;
			cin>>a;
			
			tot=tot-a;
			cout<<"please collect your cash.\nRemaining balance is: "<<tot<<endl;
			cout<<"\n"<<endl;
		}
		void bank::hi2(){
		cout<<"press 1 for go to login page."<<endl;
		cin>>n;
		if(n==1){
			
			
			      login();
			     
	     	      
	     	
		        }
		    	
		
		else{   
		        
				cout<<"invalid choice."<<endl;
				cout<<"retry."<<endl;
				hi2();
		 }
     }
class atm:public bank{
	public: 
	char ch;
	int r;
	int hi(){
	cout<<"press 1 for enter the atm "<<endl;
		cin>>r;
		if(r==1){
			while(r==1) {
			 cout<<"Enter your choice.\npress E for English.\npress H for Hindi"<<endl;
	      	 cin>>ch;
			 switch(ch){
			 case 'e':	
			      cout<<"                ****welcome user****                   \n"<<endl;
		          hi2();
			      r=0;
	     	      break;
	     	 case 'h':
	    	     cout<<"hindi is unavailible for now we are working on this , please choose E for english."<<endl;
	    	     hi();
	    	 	 r=0;
			     break;
		        }
		    }	
    	}
    	else{   
		        
				cout<<"Invalid choice."<<endl;
				cout<<"Please retry "<<endl;
				hi();
		 }
    }
}; 
class atm3:public bank{
	public:
	int hi3(){
     	char choice;
     	int pi;
	    while(1){
	 		cout<<"Enter your choice."<<endl;
			cout<<"press S for showing Detail."<<endl;
			cout<<"press W for Withdraw."<<endl;
			cout<<"press B for Balance."<<endl;
			cout<<"press D for Deposite."<<endl;
			cout<<"press Q for Quit.\n"<<endl;
			cin>>choice;
			switch(choice){
				case 's':
					cout<<"please enter your pin."<<endl;
					cin>>pi;
					if(pi==1234)
					{
						acc1();
					    break;
					}
					else if (pi==5678)
					{
						acc2();
						break;
					}
					else if (pi==9012)
					{
						acc3();
						break;
					}
					else if (pi==3456)
					{
						acc4();
						break;
					}
					else if (pi==7890)
					{
						acc5();
						break;
					}
					else 
					{
						cout<<"Wrong choice "<<endl;
						cout<<"Please enter correct pin \n"<<endl;
					}
					break;
				case 'w':
					withdrawl();
					break;
				case 'b':
					showbal();
					break;
				case 'd':
					deposite();
					break;
		    	case 'q': 
		    	        
						cout<<"Account is logged out \nexiting...\n"<<endl;
						cout<<" ||    ***       thank you for visiting us        ***    || "<<endl;
						cout<<"              ***************************  "<<endl;
						exit(1);
						break;
				default :
					
					cout<<"invalid choice."<<endl;
					cout<<"please choose option again."<<endl;
					cout<<"\n"<<endl;
		  		}
			}
		}
};
int main()
{   
   cout<<"            ** Welcome to the ATM **       \n"<<endl;
	atm a;
	a.hi();
	bank b;
	atm3 d;
	d.hi3();
}