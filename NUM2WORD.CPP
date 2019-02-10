#include<iostream>
#include<conio.h>

void expand(long long num)
{
	char tens[10][10]={"","ten ","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};
	char ones[20][15]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};

	if(num<0)
	{
		std::cout<<"minus ";
		expand(-num);
	}
	else if (num>=10000000)
	{
		expand(num/10000000);
		std::cout<<"crore ";
		expand(num%10000000);
	}
	else if (num>=100000)
	{
		expand(num/100000);
		std::cout<<"lacs ";
		expand(num%100000);
	}
	else if(num>=1000)
	{
		expand(num/1000);
		std::cout<<"thousand ";
		expand(num%1000);
	}
	else if(num>=100)
	{
		expand(num/100);
		std::cout<<"hundred ";
		expand(num%100);
	}
	else if(num>=20)
	{
		std::cout<<tens[num/10];
		expand(num%10);
	}
	else
		std::cout<<ones[num];

}

int main()
{
	long long num;
	char ch;
	do
	{
	std::cout<<"Enter a num (upto 19 digits)..."<<std::endl<<std::endl;
	std::cin>>num;
	std::cout<<std::endl;
	if (num==0)
		std::cout<<"Zero only"<<std::endl;
	else
	{
		expand(num);
		std::cout<<"only"<<std::endl;
	}
	std::cout<<std::endl<<"Press Y to get another result: ";
	ch=getche();
	std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
	}while(ch=='Y'||ch=='y');
	getch();
	return 0;
}
