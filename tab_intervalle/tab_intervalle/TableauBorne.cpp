#include "TableauBorne.h"

Inter::TableauBorne::TableauBorne(int t, float min, float max):Tableau(t)
{
	assert(min < max);
	this->b_min = min;
	this->b_max = max;
}

float Inter::TableauBorne::operator[](int ind) const
{
	assert(ind >= 0 && ind < this->taille);
	return this->tab[ind];
}

float& Inter::TableauBorne::operator()(int ind, float val)
{
	assert(ind >= 0 && ind < this->taille);
	if (this->b_min<val && val<this->b_max) 
	{
		this->tab[ind] = val;
	}
	return this->tab[ind];
}
void Inter::TableauBorne::affiche() const
{
	cout << "borne min " << this->b_min << " borne max " << this->b_max << endl;
	for (int i = 0; i < this->taille; i++)
		cout << this->tab[i] << "\t";
	cout << endl;
}