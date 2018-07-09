#include <bits/stdc++.h>
#include "Nota.h"
#include "Materia.h"
using namespace std;

int main()
{
    Nota a(string("PR1"), 100, 90, string("Prova 1 de mat 241"));
    Nota b(string("PR2"), 100, 60);

    Materia mat(string("MAT"), string("241"), string("2018/1"), string("Lilian Neves"), Sum::media);

    mat.addNota(a);
    mat.addNota(b);

    cout<< mat;
}