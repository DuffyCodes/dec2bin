/*
 * main.cpp
 *
 *  Created on: Feb 6, 2019
 *      Author: mduffy
 */
#include <iostream>
#include <list>
#include <math.h>
using namespace std;

int main (int argc, char *argv[])
{
	if(argc < 2)
	{
		cout << "usage: ./dec2bin <dceimal number> (Ex: ./dec2bin 0.3452)"<< endl;
		return 1;
	}
	for (int i = 1; i< argc; i++){
		float ci;
//		for(int i = 0; i < argv->size(); i++)
//			cout<<argv[i];
		ci=atof(argv[i]);
		//beginDec = ci;
		list<int> bin;
		int bi;
		int count=0;
		cout<<"Original output: "<<ci<<endl;
		cout<<ci<<" in binary is: 0.";
		do{
			ci = 2*ci;
			bi = static_cast<int>(ci);
			ci = ci - bi;
			bin.push_back(bi);
			count++;
		}while(count<10 && ci != 0);

		for(auto it = bin.begin(); it != bin.end(); it++)
		{
			cout<<*it;
		}
		cout<<endl<<"======================"<<endl;

	}
}

