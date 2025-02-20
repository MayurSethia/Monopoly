#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

struct space
{
	int onumber;
	char colour[20];
	char pname[30];
	int cost;
	int rent[5];
	int chouse;
	int h,coh[6],max;
	char ownership[10];
	space()
	{       strcpy(colour,"BLACK");
		onumber=6;
		strcpy(ownership,"Bank");
		h=0;
		max=3;
		coh[1]=coh[0]=coh[2]=coh[3]=coh[4]=coh[5]=0;
	}


}s[40];
struct player
{
	char name[30];
	int credit;
	int assets,noh;

	int position;
	int status;
	int front,rear;
	int c;
	int x,y;
	int net;
	char sym;


	void in();


	void out()
	{
		cout<<"The name of the player is:";
		cout<<name<<endl;
		cout<<"The remaining credits are:";
		cout<<credit<<endl;
		cout<<"The player's current assets are:";
		cout<<assets<<endl;
		cout<<"The net worth of the player is:";
		cout<<net<<endl;
		cout<<"the position of the player is:"<<position<<endl;
	}
}p[5];
void player::in()
	{
		cout<<"enter player name:";
		gets(name);

		credit=15000;

		cout<<"the starting credits are:"<<credit<<endl;
		assets=0;
		net=assets+credit;
		status=0;
		c=0;
		cout<<"enter player symbol:";
		cin>>sym;
	}

