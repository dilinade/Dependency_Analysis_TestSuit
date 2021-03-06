// Written by : Dilina Dehigama
// Handcoded Application - 02

//Testing timing thresholds 
//T_G = 5s


// # of global variables - 1
//{g1,g2,g3,..}

// # of computational units = 1
//{C1,C2,C3..}

// Execution Frequencies = {5}
//{alpha_1,alpha_2,alpha_3,..}

//Actual memory accesses from Ci to gi
//M(Actual,C1,g1) = 500; 


//R = (50*5) = 250 
//W = (50*5) = 250

#include <stdio.h>


int g1 = 0;
//Global memory 01


int main ()
{
	int alpha_1=5;
	int y1;
	
	for(y1=0;y1<alpha_1;y1++)
		C1();
}


int C1()
{
	int i = 0;
	for (i=0;i<50;i++)
		g1++; // 1- Read & 1 - Write
	return 0;
}
