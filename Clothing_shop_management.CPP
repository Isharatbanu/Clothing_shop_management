#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


class dress
{
               public:

              char type[10];
              char size[10];
              char colour[20];
              double price;
	      double id;


  void get()
{
         cout<<"Please enter dress type:";
         cin>>type;
         cout<<"Please enter dress id:";
         cin>>id;
         cout<<"Please enter dress size:";
         cin>>size;
         cout<<"Please enter dress colour:";
         cin>>colour;
	 cout<<"Please enter dress price:";
         cin>>price;
}

void show()
{
         cout<<"Your choice is--->>"<<endl<<endl;
         cout<<"Dress type->"<<type<<endl;
         cout<<"Dress ID->"<<id<<endl;
         cout<<"Dress size->"<<size<<endl;
         cout<<"Dress colour->"<<colour<<endl;
         cout<<"Dress price->"<<price<<endl;
}
};

class add:public dress
{
public:
int m;
};

class search:public dress
{
public:
int n;

void searchmale()
{
           cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl<<endl;
           cout<<"______________ This are the options of cloths____________"<<endl<<endl;
           cout<<"1) name(Jacket)::id(99)::colour(Brown,Black)::size(L,XL,XXL)::price(1000,910)"<<endl<<endl;
           cout<<"2) name(T shirt)::id(66,34,56,100)::colour(Brown,Black,yellow,white,blue)::size(L,XL,XXL)::price(780;880;1000;910)"<<endl<<endl;
           cout<<"3) name(Suit)::id(33)::colour(Brown,Black,blue)::size(XL,XXL)::price(1000;910;800,799)"<<endl<<endl;
           cout<<"4) name(Raincoat)::id(12)::colour(Brown,Black)::size(XL,XXL)::price(500;1000;910)"<<endl<<endl;
           cout<<"5) name(Jeans)::id(18)::colour(Brown,Black)::size(L,XL,XXL)::price(1000,910)"<<endl;

}

void searchfemale()
{
           cout<<"**********************************************************"<<endl<<endl;
           cout<<"______________ This are the options of cloths____________"<<endl<<endl;
           cout<<"1) name(suit)::id(66)::colour(Brown,Black)::size(L,XL,XXL)::price(1000,910)"<<endl<<endl;
           cout<<"2) name(T shirt)::id(62,31,51,38)::colour(Brown,Black,yellow,white,blue,pink)::size(L,XL,XXL)::price(300,490,780;880;1000;910)"<<endl<<endl;
           cout<<"3) name(Tunic)::id(339)::colour(Brown,Black,blue,white)::size(L,XL,XXL)::price(1800;910;800,599)"<<endl<<endl;
           cout<<"4) name(skirt)::id(121)::colour(Brown,Black,red,yellow,green)::size(L,XL,XXL)::price(690,400,500,1000;910)"<<endl<<endl;
            cout<<"5) name(Jeans)::id(181)::colour(Brown,Black)::size(L,XL,XXL)::price(800,500,1000,910)"<<endl;

}

void searchchildren()
{
            cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
            cout<<"______________ This are the options of cloths ____________"<<endl<<endl;
	    cout<<"1) name(Frock)::id(87)::colour(Brown,Black,pink,yellow,grey)::size(s,L,XL,XXL)::price(500,1000,910)"<<endl<<endl;
	    cout<<"2) name(Circo)::id(61,334,156,10)::colour(Brown,Black,yellow,white,blue)::size(S,L,XL,XXL)::price(100,280,300,459,700;880;1000;910)"<<endl<<endl;
	    cout<<"3) name(Hoodie)::id(313)::colour(Brown,Black,blue,white)::size(XL,XXL)::price(1000;910;800,799)"<<endl<<endl;
	    cout<<"4) name(Shirt)::id(512)::colour(grey,yellow,Brown,Black)::size(S,L,XL,XXL)::price(400,500;1000,6100,9010)"<<endl<<endl;
}
};