void boardlayout()
{
	strcpy(s[0].pname,"Start");
	s[0].rent[0]=0;
	s[0].rent[1]=0;
	s[0].rent[2]=0;
	s[0].rent[3]=0;
	s[0].rent[4]=0;
	s[0].cost=0;
	strcpy(s[0].colour,"BLACK");

	strcpy(s[10].pname,"Just visiting/Jail");
	strcpy(s[10].colour,"BLACK");
	s[10].rent[0]=s[10].rent[1]=s[10].rent[2]=s[10].rent[3]=s[10].rent[4]=s[10].cost=0;


	strcpy(s[2].pname,"Quest");
	s[2].rent[0]=s[2].rent[1]=s[2].rent[2]=s[2].rent[3]=s[2].rent[4]=s[2].cost=0;
	strcpy(s[7].colour,"BLACK");


	strcpy(s[7].pname,"Quest");
	s[7].rent[0]=s[7].rent[1]=s[7].rent[2]=s[7].rent[3]=s[7].rent[4]=s[7].cost=0;
	strcpy(s[7].colour,"BLACK");


	strcpy(s[17].pname,"Quest");
	s[17].rent[0]=s[17].rent[1]=s[17].rent[2]=s[17].rent[3]=s[17].rent[4]=s[17].cost=0;
	strcpy(s[17].colour,"BLACK");


	strcpy(s[22].pname,"Quest");
	s[22].rent[0]=s[22].rent[1]=s[22].rent[2]=s[22].rent[3]=s[22].rent[4]=s[22].cost=0;
	strcpy(s[22].colour,"BLACK");


	strcpy(s[20].pname,"Free Space");
	strcpy(s[20].colour,"BLACK");
	s[20].rent[0]=s[20].rent[1]=s[20].rent[2]=s[20].rent[3]=s[20].rent[4]=s[20].cost=0;


	strcpy(s[30].pname,"Go To Jail");
	strcpy(s[30].colour,"BLACK");
	s[30].rent[0]=s[30].rent[1]=s[30].rent[2]=s[30].rent[3]=s[30].rent[4]=s[30].cost=0;


	strcpy(s[33].pname,"Quest");
	s[33].rent[0]=s[33].rent[1]=s[33].rent[2]=s[33].rent[3]=s[33].rent[4]=s[33].cost=0;
	strcpy(s[33].colour,"BLACK");


	strcpy(s[36].pname,"Quest");
	s[36].rent[0]=s[36].rent[1]=s[36].rent[2]=s[36].rent[3]=s[36].rent[4]=s[36].cost=0;
	strcpy(s[36].colour,"BLACK");


	strcpy(s[4].pname,"Tax");
	s[4].rent[0]=s[4].rent[1]=s[4].rent[2]=s[4].rent[3]=s[4].rent[4]=s[4].cost=0;
	strcpy(s[4].colour,"BLACK");

	strcpy(s[38].pname,"Tax");
	s[38].rent[0]=s[38].rent[1]=s[38].rent[2]=s[38].rent[3]=s[38].rent[4]=s[38].cost=0;
	strcpy(s[38].colour,"BLACK");


	strcpy(s[1].colour,"BROWN");
	strcpy(s[1].pname,"BROWN TREE");
	s[1].cost=600;
	s[1].rent[0]=100;
	s[1].rent[1]=300;
	s[1].rent[2]=900;
	s[1].rent[3]=1600;
	s[1].rent[4]=2500;
	s[1].chouse=500;
	s[1].max=2;

	strcpy(s[3].colour,"BROWN");
	strcpy(s[3].pname,"COLGATE");
	s[3].cost=600;
	s[3].rent[0]=200;
	s[3].rent[1]=600;
	s[3].rent[2]=1800;
	s[3].rent[3]=3200;
	s[3].rent[4]=4500;
	s[3].chouse=500;
	s[3].max=2;

	strcpy(s[6].colour,"LIGHT BLUE");
	strcpy(s[6].pname,"MINI-SOU");
	s[6].cost=1000;
	s[6].rent[0]=300;
	s[6].rent[1]=900;
	s[6].rent[2]=2700;
	s[6].rent[3]=4000;
	s[6].rent[4]=5500;
	s[6].chouse=500;

	strcpy(s[8].colour,"LIGHT BLUE");
	strcpy(s[8].pname,"MOCHI");
	s[8].cost=1000;
	s[8].rent[0]=300;
	s[8].rent[1]=900;
	s[8].rent[2]=2700;
	s[8].rent[3]=4000;
	s[8].rent[4]=5500;
	s[8].chouse=500;

	strcpy(s[9].colour,"LIGHT BLUE");
	strcpy(s[9].pname,"METRO");
	s[9].cost=1200;
	s[9].rent[0]=400;
	s[9].rent[1]=1000;
	s[9].rent[2]=3000;
	s[9].rent[3]=4500;
	s[9].rent[4]=6000;
	s[9].chouse=500;

	strcpy(s[11].colour,"PINK");
	strcpy(s[11].pname,"BURGER KING");
	s[11].cost=1400;
	s[11].rent[0]=500;
	s[11].rent[1]=1500;
	s[11].rent[2]=4500;
	s[11].rent[3]=6250;
	s[11].rent[4]=7500;
	s[11].chouse=1000;

	strcpy(s[13].colour,"PINK");
	strcpy(s[13].pname,"TACO BELL");
	s[13].cost=1400;
	s[13].rent[0]=500;
	s[13].rent[1]=1500;
	s[13].rent[2]=4500;
	s[13].rent[3]=6250;
	s[13].rent[4]=7500;
	s[13].chouse=1000;


	strcpy(s[14].colour,"PINK");
	strcpy(s[14].pname,"STARBUCKS");
	s[14].cost=1600;
	s[14].rent[0]=600;
	s[14].rent[1]=1800;
	s[14].rent[2]=5000;
	s[14].rent[3]=7000;
	s[14].rent[4]=9000;
	s[14].chouse=1000;


	strcpy(s[16].colour,"ORANGE");
	strcpy(s[16].pname,"NIKE");
	s[16].cost=1800;
	s[16].rent[0]=700;
	s[16].rent[1]=2000;
	s[16].rent[2]=5500;
	s[16].rent[3]=7500;
	s[16].rent[4]=9500;
	s[16].chouse=1000;


	strcpy(s[18].colour,"ORANGE");
	strcpy(s[18].pname,"MONT BLANC");
	s[18].cost=1800;
	s[18].rent[0]=700;
	s[18].rent[1]=2000;
	s[18].rent[2]=5500;
	s[18].rent[3]=7500;
	s[18].rent[4]=9500;
	s[18].chouse=1000;


	strcpy(s[19].colour,"ORANGE");
	strcpy(s[19].pname,"SUPER DRY");
	s[19].cost=2000;
	s[19].rent[0]=800;
	s[19].rent[1]=2200;
	s[19].rent[2]=6000;
	s[19].rent[3]=8000;
	s[19].rent[4]=10000;
	s[19].chouse=1000;


	strcpy(s[21].colour,"RED");
	strcpy(s[21].pname,"FOSSIL");
	s[21].cost=2200;
	s[21].rent[0]=900;
	s[21].rent[1]=2500;
	s[21].rent[2]=7000;
	s[21].rent[3]=8750;
	s[21].rent[4]=10500;
	s[21].chouse=1500;


	strcpy(s[23].colour,"RED");
	strcpy(s[23].pname,"TISSOT");
	s[23].cost=2200;
	s[23].rent[0]=1800;
	s[23].rent[1]=2500;
	s[23].rent[2]=7000;
	s[23].rent[3]=8750;
	s[23].rent[4]=10500;
	s[23].chouse=1500;


	strcpy(s[24].colour,"RED");
	strcpy(s[24].pname,"FERRARI");
	s[24].cost=2400;
	s[24].rent[0]=1000;
	s[24].rent[1]=3000;
	s[24].rent[2]=7500;
	s[24].rent[3]=9250;
	s[24].rent[4]=11000;
	s[24].chouse=1500;


	strcpy(s[26].colour,"YELLOW");
	strcpy(s[26].pname,"LAMBORGHINI");
	s[26].cost=2600;
	s[26].rent[0]=1100;
	s[26].rent[1]=3300;
	s[26].rent[2]=8000;
	s[26].rent[3]=9700;
	s[26].rent[4]=11500;
	s[26].chouse=1500;


	strcpy(s[27].colour,"YELLOW");
	strcpy(s[27].pname,"TESLA");
	s[27].cost=2600;
	s[27].rent[0]=1100;
	s[27].rent[1]=2000;
	s[27].rent[2]=3300;
	s[27].rent[3]=8000;
	s[27].rent[4]=11500;
	s[27].chouse=1500;


	strcpy(s[29].colour,"YELLOW");
	strcpy(s[29].pname,"McLAREN");
	s[29].cost=2800;
	s[29].rent[0]=1200;
	s[29].rent[1]=3600;
	s[29].rent[2]=8500;
	s[29].rent[3]=10250;
	s[29].rent[4]=12000;
	s[29].chouse=1500;


	strcpy(s[31].colour,"GREEN");
	strcpy(s[31].pname,"AMAZON");
	s[31].cost=3000;
	s[31].rent[0]=1300;
	s[31].rent[1]=3900;
	s[31].rent[2]=9000;
	s[31].rent[3]=11000;
	s[31].rent[4]=12750;
	s[31].chouse=2000;


	strcpy(s[32].colour,"GREEN");
	strcpy(s[32].pname,"APPLE");
	s[32].cost=3000;
	s[32].rent[0]=1300;
	s[32].rent[1]=3900;
	s[32].rent[2]=8500;
	s[32].rent[3]=10250;
	s[32].rent[4]=12750;
	s[32].chouse=2000;


	strcpy(s[34].colour,"GREEN");
	strcpy(s[34].pname,"GUCCI");
	s[34].cost=3200;
	s[34].rent[0]=1500;
	s[34].rent[1]=4500;
	s[34].rent[2]=10000;
	s[34].rent[3]=12000;
	s[34].rent[4]=14000;
	s[34].chouse=2000;

	strcpy(s[37].colour,"DARK BLUE");
	strcpy(s[37].pname,"BHAVANS");
	s[37].cost=3500;
	s[37].rent[0]=1750;
	s[37].rent[1]=5000;
	s[37].rent[2]=11000;
	s[37].rent[3]=13000;
	s[37].rent[4]=15000;
	s[37].chouse=2000;
	s[37].max=2;


	strcpy(s[39].colour,"DARK BLUE");
	strcpy(s[39].pname,"MARVEL");
	s[39].cost=4000;
	s[39].rent[0]=2000;
	s[39].rent[1]=6000;
	s[39].rent[2]=14000;
	s[39].rent[3]=17000;
	s[39].rent[4]=20000;
	s[39].chouse=2000;
	s[39].max=2;


	strcpy(s[5].colour,"WHITE");
	strcpy(s[5].pname,"KINGCROSS St.");
	s[5].cost=2000;
	s[5].rent[0]=250;
	s[5].rent[1]=500;
	s[5].rent[2]=1000 ;
	s[5].rent[3]=2000;
	s[5].chouse=0;


	strcpy(s[15].colour,"WHITE");
	strcpy(s[15].pname,"MARLEYBONE St.");
	s[15].cost=2000;
	s[15].rent[0]=250;
	s[15].rent[1]=500;
	s[15].rent[2]=1000;
	s[15].rent[3]=2000;
	s[15].chouse=0;


	strcpy(s[25].colour,"WHITE");
	strcpy(s[25].pname,"FENCHURCH St.");
	s[25].cost=2000;
	s[25].rent[0]=250;
	s[25].rent[1]=500;
	s[25].rent[2]=1000;
	s[25].rent[3]=2000;
	s[25].chouse=0;


	strcpy(s[35].colour,"WHITE");
	strcpy(s[35].pname,"NYC St.");
	s[35].cost=2000;
	s[35].rent[0]=250;
	s[35].rent[1]=500;
	s[35].rent[2]=1000;
	s[35].rent[3]=2000;
	s[35].chouse=0;


	strcpy(s[28].colour,"GOLD");
	strcpy(s[28].pname,"ELECTRIC Co.");
	s[28].cost=1500;
	s[28].rent[0]=0;
	s[28].rent[1]=300;
	s[28].rent[2]=700;
	s[28].chouse=0;


	strcpy(s[12].colour,"GOLD");
	strcpy(s[12].pname,"WATER WORKS");
	s[12].cost=1500;
	s[12].rent[0]=0;
	s[12].rent[1]=300;
	s[12].rent[2]=700;
	s[12].chouse=0;

	}

