#include<iostream>
#include<conio.h>

void expandNum(long long number)
{
	char tens[10][10]={"","ten ","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};
	char ones[20][15]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};

	if(number<0)
	{
		std::cout<<"minus ";
		expandNum(-number);
	}
	else if (number>=10000000)
	{
		expandNum(number/10000000);
		std::cout<<"crore ";
		expandNum(number%10000000);
	}
	else if (number>=100000)
	{
		expandNum(number/100000);
		std::cout<<"lacs ";
		expandNum(number%100000);
	}
	else if(number>=1000)
	{
		expandNum(number/1000);
		std::cout<<"thousand ";
		expandNum(number%1000);
	}
	else if(number>=100)
	{
		expandNum(number/100);
		std::cout<<"hundred ";
		expandNum(number%100);
	}
	else if(number>=20)
	{
		std::cout<<tens[number/10];
		expandNum(number%10);
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
		expandNum(number);
		std::cout<<"only"<<std::endl;
	}
	std::cout<<std::endl<<"Press Y to get another result: ";
	ch=getche();
	std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
	}while(ch=='Y'||ch=='y');
	getch();
	return 0;
}
