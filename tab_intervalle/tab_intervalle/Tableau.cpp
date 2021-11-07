#include "Tableau.h"
using namespace Inter;

Inter::Tableau::Tableau(int t)
{
	assert(t > 0);
	this->taille = t;
	this->tab = new float[t];
	for (int i = 0; i < t; i++) this->tab[i] = 0.0;
}

Inter::Tableau::~Tableau()
{
	if (this->tab)
	{
		delete[] this->tab;
		this->tab = NULL;
	}
}

Inter::Tableau::Tableau(const Tableau& t)
{
	this->taille = t.taille;
	this->tab = new float[t.taille];
	for (int i = 0; i < this->taille; i++)this->tab[i] = t.tab[i];
}

Tableau& Inter::Tableau::operator=(const Tableau& t)
{
	if (this != &t)
	{
		if (this->tab)
		{
			delete[]this->tab;
			this->tab = NULL;
		}
		this->taille = t.taille;
		this->tab = new float[t.taille];
		for(int i=0;i<this->taille;i++)this->tab[i] = t.tab[i];
	}
	return *(this);
}

float& Inter::Tableau::operator[](int ind)
{
	assert(ind >= 0 && ind < this->taille);
	return (this->tab[ind]);
}

void Inter::Tableau::affiche() const
{
	for (int i = 0; i < this->taille; i++)
		cout << this->tab[i] << "\t";
	cout << endl;
}
