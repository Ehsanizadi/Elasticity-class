# include<iostream>
# include"Elasticity.h"

using namespace std;

//Functions definition (setters/getters/displayers)

void linearElastic::setElasticity(double elasticity){
	while (elasticity <0){
		cout << "Inalid value for elasticity\n Please try again!"<< endl;
		cin >> elasticity;
	}
	E = elasticity;
}

void linearElastic::setPoissonsRatio( float poissonsRatio){
	while (poissonsRatio <0 || poissonsRatio>0.5){
		cout << "Inalid value for Poission's Ratio!!\n Please try again!"<< endl;
		cin >> poissonsRatio;
	}
	v =  poissonsRatio;
}

double linearElastic::getElasticity(){
	return E;
}

float linearElastic::getPoissonsRatio() {
	return v;
}

void linearElastic::getProperties(){
	cout << "E = " << E << endl;
	cout << "v = " << v << endl << "----------------------" << endl;
}