void move(int n)
	{
	clrscr();
	int i,m;
	char a[5];


		cout<<"_";
		for(int gg=0;gg<55;gg++)
			cout<<"_";
			cout<<endl;

		for(int xj=0;xj<22;xj++)
		{
		for(int xi=0;xi<11;xi++)
			{


			 strcpy(a,"     ");


			for(i=1;i<n+1;i++)
			{

		if(p[i].position>=0&&p[i].position<11)
		{
		p[i].x=10-p[i].position;
		p[i].y=20;
		}
		else if(p[i].position>10 && p[i].position<20)
		{
		p[i].x=0;
		p[i].y=(20-p[i].position)*2;
		}
		else if(p[i].position>19 && p[i].position<30)
		{
		p[i].x=p[i].position-20;
		p[i].y=0;
		}
		else if(p[i].position>29 && p[i].position<40)
		{
		p[i].x=10;
		p[i].y=(p[i].position-30)*2;
		}

			if(p[i].x==xi&&p[i].y==xj)
			a[i]=p[i].sym;
			}

			if(xj==0||xj==20)
			{

			cout<<"|"<<a[1]<<a[2]<<a[3]<<a[4];

			if((xj==0||xj==20)&&xi==10)
			cout<<"|";

			}

			else if(xj==1||xj==21)
			{
			cout<<"|____";
			if(xj==1&&xi==10)
			cout<<"|";
			else if(xj==21&&xi==10)
			cout<<"| <-GO";
			}
			else if((xi==0||xi==10)&&xj%2!=0)
			cout<<"|____|";
			else if(xi==0||xi==10)
			cout<<"|"<<a[1]<<a[2]<<a[3]<<a[4]<<"|";
			else if(xi==2&&xj!=19)
			cout<<"    ";
			else if(xj==19&&xi>0&&xi<11&&xi!=8)
			cout<<"_____";
			else if(xj==19&&xi==8)
			cout<<"____";
			else
			cout<<"     ";


		  }
		  cout<<endl;
	      }
	   gets(a);
	}

