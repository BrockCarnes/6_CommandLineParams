//============================================================================
// Name        : 6_CommandLineParams.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int FAIL_WRONG_NUMBER_ARGS = -5;
const int EXPECTED_NUMBER_ARGUMENTS =4;
const string WRONG_NUMB_ARGS = "This program expects 3 arguments, infile passfile failfile";

int main( int argc, char *argv[] )  {
   //argc = how many arguments passed in (including this program)
   //char *argv[] char array of those arguments

   //expect progname infile passfile failfile   //program and 3 arguments, argc=4
   if( argc != EXPECTED_NUMBER_ARGUMENTS ) {
	   cout<< WRONG_NUMB_ARGS <<endl;
	   return FAIL_WRONG_NUMBER_ARGS;
   }
   string infile = argv[1];
   string Passfile = argv[2];
   string Failfile = argv[3];

   cout<<"params passed are: "<<infile << " " <<Passfile<< " " << Failfile<<endl;
}
