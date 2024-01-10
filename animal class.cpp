#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"ANIMALS EAT PLANTS OR ANIMALS OR BOTH IT DEPENDS ON THE HABITAT OF LIVING!!\n\n\n\n_____________________________________________\n";
		}
};
class herbivores:public animal
{
	public:
		void eat()
		{
			cout<<"THIS TYPE OF ANIMALS ONLY EATS PLANTS AND GREENARY\n";
		}
};
class carnivores:public animal
{
	public:
		void eat()
		{
			cout<<"THIS TYPE OF ANIMALS ONLY EATS FLESH,MEAT OR OTHER ANIMALS!\n";
		}
};
int main()
{
	animal d;
	d.eat();
	char a;
	cout<<"ENTER H FOR HERBIVORES AND C FOR CARNIVORES\n";
	cin>>a;
	if(a == 'H' || a == 'h')
	{
		herbivores k;
		k.eat();
	}
	else if(a == 'C' || a == 'c')
	{
		carnivores t;
		t.eat();
	}
	return 0;
}