int count(int i)
  {
	int c=0,d,x=p[i].credit;
	while(x!=0)
	{
	       d=x%10;
	       c++;
	       x/=10;
	}
	if(p[i+1].credit==0)
	return(0);
	else
	  return(c);

  }

 void tables(int x)
  {
       clrscr();
	cout<<"___________________________________INFORMATION__________________________________";
	cout<<"|     PLAYER 1      |     PLAYER 2      |      PLAYER 3     |     PLAYER 4     |";
	cout<<"|===================|===================|===================|==================|";
	cout<<"|NAME:              |NAME:              |NAME:              |NAME:             |";
	cout<<"|";
	for( int i=0;i<4;i++)
	{
		int ch=strlen(p[i+1].name);
		for(int j=19;j>=0;j--)
		{
			if(ch==j&&i<3)
			cout<<p[i+1].name<<setw(20-j)<<"|";
			else if(i==3&&ch==j)
			cout<<p[i+1].name<<setw(19-j)<<" |";
		 }

	}

	cout<<"|CREDITS:           |CREDITS:           |CREDITS:           |CREDITS:          |";
	cout<<"|";
	for( i=0;i<4;i++)
	{

	    int o=count(i+1);

		for(int k=6;k>=0;k--)
		{
		if(i<3)
			{
			if(p[i+1].credit==0)
			{
				cout<<p[i+1].credit<<setw(19)<<"|";
				break;
			}


			else if(p[i+1].credit>9999)
			{
				cout<<p[i+1].credit<<setw(15)<<"|";
				break ;
			}
			else
			{
				cout<<p[i+1].credit<<setw(16)<<"|";
				break;
			}
			}
		else if(i==3)
			{
			if(p[i+1].credit==0)
			{
				cout<<p[i+1].credit<<setw(19)<<"||";
				break;
			}


			else if(p[i+1].credit>9999)
			{
				cout<<p[i+1].credit<<setw(15)<<"||";
				break ;
			}
			else
			{
				cout<<p[i+1].credit<<setw(16)<<"||";
				break;
			}
			}
		}

	}
	cout<<"NET:               |NET:               |NET:               |NET:              |";
	cout<<"|";
		for( i=0;i<4;i++)
	{

	    int o=count(i+1);

		for(int k=6;k>=0;k--)
		{
		if(i<3)
		{
		if(p[i+1].credit==0)
			{
				cout<<p[i+1].net<<setw(19)<<"|";
				break;
			}
			  else
			  {

				cout<<p[i+1].net<<setw(21-k)<<"|";
				break ;

			  }
		}
		else if(i==3)
		{
			if(p[i+1].credit==0)
			{
				cout<<p[i+1].net<<setw(19)<<"||";
				break;
			}
			  else
			  {

				cout<<p[i+1].net<<setw(21-k)<<"||";
				break ;

			  }
		}

		}

	}
	cout<<"PROPERTIES:        |PROPERTIES:        |PROPERTIES:        |PROPERTIES:       |";

	int a[4][28];
	int c;
	for(i=0;i<4;i++)
	for(int n=0;n<28;n++)
	a[i][n]=0;
	for(i=1;i<5;i++)
	{
	      c=0;
		for(n=0;n<40;n++)
		{

			if(s[n].onumber==i)
				{

				       a[i-1][c++]=n;

				}

		}
	}
	int l;
	for(int j=0;j<28;j++)
	for(i=0;i<4;i++)
	if(a[i][j]==0&&a[i][j-1]!=0)
	l=j;

	for(j=0;j<l+1;j++)
	{
	cout<<"|";
	for(i=0;i<4;i++)
	{
	int jj=strlen(s[a[i][j]].pname);
	int jc=strlen(s[a[i][j]].colour);
	if(i<3)
	{
	if(i<x&&a[i][j]!=0)
	cout<<s[a[i][j]].pname<<"-"<<s[a[i][j]].colour<<setw(19-jj-jc)<<"|";
	else
	cout<<setw(20)<<"|";
	}

	else if(i==3)
	{
	if(i<x&&a[i][j]!=0)
	cout<<s[a[i][j]].pname<<setw(19-jj)<<"|";
	else
	cout<<setw(19)<<"|";
	}
	}
	}

	cout<<"|===================|===================|===================|==================|";

   }