class buy:public search
{
public:
int q,male_outfit,female_outfit,i,g,tr,ov,sk,dn;
double amt,amt_tr,amt_ov,amt_sk,amt_dn;
buy()
{
   amt=1890;
   amt_tr=3200;
   amt_ov=2400;
   amt_sk=1580;
   amt_dn=3600;
}

void coat_outfit()
{
        cout<<"Enter number of quantity:";
        cin>>q;
        cout<<" "<<endl;

if(q==1)
{
        amt=1890;
        cout<<"You have to pay ->"<<amt<<"\tRS"<<endl;
}

else if(q==2)
{
    amt=2*amt;
    cout<<"You have to pay ->"<<amt<<"\tRS"<<endl;
}

else if(q>=3)
{
    amt=((q*amt)*0.8);
    cout<<"Congratulations!!!! You get 20% discount..."<<endl;
    cout<<"You have to pay-> "<<amt<<"\tRS"<<endl;
}

}

void track_suit_outfit()
{
    cout<<"Enter number of quantity:";
    cin>>tr;
    cout<<" "<<endl;

if(tr==1)
{
  amt_tr=3200;
  cout<<"You have to pay ->"<<amt_tr<<"\tRS"<<endl;
}

else if(tr==2)
{
    amt_tr=2*amt_tr;
    cout<<"You have to pay ->"<<amt_tr<<"\tRS"<<endl;
}

else if(tr>=3)
{
    amt_tr=((tr*amt_tr)*0.7);
    cout<<"Congratulations!!!! You get 30% discount..."<<endl;
    cout<<"You have to pay-> "<<amt_tr<<"\tRS"<<endl;
}
}


void overcoat_outfit()
{
  cout<<"Enter number of quantity:";
  cin>>ov;
  cout<<" "<<endl;

if(ov==1)
{
  amt_ov=2400;
  cout<<"You have to pay ->"<<amt_ov<<"\tRS"<<endl;
}

else if(ov==2)
{
    amt_ov=2*amt_ov;
    cout<<"You have to pay ->"<<amt_ov<<"RS"<<endl;
}
else if(ov>=3)
{
    amt_ov=((ov*amt_ov)*0.6);
    cout<<"Congratulations!!!! You get 40% discount..."<<endl;
    cout<<"You have to pay-> "<<amt_ov<<"\tRS"<<endl;
}
}

void skirt_outfit()
{
  cout<<"Enter number of quantity:";
  cin>>sk;
  cout<<" "<<endl;

if(sk==1)
{
    amt_sk=1580;
    cout<<"You have to pay ->"<<amt_sk<<"\tRS"<<endl;
}

else if(sk==2)
{
    amt_sk=(2*amt_sk);
    cout<<"You have to pay ->"<<amt_sk<<"\tRS"<<endl;
}

else if(sk>=3)
{
     amt_sk=(sk*amt_sk)*0.5;
     cout<<"Congratulations!!!! You get 50% discount..."<<endl;
     cout<<"You have to pay-> "<<amt_sk<<"\tRS"<<endl;
}
}

void denim_jacket_outfit()
{
   cout<<"Enter number of quantity:";
   cin>>dn;
   cout<<" "<<endl;

if(dn==1)
{
    amt_dn=3600;
    cout<<"You have to pay ->"<<amt_dn<<"\tRS"<<endl;
}

else if(dn==2)
{
    amt_dn=2*amt_dn;
    cout<<"You have to pay ->"<<amt_dn<<"\tRS"<<endl;
}

else if(dn>=3)
{
    amt_dn=((dn*amt_dn)*0.9);
   cout<<"Congratulations!!!! You get 10% discount..."<<endl;
   cout<<"You have to pay-> "<<amt_dn<<"\tRS"<<endl;
}
}
};



void main()
{
int i,p,x,m;
textcolor(5);

{
		clrscr();
		textcolor(8);
		cout<<"-----------------------------------------\n";
                cout<< "Choose an option\n\n";
                cout<< "\n\t01. Add a product.\n";
                cout<< "\n\t02. Search any product.\n";
		cout<< "\n\t03. Buy any product.\n";
		cout<< "\n\t04. Exit.";
		cout<<"\n-----------------------------------------";
		cout<<"\n-----------------------------------------";
		cout<< "\nEnter an option :";
                cin>>i;

                if(i==1)
		   {
		   add d;
		   cout<<"\n---           --------------------------            ---";
		   cout<<"\n*_____________WELCOME TO OUR UNIQUE STORE_____________*"<<endl;
		   cout<<"---             --------------------------          ---";
		   cout<<"\nPlease enter your option 1.male 2.female 3.children-:";
		   cin>>x;
		   if(x==1)
		   {
		   cout<<"Your choosen option-->>male"<<endl;
		    d.get();
		    d.show();
		    cout<<"Your item's were added"<<endl;
		   }
		   else if(x==2)
		   {
		   cout<<"Your choosen option-->>female"<<endl;
		    d.get();
		    d.show();
		    cout<<"Your item's were added "<<endl;
		   }
		   else if(x==3)
		   {
		   cout<<"Your choosen option-->>children"<<endl;
		    d.get();
		    d.show();
		    cout<<"Your item's were added"<<endl;

		    }
		   }


		if(i==2)
		{
		  search s;
		  cout<<"Please enter 1.male 2.female 3.children--->";
		  cin>>p;
		  if(p==1)
		  {
		   s.searchmale();
		  }

		  else if(p==2)
		  {
		  s.searchfemale();
		  }
		  else if(p==3)
		  {
		  s.searchchildren();
		  }
		 }
		}

		 if(i==3)
		{
		  buy b;
		  cout<<"Please enter which type of outfit you want to buy--\n1.coat\t 2.Track-suit\t 3.overcot\t 4.skirt\t 5.denim jacket-->>";
		  cin>>m;
		  if(m==1)
		  {
		   b.coat_outfit();
		  }
		  if(m==2)
		  {
		    b.track_suit_outfit();
		  }
		  if(m==3)
		  {
		    b.overcoat_outfit();
		  }
		  if(m==4)
		  {
		     b.skirt_outfit();
		  }
		  if(m==5)
		  {
		   b.denim_jacket_outfit();
		  }

		}
		  if(i==4)
		  {
		  exit(0);
		  }
		  if(i>4)
		  {
		  cout<<"Please choose appropriate option"<<endl<<endl;
		  }


 cout<<"\nThank you!! for visiting";
getch();

}

