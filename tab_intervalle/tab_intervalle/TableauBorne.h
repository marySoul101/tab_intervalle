#pragma once
#include "Tableau.h"
namespace Inter {
    class TableauBorne :private Tableau
    {
    private:
        float b_min, b_max;
    public:
        TableauBorne(int t, float min, float max);
        float operator[](int ind)const;
        float& operator()(int ind, float val);
        void affiche()const;
    };
};