int check(int x,int y)
	{
	if(x<y)
		{
		cout<<endl<<"INSUFFICIENT CREDIT"<<endl;
		return(1);
		}
	return(0);
	}
	void go_to_jail(int n)
	{
	cout<<endl<<"you are in jail"<<endl;
	p[n].position=10;
	p[n].status=1;
	}

void roll(int n)
	{


	int r,die_1,die_2;
	if(p[n].status==1)
		{
		cout<<endl<<p[n].name<<endl<<"enter 1 to roll die 1"<<endl;
		cin>>r;
		if(r==1)
		{
		die_1=random(6)+1;
		cout<<endl<<"you got:"<<die_1<<endl;
		}
		cout<<endl<<"enter 2 to roll die 2"<<endl;
		cin>>r;
		if(r==2)
		{
		die_2=random(6)+1;
		cout<<endl<<"you got:"<<die_2<<endl;
		}
		if(die_1==die_2)
			{
			p[n].status=0;
			p[n].c=0;
			}

		else if(p[n].c==2)
			{
			p[n].c=0;
			p[n].credit-=500;
			p[n].status=0;
			}
		else
			p[n].c++;

		}
	else
	{
	cout<<endl<<p[n].name<<endl<<"enter 1 to roll die 1"<<endl;
	cin>>r;
	if(r==1)
		{
		die_1=random(6)+1;
		cout<<endl<<"you got:"<<die_1<<endl;
		}
	cout<<endl<<"enter 2 to roll die 2"<<endl;
	cin>>r;
	if(r==2)
		{
		die_2=random(6)+1;
		cout<<endl<<"you got:"<<die_2<<endl;
		}




	p[n].position+=die_1+die_2;
	if(p[n].position>40)
		{
		p[n].position=p[n].position-40;
			if(p[n].position==0)
			p[n].credit+=2000;
		p[n].credit+=2000;
		cout<<endl<<"you passed go and collected 2000"<<endl;
		}
	}
	if(p[n].position==30)
	go_to_jail(n);


	}


