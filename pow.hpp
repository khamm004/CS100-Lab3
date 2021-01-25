#ifndef __POW_HPP__
#define __POW_HPP__

#include <cmath>
#include "base.hpp"

using namespace std;

class Pow : public Base {
	private:
		Base* left;
		Base* right;
	public: 
		Pow();
		Pow(Base* lh, Base* rh) {left =lh; right=rh;}
		double evaluate(){
			if (left->evaluate()<0 && fmod(right->evaluate(),1)!=0){
				return 0;
			}
			return pow(left->evaluate(), right->evaluate());
		}
		string stringify() {return "(" + left->stringify() + "**" + right->stringify() + ")";}
};
#endif 
