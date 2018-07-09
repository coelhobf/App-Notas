#ifndef MATERIA_H
#define MATERIA_H

#include "Nota.h"

enum Sum {media, soma};

class Materia
{
private:
    vector<Nota> notas;
    string depto;
    string cod;
    string periodo;
    string prof;
    Sum forma;

public:

    Materia()
    {
        forma = Sum::soma;
    }

    Materia(const string &depto, const string &cod, const string &periodo, const string &professor, Sum forma)
    {
        this->depto = depto;
        this->cod = cod;
        this->periodo = periodo;
        this->prof = prof;
        this->forma = forma;
        this->notas = vector<Nota>();
    }

    void addNota(const Nota &nota)
    {
        notas.push_back(nota);
    }

    friend ostream& operator<<(ostream &os, const Materia &mat)
    {
        for(auto &x: mat.notas)
        {
            cout<< x << endl;
        }
    }
};

#endif