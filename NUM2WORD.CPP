#include<iostream>
#include<conio.h>

void expand(long long number)
{
	char tens[10][10]={"","ten ","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};
	char ones[20][15]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};

	if(number<0)
	{
		std::cout<<"minus ";
		expand(-number);
	}
	else if (number>=10000000)
	{
		expand(number/10000000);
		std::cout<<"crore ";
		expand(number%10000000);
	}
	else if (number>=100000)
	{
		expand(number/100000);
		std::cout<<"lacs ";
		expand(number%100000);
	}
	else if(number>=1000)
	{
		expand(number/1000);
		std::cout<<"thousand ";
		expand(number%1000);
	}
	else if(number>=100)
	{
		expand(number/100);
		std::cout<<"hundred ";
		expand(number%100);
	}
	else if(number>=20)
	{
		std::cout<<tens[number/10];
		expand(number%10);
	}
	else
		std::cout<<ones[number];

}

int main()
{
	long long number;
	char ch;
	do
	{
	std::cout<<"Enter a number (upto 19 digits)..."<<std::endl<<std::endl;
	std::cin>>number;
	std::cout<<std::endl;
	if (number==0)
		std::cout<<"Zero only"<<std::endl;
	else
	{
		expand(number);
		std::cout<<"only"<<std::endl;
	}
	std::cout<<std::endl<<"Press Y to get another result: ";
	ch=getche();
	std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
	}while(ch=='Y'||ch=='y');
	getch();
	return 0;
}
