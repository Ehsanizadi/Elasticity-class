# include<iostream>
# include"Elasticity.h"
 
using namespace std;

//--------------------------------------------------------------------------------------------------------
int main () {
	double uE;
	float uP;
	
	cout << "Input the elasticity: ";
	cin >> uE;
	cout<< "Input the Poission's ratio: ";
	cin >>  uP;

	linearElastic material1;
	linearElastic material2(10e6);
	linearElastic material3(uE, uP);
	
	material1.getProperties();
	material2.getProperties();
	material3.getProperties();

	material1.setElasticity(1);
	material1.setPoissonsRatio(0.1);
	material2.setPoissonsRatio(0.5);
	cout << "------------------------------------------------------------" << endl;
	material1.getProperties();
	material2.getProperties();
	material3.getProperties();
	

	cout << "Elasticity for Material 1 is: " << material1.getElasticity() << endl;
	cout << "Elasticity for Material 2 is: " << material2.getElasticity() << endl;
	cout << "Elasticity for Material 3 is: " << material3.getElasticity() << endl;

	cout << "Poission's ratio for Material 1 is: " << material1.getPoissonsRatio() << endl;
	cout << "Poission's ratio for Material 2 is: " << material2.getPoissonsRatio() << endl;
	cout << "Poission's ratio for Material 3 is: " << material3.getPoissonsRatio() << endl;

	return 0;
}
