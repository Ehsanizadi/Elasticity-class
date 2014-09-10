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

	/* Two different methods used to define classes, each of them has advantages and disadvantages
	 for more information please refer to: http://www.gribblelab.org/CBootcamp/7_Memory_Stack_vs_Heap.html
	*/

	linearElastic* material1 = new linearElastic(); 	// Class defined in the  heap memory (using pointers)
	linearElastic material2(10e6);				// Class defined in the stack memory (using instances)
	linearElastic material3(uE, uP);
	
	material1->getProperties();		// To access classes defined in the heap (using pointer) use "->"
	material2.getProperties();		// To access classes defined in the stack (using instanc) use "."
	material3.getProperties();

	material1->setElasticity(1);
	material1->setPoissonsRatio(0.1);
	material2.setPoissonsRatio(0.5);
	cout << "------------------------------------------------------------" << endl;
	
	material1->getProperties();
	material2.getProperties();
	material3.getProperties();
	


	cout << "Elasticity for Material 1 is: " << material1->getElasticity() << endl;
	cout << "Elasticity for Material 2 is: " << material2.getElasticity() << endl;
	cout << "Elasticity for Material 3 is: " << material3.getElasticity() << endl;

	cout << "Poission's ratio for Material 1 is: " << material1->getPoissonsRatio() << endl;
	cout << "Poission's ratio for Material 2 is: " << material2.getPoissonsRatio() << endl;
	cout << "Poission's ratio for Material 3 is: " << material3.getPoissonsRatio() << endl;

	delete material1; // the added class using pointer should be "de-allocated" from the memory heap

	return 0;
}
