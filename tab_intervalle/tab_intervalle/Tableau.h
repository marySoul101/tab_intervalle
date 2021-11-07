#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace Inter {
	class Tableau
	{
	protected:
		int taille;
		float* tab;
	public:
		Tableau(int t);
		~Tableau();
		Tableau(const Tableau& t);
		Tableau& operator=(const Tableau& t);
		float& operator[](int ind);
		void affiche()const;
	};
};