struct action
	{
	void buy(int m)
		{
		cout<<endl<<"buy"<<endl;
		int n=p[m].position;
		if(check(p[m].credit,s[n].cost)==0)
			{

				{
				p[m].credit-=s[n].cost;
				s[n].onumber=m;
				p[m].assets+=s[n].cost;
				strcpy(s[n].ownership,p[m].name);
				 }

			}
			if(strcmp(s[n].colour,"GOLD")==0)
			s[n].h++;
			p[s[p[m].position].onumber].out();
			s[n].coh[m]++;
		 }
	void rent(int m)
		{
		cout<<endl<<"rent"<<endl;
		int n=p[m].position;
		if(check(p[m].credit,s[n].cost)==0)
		{
		if(s[n].onumber!=4||s[n].onumber!=m)
			{
			p[m].credit-=s[n].rent[s[n].h];
			p[m].net-=s[n].rent[s[n].h];
			p[s[n].onumber].credit+=s[n].rent[s[n].h];
			p[s[n].onumber].net+=s[n].rent[s[n].h];

			}
		else
		cout<<endl<<"the property is owned by the bank or is your own property"<<endl;
		}
		}
	void build(int m)
		{
		cout<<endl<<"build"<<endl;
		int n=p[m].position;
		if(strcmpi(s[n].colour,"white")!=0)
			{
			int h1;
			cout<<endl<<"enter the no. of houses u want to build"<<endl
			<<"YOU CAN BUILD A MAX OF 3 HOUSES [THE FOURTH HOUSE IS THE HOTEL]"<<endl
			<<"NO. OF HOUSES:";
			cin>>h1;
			if(check(p[m].credit,s[n].chouse*h1)==1)
				{
				s[n].h+=h1;
				p[m].credit-=h1*s[n].chouse;
				cout<<endl<<"house(s) built successfully !! CONGRATS!!";
				}
			}
		}
	}a;

void game(int i);

