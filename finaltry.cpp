#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
         int num;
         
         while(num!=5)
         {
         	system("cls");
         	cout << endl << endl;
              cout <<"Welcome to the ice cream store!" << endl;
              cout<<"\n";
              cout<<"1. MENU "<<endl;
              cout<<"2. ADD STOCK "<<endl;
              cout<<"3. SEARCH ITEMS "<<endl;
              cout<<"4. ABOUT US"<<endl;
              cout<<"5. EXIT"<<endl;
              cout<<'\n';
              cout<<"ENTER YOUR CHOICE"<<endl;
              cout<<'\n';
              cin>>num;
              cout<<'\n';

	switch(num)
	{
	  case 1:
		{
			ifstream obj,obj1;
                     obj.open("item.txt");
                     obj1.open("price.txt");
                     string s,COLD;char choice,kitkat,flavor;
                     int a,nkit=0,lTotal=0,ndairy=0,dTotal=0;
                     

   
                  cout << endl << endl;
                  cout <<"Welcome to the ice cream store!" << endl;
        

   	
        	    cout<<setw(20)<<setfill(' ')<<"MENU"<<endl;
	           getline(obj,s);
	           obj1>>a;
	           while(obj)
	                     {
 	                       cout<<'\t'<<setw(13)<<setfill(' ')<<s<<setw(5)<<setfill(' ')<<a<<'\n';
 	                       getline(obj,s);
 	                       obj1>>a;
	                     }
	                      obj.close();
                 	        obj1.close();
                           	int k=0,kk=0;
	                      string arr[100];
	                       int prr[100];	
                      cout <<"ENTER ITEMS YOU WANT 0 to exit"<<endl;
                      string x,y;
                      int z,totalprice=0;
                      obj.open("item.txt");
                      obj1.open("price.txt");
                      while(x!="0")
                                  {
                                   obj.seekg(0,ios::beg);
                                  	obj1.seekg(0,ios::beg);
        	                     cin>>x;
        	                     getline(obj,y);
	                            obj1>>z;
	
	                            while(obj) 
                            	         {
		                              if(x==y)
		                                     { 
		                                      arr[k++]=x;
		                                      prr[kk++]=z;			
		                                      totalprice+=z;
		                                      break;
		                                     }
		
	 	                              getline(obj,y);
 		                              obj1>>z;
        		         
	                                     }
                                  }
     
                cout << endl << "Snacks!" << endl << "------------------------------------" << endl;
                cout << "Would you like KITKAT?=25 (Y or N): ";
                cin >> choice;
                if(choice=='Y')
                   {
                     cout << "How many kitkat would you like?: ";
                     cin >> nkit;
                     lTotal = 25 * nkit;
                     totalprice+=lTotal;
            
                    }
		 cout << "Would you like DAIRY MILK?=30 (Y or N): ";
               cin >> choice;
               if(choice=='Y')
                   {
                     cout << "How many DAIRY MILK would you like?: ";
                     cin >> ndairy;
                     dTotal = 30 * ndairy;
                      totalprice+=dTotal;
            
                    }
                     cout << "Receipt: " << endl;
                     for(int i=0;i<k;i++)
                                       { 
                                   	cout<<arr[i]<<ends<<prr[i]<<endl;
                                       }
        
               cout << nkit << " KITKAT = $" << lTotal << endl<<endl;
               cout << ndairy << " DAIRY MILK = $" << dTotal << endl;
               cout<<"TOTAL PRICE = "<<totalprice<<endl;
               system("PAUSE");
        		
	        }

           	break;		
	
	  case 2:
	 {
		ofstream obj("item.txt",ios::app);
		ofstream obj1("price.txt",ios::app);
	               cout<<"ENTER THE NUMBER OF ITEMS TO ADD !!";
	               int n;
	               cin>>n;
	               string itemName;
	               int price;
	               for(int i=0;i<n;i++)
	               {
	               	cin>>itemName;
			       cin>>price;
			       obj<<itemName<<"\n";
			       obj1<<price<<"\n";		
		        }
		       obj.close();
		       obj1.close();
	       break;	
	 }
	 case 3:
	 {
		ifstream obj("item.txt");
		ifstream obj1("price.txt");
		string srh;
		while(srh!="0")
		{
		cout<<"ENTER THE NAME OF ITEM YOU WANT TO SEARCH, O TO EXIT"<<endl;
		cin>>srh;
		string iname;
		int pname,counter=0;
		obj>>iname;
		obj1>>pname;
		while(obj)
		{
			if(srh==iname)
			{
				cout<<iname<<pname;
				counter=1;
				break;
			}
			obj>>iname;
			obj1>>pname;
		}
		if(counter==0&&srh!="0")
		{
			cout<<"NOT FOUND";
		}
		system("PAUSE");
		}
		obj.close();
		obj1.close();
		break;
	 }
	case 4:
	
	
             {
             	cout<<"\nBHUMI ICECREAM PARLOR"<<endl<<"NEW ICECREAM FLAVOR AVAILABLE"<<endl<<"ORDER TAKEN FOR ALL KIND OF PARTY"<<"SPECIAL:-MATKA KULFI"<<endl<<"FOR FURTHER MORE DETAILS:"<<endl<<"CONTACT-KUSHAL ANJANA"<<endl<<"MO.7440746305"<<endl<<endl<<"THANKS FOR VISITING"<<endl<<endl;
	      }
      system("PAUSE");
       break;
	default:
		if(num!=5)
		cout<<"WRONG CHOICE ENTERED"<<endl;
		system("PAUSE");   
       
	 }
        }	
        
}

