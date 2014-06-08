#ifndef Elasticity_h
#define Elasticity_h
 
# include<iostream>

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
		
	//weark form
	linearElastic(){
		E = 30e6;
		v= 0.3;
	}

	//Functions declaration (setters/getters/displayers)
	void setElasticity(double elasticity){
		while (elasticity <0){
			cout << "Inalid value for elasticity\n Please try again!"<< endl;
			cin >> elasticity;
		}
		E = elasticity;	
	}

	void setPoissonsRatio( float poissonsRatio){
		while (poissonsRatio <0 || poissonsRatio>0.5){
			cout << "Inalid value for Poission's Ratio!!\n Please try again!"<< endl;
			cin >> poissonsRatio;
		}
		v =  poissonsRatio;
	}

	double getElasticity() {
		return E;
	}

	float getPoissonsRatio() {
		return v;
	}
	void getProperties(){
		cout << "E = " << E << endl;
		cout << "v = " << v << endl << "----------------------" << endl;
	}
};
// at the end, it should be pointed out that this header file corresponds to which source file
// otherwise, at the command line, you should compile the source files too. e.g. "g++ main.cpp Elasticity.cpp"
// But, this is the easier way, and every header file (after declaratio of parameters and functions) points to the source file
# include "Elasticity.cpp"
#endif

