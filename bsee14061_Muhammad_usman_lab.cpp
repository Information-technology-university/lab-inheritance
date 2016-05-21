#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;





class BAND
{
	private:
		
		string NAME;
		
	protected:
		
		int count;
		
		virtual int TOTAL()=0;
	
	public:
		
		void Setter(string NAME)
		{
			this->NAME=NAME;
		}
		
		string getter()
		{
			return this->NAME;
		}
};

class metal: public BAND
{
	protected:
		
		int pyrotech;
		int members;
		
	public:
		metal()
		
		{
			pyrotech=4;
			members=16;	
		}
		
		int TOTAL()
		{
			return (pyrotech+ members);
		}
};


class march: public BAND
{
	protected:
			int members;	
			
	public:
		march()
		{
			members=11;	
		}
		
		int TOTAL()
		{
			return (members);
		}
};

class symphony: public BAND
{
	protected:
		
			int conductor;
			int members;
	public:
		
		symphony()
		{
			conductor=1;
			members=13;	
		}
		
		int TOTAL()
		{
			return (conductor + members);
		}
};



class Jazz: public BAND
{
	protected:
		
			int conductor;
			int members;
	public:
		
		Jazz()
		{	
			conductor=1;
			members=15;	
		}
		
		int TOTAL()
		{
			return (conductor + members);
		}
};

int main ()
{
	metal a;
	a.Setter(" \nPlaying metal band  \n");
	cout<<a.getter();
	cout<<"Total : "<<a.TOTAL()<<'\n';
	
	symphony b;
	b.Setter(" \n Playing Symphony band\n");
	cout<<b.getter();
	cout<<" total : "<<b.TOTAL()<<'\n';
	
	Jazz c;
	c.Setter(" \n Playing Jazz\n");
	cout<<c.getter();
	cout<<" total : "<<c.TOTAL()<<'\n';
		
	march d;
	d.Setter(" \n Playing marching band\n");
	cout<<d.getter();
	cout<<" total : "<<d.TOTAL()<<'\n';
	
	
}