void quest(int n)
{
	randomize();
	int q=random(21)+1;
	switch(q)
	{

	case 1: cout<<" You owe back taxes. Pay 500 credits."<<endl;
		p[n].credit-=500;
		p[n].net-=500;
		break;

	case 2: cout<<" You are chosen as a mascot for your team's big game. Collect 250 credits for you services"<<endl;
		p[n].credit+=250;
		p[n].net+=250;
		break;

	case 3: cout<<"redo the houses in all your properties"<<endl;
		if(s[p[n].position].h==1)
		{

		p[n].credit-=600;
		p[n].net-=600;
		}
		else if(s[p[n].position].h==2)
		{
		p[n].credit-=1200;
		p[n].net-=1200;
		}
		else if(s[p[n].position].h==3)
		{
		p[n].credit-=1800;
		p[n].net-=1800;
	       }
		else if(s[p[n].position].h==4)
	       {
		p[n].credit-=2400;
		p[n].net-=2400;
	       }
		else
		cout<<"go ahead"<<endl;
		break;
	case 4: cout<<"you win big in a hollywood deal.collect 2000 credits"<<endl;
		 p[n].credit+=2000;
		 p[n].net+=2000;
		 break;
	case 5: cout<<" Win big at the casino.collect 1000 credist"<<endl;
		p[n].credit+=1000;
		p[n].net+=1000;
		break;
	case 6: cout<<"Take dance lessons.pay 500 credits"<<endl;
		 p[n].credit-=500;
		 p[n].net-=500;
		 break;

	case 8: cout<<"You won a reality show.Collect 100 creidts"<<endl;
		p[n].credit+=100;
		p[n].net+=100;
		break;
	case 9: cout<<"Sell yor charity tickets.Collect 100 credits"<<endl;
		 p[n].credit+=100;
		 p[n].net+=100;
		 break;
	case 10: cout<<"win the lottery.collect 1000 credits"<<endl;
		 p[n].credit+=1000;
		 p[n].net+=1000;
		 break;
	case 11: cout<<"collect 2000 credits."<<endl;
		 p[n].credit+=2000;
		 p[n].net+=2000;
		 break;
	case 12: cout<<"you are a genius.collect 500 credits"<<endl;
		 p[n].credit+=500;
		 p[n].net+=500;
		 break;
	case 13: cout<<"your city does tax evaluation."<<endl;
		if(s[p[n].position].h==1)
	       {
		p[n].credit-=500;
		p[n].net-=500;
	       }
		else if(s[p[n].position].h==2)
	       {
		p[n].credit-=1000;
		p[n].net-=1000;
	       }
		else if(s[p[n].position].h==3)
	       {
		p[n].credit-=1500;
		p[n].net-=1500;
	       }
		else if(s[p[n].position].h==4)
	       {
		p[n].credit-=2000;
		p[n].net-=2000;
	      }
		else
		cout<<"go ahead"<<endl;
		break;
	case 14:cout<<"You are playing well.Advance to GO.Collect 2000 credits"<<endl;
		p[n].credit+=2000;
		p[n].net+=2000;
		p[n].position=0;
		break;
	case 15:cout<<"splash out on a trip to mall.pay 500 credits"<<endl;
		p[n].credit-=500;
		p[n].net-=500;
		break;
	case 16:cout<<"get a tax break.collect 500 credits"<<endl;
		p[n].credit+=500;
		p[n].net+=500;
		break;
	case 17:  cout<<"summoned to jury.go back 3 spaces"<<endl;
		if(p[n].position<3)
		p[n].position=39;
		else
		p[n].position-=3;
		game(n);
		break;
	case 18: cout<<"advance to go.Collect 2000 credits"<<endl;
		p[n].position=0;
		p[n].credit+=2000;
		p[n].net+=2000;
		break;
	case 19:  cout<<"You are convicted for hit and run. go to jail"<<endl;
		p[n].position=10;
		go_to_jail(n);
		break;
	case 20:  cout<<"Make a donation.Pay 500 credits for disaster relief"<<endl;
		p[n].credit-=500;
		p[n].net-=500;
		break;
	case 7:  cout<<"Accept the position of CEO of a high-powered investment banking firm.collect a signing bonus of 1500 credits"<<endl;
		p[n].credit+=1500;
		p[n].net+=1500;
		break;
       }
}
	void display(int n)
		{
		boardlayout();
		cout<<endl<<"colour:"<<s[n].colour<<endl<<"name:"<<s[n].pname<<endl<<"cost:"<<s[n].cost<<endl<<"current rent:"<<s[n].rent[s[n].h]<<endl<<"cost of house"<<s[n].chouse<<endl<<"ownership:"<<s[n].ownership<<endl;

	}

	void game(int i)
		{
			int l=p[i].position;
			display(l);
			int ch;
			if(strcmp(s[p[i].position].pname,"Quest")==0)
			ch=4;
			else if(strcmp(s[p[i].position].ownership,"Bank")==0&&strcmp(s[p[i].position].colour,"BLACK")!=0)
			ch=1;
			else if (strcmp(s[p[i].position].ownership,p[i].name)==0 && s[p[i].position].coh[i]==s[p[i].position].max)
			ch=3;
			else if(strcmp(s[p[i].position].ownership,"Bank")!=0&&strcmp(s[p[i].position].ownership,p[i].name)!=0)
			ch=2;
			else if(strcmp(s[p[i].position].pname,"Tax")==0)
			ch=5;
			else
			ch=6;

		switch(ch)
			{
			case 1: cout<<endl<<"enter 1 if you want to buy the property"<<endl;
				int q;
				cin>>q;
				if(q==1)
				{
				a.buy(i);
				p[i].out();
				}
				else
				cout<<endl<<"next players turn"<<endl;
				break;
			case 2: a.rent(i);
				break;
			case 3: a.build(i);
				break;
			case 4: quest(i);

				break;
			case 5: cout<<endl<<"BE A NICE CITIZEN AND PAY TAX"<<endl;
				p[i].credit-=2000;
				p[i].net-=2000;

				break;
			case 6: cout<<endl<<"NO ACTIONS AVAILABLE"<<endl;
				break;

			}
		}

