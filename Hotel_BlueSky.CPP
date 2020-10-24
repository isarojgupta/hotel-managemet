
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
class hotel
{       public:

int chkn;

  int muttn;
 int tbl;
 int bl;
 int p;
 int n;
 int d;
 int room_no;
 char name[30];
 char address[30];
 char phone[20];
 char room_type[20];

     public:
	void hotelname();
	void option();
	void getdata();
	void display();
	 void room();
	 void search();
	void delete_rec();
	  void readdata();
	  void update();
	  void ac();
	  void nonac();
	  void bill();
	  void bill_of_ac();
	  void bill_of_nonac();
	  void food();
	  void veg();
	  void nonveg();
	   void all_bill();
		  }h;


      void hotel::option()

      { clrscr();
	 textbackground(GREEN);
	 textcolor(BLACK);

	int choice;



		cout<<"\n\n\n\n\t\tPlease select:"<<endl;
	 cout<<"\n\t\t1.Book a Room";

	 cout<<"\n\t\t2.display";
	  sleep(1);
	cout<<"\n\t\t3.readdata from file";
	sleep(0.2);
	 cout<<"\n\t\t4.delete record";

	 cout<<"\n\t\t5.search";

	 cout<<"\n\t\t6.update";

	 cout<<"\n\t\t7.food";


	 cout<<"\n\t\t8.Bill";

	 cout<<"\n\t\t9.Total Bill";

	 cout<<"\n\t\t10.Exit";

	 cout<<"\n\t\tEnter your choice: ";

	 cin>>choice;


	   switch(choice)
	     {
	      case 1: room();
	      break;
	      case 2: display();
	     break;
	     case 3: readdata();
		     break;
	    case 4: delete_rec();

	      break;
	    case 5: search();

	      break;
	      case 6:update();
	      break;
	      case 7: food();
	      break;
	      case 8:bill();
	      break;
	      case 9:all_bill();
	      break;

	      case 10:break;
	      default:
	       {
		cout<<"\n\t\t\t\twrong keyword!!";
		cout<<"\n\n\t\t\press any key to continue:";
		getch();

	      }

		   }


			  }




	 void hotel::getdata()
		{
		textbackground(BLUE);
		textcolor(YELLOW);
		  clrscr();

		  fstream fout;
		   sleep(0.2);
		    cout<<"\n\t\t\t***CUSTOMER INFORMATION****";


			cout<<"\n\n\t\t\tCustomer Name: ";
			cin>>name;
			cout<<"\n\t\t\tEnter customer Address: ";
			 cin>>address;
			cout<<"\n\t\t\tPhone no.: ";
			cin>>phone;
			cout<<"\n\t\t\tRoom type: ";
			cin>>room_type;
			cout<<"\n\t\t\tEnter Room no.: ";
			cin>>room_no;
			cout<<"\n\t\t\tNo.of days do want to get the room: ";
			cin>>d;
			fout.open("comp.txt",ios::out|ios::app);
			fout.write((char*)&h,sizeof(h));
			cout<<"\n\n\t\t Room is Booked..";
			getch();

		   cout<<"\n\t\tpress any key to continue...";

		   fout.close();
		   clrscr();

		   option();

		   getch();
		   }

   void hotel::display()
    {
     clrscr();


	     cout<<"\n\n\t\t\t***CUSTOMER  INFORMATION***";
	     cout<<"\n\n\t\tRoom No.: "<<room_no;
	     cout<<"\n\t\tName: "<<name;
	     cout<<"\n\t\tAdress: "<<address;
	     cout<<"\n\t\tPhone  no.: "<<phone;
	     cout<<"\n\t\tRoom type: "<<room_type;
	     cout<<"\n\t\tRoom used: "<<d<<"days";


	     cout<<"\n\n\n\t press ENTER to go to main menu";
	      getch();

	      clrscr();
	      option();

		     }




	     void hotel::room()
	     {
	     int rmn;
	       clrscr();
	       cout<<"\n\t\t1.A.C-1200";
	       cout<<"\n\t\t2.Non A.C-800";

		 cout<<"\n\n\t\t\tChoose Room:  ";
		  cin>>rmn;

		      switch(rmn)
			{
			   case 1:ac();
			   break;
			   case 2:nonac();
			   break;
			   case 3:break;
			   default:
			    {
			     cout<<"\n\t\t\tWRONG KEY";
			     cout<<"\n\t\tPress ENTER for continue";
			     getch();
			     clrscr();
			     option();
			     }
			      }
				 }

	   void hotel::ac()
		    {
		       int chargeac=1200;
		     clrscr();

		  cout<<"\n\t\tprice: "<<chargeac<<" /day";
		  cout<<"\n\n\t\t**SERVICE**";
		  cout<<"\n\t\t----------------";
		  cout<<"\n\t1.FREE WI-FI";
		  cout<<"\n\t2.FREE BREAK-FAST";
		  cout<<"\n\t\t FOR BOOK AC ROOM";

		   cout<<"\n\t\t\t\tpress  ENTER";
		      getch();
		      getdata();

		      }
	      void hotel::nonac()
		{

		   int chargenonac=800;
		   clrscr();



		   cout<<"\n\t\tprice: "<<chargenonac<<" /day";
			  cout<<"\n\n\t\t**SERVICE**";
		  cout<<"\n\t\t----------------";
		  cout<<"\n\t1.FREE WI-FI";
		  cout<<"\n\t2.FREE BREAK-FAST";
		  cout<<"\n\t\t FOR BOOK NON AC ROOM";

		  cout<<"\n\n\t\t\t\tpress  ENTER";


		   getch();
		   getdata();

		   }
		   void hotel::bill()
		    {
			  int k;

		       clrscr();
		       cout<<"\n\t\twhich type of room chhose by customer:";

			cout<<"\n\n\t\t1.ac";
			cout<<"\n\t\t2.non ac";
			 cin>>k;
		       switch(k)
		       {
			case 1:bill_of_ac();
			 break;
			 case 2:bill_of_nonac();
			  break;
			 case 3:break;
			  default:
			     { cout<<"\n\t\tSORRY no bill has found";
			     }
			     }
			       }
			     void hotel::bill_of_ac()
			  {
			  clrscr();

			  cout<<"\n\n\t\t\t\t***BILL***";
		     n=(d*1200);


	     cout<<"\n\n\t\t\t***CUSTOMER  INFORMATION***";
	     cout<<"\n\n\t\tRoom No.: "<<room_no;
	     cout<<"\n\t\tName: "<<name;
	     cout<<"\n\t\tAdress: "<<address;
	     cout<<"\n\t\tPhone  no.: "<<phone;
	     cout<<"\n\t\tRoom type: "<<room_type;
	     cout<<"\n\t\tRoom used: "<<d<<"days";



		      cout<<"\n\n\t\t\tTotal = "<<n;


		      getch();

		      clrscr();
		      option();

		      }

			     void hotel::bill_of_nonac()
			     {

		       cout<<"\n\n\t\t\t\t***BILL***";
		       p=(d*800);



	     cout<<"\n\n\t\t\t***CUSTOMER  INFORMATION***";
	     cout<<"\n\n\t\tRoom No.: "<<room_no;
	     cout<<"\n\t\tName: "<<name;
	     cout<<"\n\t\tAdress: "<<address;
	     cout<<"\n\t\tPhone  no.: "<<phone;
	     cout<<"\n\t\tRoom type: "<<room_type;
	     cout<<"\n\t\tRoom used: "<<d<<"days";




		       cout<<"\n\n\t\t\tTotal="<<p;



		      clrscr();
		      option();
		      }
	     void hotel::readdata()
	       {
		  clrscr();
		 ifstream rp;
		 rp.open("comp.txt",ios::in);
		  cout<<"\n\t\t\t***LIST OF CUSTOMER DETAILS*****";
		  cout<<"\n\n\tName "<<"\t\tPhone"<<"\t\tAddress"<<"\t\tRoom no."<<endl;
		 rp.read((char*)&h,sizeof(h));

		 while(!rp.eof())
		   {
		      cout<<"\t"<<name<<"\t\t"<<phone<<"\t\t"<<address<<"\t\t"<<room_no<<endl;

			    rp.read((char*)&h,sizeof(h));


		    }



		    rp.close();
		    getch();

		   clrscr();
		   option();
		    }

		  void hotel::food()
		    { clrscr();
		       int kk;
		      cout<<"\n\n\t\t***FOOD MENU*****";
		      cout<<"\n\t-----------------------";
		       cout<<"\n\n\t\t1.veg";
		       cout<<"\n\t\t2.nonveg";
		       cin>>kk;
		       switch(kk)
			 {
			  case 1:veg();
			  break;
			  case 2:nonveg();
			  break;
			  case 3:break;
		  default:
			   {
			    cout<<"\n\n\t\twrong key!!!";
			    cout<<"\n\t\t\tpress ENTER for continue";
			    getch();
			    }
			    getch();
			    }
			      }

			    void hotel::veg()
			      {   clrscr();
			      fstream fg;
			      fg.open("comp.txt",ios::out|ios::app);
				 int pnr;
				  int chl=60;
				  int chk;

			      int pn=100;

			       cout<<"\n\n\tpaneer per plate: "<<pn<<endl;

				cout<<"\n\tchhole per plate: "<<chl<<endl;
				cin>>pnr;
				cin>>chk;
				   bl=(pnr*pn)+(chl*chk);
				 getch();
				 cout<<"\n\n\n\t\t\t\tBILL: "<<bl;
				 fg.write((char*)&h,sizeof(h));
				 getch();
				   fg.close();
				      clrscr();

				    option();
				       }

				       void hotel::nonveg()
				       {
				    int ckn=200;
				     int mtn=290;
					clrscr();




					cout<<"\n\n\t\tchiken per plate: "<<ckn<<endl;

					 cout<<"\n\t\tmutton per plate: "<<mtn<<endl;
						cin>>chkn;
					 cin>>muttn;
					 tbl=(ckn*chkn)+(mtn*muttn);
					 cout<<"\n\n\n\n\t\tBILL: "<<tbl;

					 getch();

					 option();

					 }

				    void hotel::all_bill()
				    {  int tbill;
				      clrscr();
				      fstream fh;
				      tbill=(n+bl+p+tbl);
				      cout<<"\n\n\t\tTotal bill= "<<tbill;
				       fh.open("comp.txt",ios::in);
				       fh.write((char*)&h,sizeof(h));
				       fh.close();
				      getch();
				      clrscr();
				      option();
				      getch();
				     }


