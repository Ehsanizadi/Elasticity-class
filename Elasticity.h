#ifndef Elasticity_h
#define Elasticity_h
 
#include <iostream>

// Class definition
class linearElastic{
	//private variables are the parameters which are hidden and non-accessible by the user (internal parameters)
	private:	
	double E;
	float v;

	public: 
	//default definition
	linearElastic(double elasticity, float poissonsRatio){
		while (elasticity <0){
			std::cout << "Inalid value for elasticity\n Please try again!"<< std::endl;
			std::cin >> elasticity;
		}
		E = elasticity;
	
		while (poissonsRatio <0 || poissonsRatio>0.5){
			std::cout << "Inalid value for Poission's Ratio!!\n Please try again!"<< std::endl;
			std::cin >> poissonsRatio;
		}
		v = poissonsRatio;
	}
	
	//alternate definition
	linearElastic (double elasticity){
		while (elasticity <0){
			std::cout << "Inalid value for elasticity\n Please try again!"<< std::endl;
			std::cin >> elasticity;
		}
		E = elasticity;
		v = 0.3; // default value for poisson's ratio
	}

	//weak form: when the magnitude of stiffness and Poisson's ratio is not important.
	linearElastic(){
		E = 30e6;
		v= 0.3;
	}

	//Functions declaration (setters/getters/displayers)
	void setElasticity(double elasticity);

	void setPoissonsRatio( float poissonsRatio);

	double getElasticity() ;

	float getPoissonsRatio() ;
	void getProperties();
};

#endif