void main()
	{


	clrscr();
	cout<<"==========================MONOPOLY=============================="<<endl;
	cout<<"|                                                              |"<<endl;
	cout<<"|                           RULES:                             |"<<endl;
	cout<<"|                                                              |"<<endl;
	cout<<"|  1. the game starts with each player getting 15000 credits   |"<<endl;
	cout<<"|  2. each players moves with help of the dice to the assigned |"
      <<endl<<"|     spaces.                                                  |"<<endl;
	cout<<"|  3. Players keep going to the properties buy them,using your |"
      <<endl<<"|     credits.                                                 |"<<endl;
	cout<<"|  4. When a player lands on other player's property they have |"
      <<endl<<"|     to pay an assigned  rent to that player                  |"<<endl;
	cout<<"|  5. when a player lands on quest, they have to perform a     |"
      <<endl<<"|     specific task, assigned by the bank                      |"<<endl;
	cout<<"|  6. when a player lands on 'go to jail', they are sent to    |"
      <<endl<<"|     jail where either the  player gets same dice numbers or  |"
      <<endl<<"|     they wait for three chances and pay 500 credits.         |"<<endl;
	cout<<"|  7. Once a player buys three properties of the same colour it|"
      <<endl<<"|     enables him to build a house on them.This increases the  |"
      <<endl<<"|     rent of the property                                     |"<<endl;
	cout<<"|  8. The game ends when a palyer presses 9                    |"<<endl;
	cout<<"|  9. the winner of the game is decided buy the sum of the     |"
      <<endl<<"|     credit and values of their properties                    |"<<endl;
	cout<<"|                                                              |"<<endl;
	cout<<"|=========================HAFFUN GUYS :)=======================|"<<endl;
	int n,ch,l,x;
	char*up;
		cout<<endl<<"enter no.of players [upto 4]"<<endl;
		cin>>n;
	for(int i=1;i<n+1;i++)
		{
		cout<<endl<<"enter details for player "<<i<<endl;
		p[i].in();
		p[i].out();
		}
		move(n);

	      do
		{

		for(int i=1;i<n+1;i++)
			{
			cout<<endl<<"its player "<<i<<" turn"<<endl;
			move(n);
			gets(up);
			roll(i);
			gets(up);
			move(n);

			l=p[i].position;
			display(l);
		       //	gets(up);
			if(strcmp(s[p[i].position].pname,"Quest")==0)
			ch=4;
			else if(strcmp(s[p[i].position].ownership,"Bank")==0&&strcmp(s[p[i].position].colour,"BLACK")!=0)
			ch=1;
			else if (strcmp(s[p[i].position].ownership,p[i].name)==0 && s[p[i].position].h==3)
			ch=3;
			else if(strcmp(s[p[i].position].ownership,"Bank")!=0)
			ch=2;
			else if(strcmp(s[p[i].position].pname,"Tax")==0)
			ch=5;
			else
			ch=6;

		switch(ch)
			{
			case 1: cout<<endl<<"enter 1 if you want to buy the property"<<endl;
				int q;
				cin>>q;
				if(q==1)
				{
				a.buy(i);
				cout<<endl<<"Congratulations.The property has been bought"<<endl;
				}
				else
				cout<<endl<<"next players turn"<<endl;
			       //	display(p[i].position);
			       gets(up);
				break;
			case 2: a.rent(i);
			       //	p[i].out();
			       //	p[s[p[i].position].onumber].out();
				 cout<<endl<<"Oops.Better luck next time"<<endl;
				gets(up);
				break;
			case 3: a.build(i);
			       //	p[i].out();
			       //	display(p[i].position);
				break;
			case 4: quest(i);
			       //	p[i].out();
			       gets(up);
				break;

			case 5:	p[i].credit-=2000;
				p[i].net-=2000;
				cout<<endl<<"BE A NICE CITIZEN AND PAY TAX"<<endl;
			       //	p[i].out();
			       gets(up);
				break;
			case 6: cout<<endl<<"NO ACTIONS AVAILABLE"<<endl;
				gets(up);
				break;

		}
		tables(n);
		gets(up);
		}
		cout<<endl<<"enter 'stop' to finish the game and press enter to continue"<<endl;
		gets(up);
		}
		while(strcmp(up,"stop")!=0);
		tables(n);
		gets(up);
	for(i=1;i<n+1;i++)
		{
		p[i].net=p[i].credit+p[i].assets;
		p[i].out();
		}
	if(n==2)
	{
		if(p[n].net>p[n-1].net)
			cout<<endl<<"the winner is "<<p[n].name;
		else
			cout<<endl<<"THE WINNER IS "<<p[n-1].name;
	}
	else if(n==3)
	{
		if(p[n].net>p[n-2].net&&p[n].net>p[n-1].net)

			cout<<endl<<"THE WINNER IS "<<p[n].name;
		else if(p[n-1].net>p[n].net&&p[n-1].net>p[n-2].net)
			cout<<endl<<"THE WINNER IS "<<p[n-1].name;
		else
			cout<<endl<<"THE WINNER IS "<<p[n-2].name;
	}
	else if(n==4)
	{
		if(p[n].net>p[n-2].net&&p[n].net>p[n-2].net&&p[n].net>p[n-3].net)
			cout<<endl<<"THE WINNER IS "<<p[n].name;
		else if(p[n-1].net>p[n].net&&p[n-1].net> p[n-2].net&&p[n-1].net>p[n-3].net)
			cout<<endl<<"THE WINNER IS "<<p[n-1].name;
		else if(p[n-2].net>p[n].net&& p[n-2].net>p[n-1].net&&p[n-2].net>p[n-3].net)
			cout<<endl<<"THE WINNER IS "<<p[n-2].name;
		else
			cout<<endl<<"THE WINNER IS "<<p[n-3].name;
	}
	getch();
}





