void hotel::delete_rec()
{ char ch[30];

  clrscr();
 cout<<"\n\n\t\tEnter the name for deleted: ";
 cin>>ch;
ifstream fin;
ofstream fout;
 fin.open("comp.txt",ios::in);

 fout.open("temp.txt",ios::out);
while(!fin.eof())
{
 if(strcmp(ch,name))

fout.write((char*)&h,sizeof(h));
fin.read((char*)&h,sizeof(h));


}

fin.close();
fout.close();

 cout<<"\n\n\t\tdata deleted";
 if(ch==0)
cout<<"\n Sorry room no. not found ...!!";


remove("comp.txt");
rename("temp.txt","comp.txt");
getch();
option();
}
void hotel::update()
{
   clrscr();
   char ch[35];

      fstream file;
	cout<<"enter nme to b updated";
	   cin>>ch;
	   file.open("comp.txt",ios::in|ios::out|ios::ate);
	   file.seekg(0);
	   file.read((char*)&h,sizeof(h));
	   while(!file.eof())
	   {
	      if(!strcmp(ch,name))
		{


			cout<<"\n\n\t\t\tCustomer Name: ";
			cin>>name;
			cout<<"\n\t\t\tEnter customer Address: ";
			 cin>>address;
			cout<<"\n\t\t\tPhone no.: ";
			cin>>phone;
			cout<<"\n\t\t\tRoom type: ";
			cin>>room_type;
			cout<<"\n\t\t\tEnter Room no.: ";
			cin>>room_no;
			cout<<"\n\t\t\tNo.of days do want to get the room: ";
			cin>>d;

		 file.seekp(file.tellp()-sizeof(h));
		 file.write((char*)&h,sizeof(h));
			 }
		 file.read((char*)&h,sizeof(h));



			 }
		file.close();
			    cout<<"\n\n\t\tBill is updated";
			     getch();
			     option();
			}


	    void hotel::search()
	  {
	      clrscr();
		 fstream f;
	     int c=0;
	     char rec[20];
	     cout<<"\n\t\tEnter the name to find details: ";
	     cin>>rec;

	      f.open("comp.txt",ios::in);
		f.read((char*)&h,sizeof(h));

	     while(!f.eof())
	      {
	      if(!strcmp(rec,name))
	     {
	       cout<<"\n\tname: "<<name<<"\n\tphone: "<<phone<<"\n\troom no.:"<<room_no<<"\n\tRoom Type: "<<room_type;
		c++;
		break;
		}
		f.read((char*)&h,sizeof(h));
		  }

		  f.close();
		  getch();
		  option();
		  }

	  void main()

	  {       textmode(80);
		  textbackground(BROWN);
		  textcolor(BLACK);
		  char user[30],pass[20],ch;
		  int i;
		    clrscr();
		 sleep(1);
	  cout<<"\n\t\t-------------------------------------";
       cout<<"\n\t\t***********HOTEL BLUESKY*************";

	cout<<"\n\t\t-----------------------------------";

	   cout<<"\n\n\n\n\t\t___________________________";
	  cout<<"\n\t\t HOTEL MANAGEMENT PROGRAM";
	  cout<<"\n\t\tDoveloped by- Saroj Gupta";
	  cout<<"\n\t\tBranch- Computer Science Engineering";
	  cout<<"\n\t\tEnroll. no.- 0187CS181128";
	  cout<<"\n\t\tGuided by-Oshin Rowlley,Neha Ghosh";

	  cout<<"\n\t\t___________________________";

	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tplease press ENTER";
	  getch();
		 clrscr();
		 cout<<"\n****Manager information****";

		 cout<<"\nEnter the userid:";
		cin>>user;
		cout<<"\nEnter the password:";
		for(i=0;i<6;i++)
		  {
		   ch=getch();
		   pass[i]=ch;
		   cout<<"*";
		   }
		pass[i]=' ';
		cout<<"\nYour password is:";
		for(i=0;i<6;i++)
		  {
		    cout<<pass[i];
		    }


		  getch();

	       h.option();
	       getch();
	       }



















































































































































































