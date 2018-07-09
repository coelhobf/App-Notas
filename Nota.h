#ifndef NOTAS_H
#define NOTAS_H

#include <bits/stdc++.h>
using namespace std;

class Nota
{
private:
    string sigla;
    float valor;
    float nota;
    string descricao;
   
public:

    Nota();
    Nota(string sigla, float valor, float nota, string descricao = string())
    {
        this->sigla = sigla;
        this->descricao = descricao;
        this->valor = valor;
        this->nota = nota;
    }

    string getSigla() const
    {
        return this->sigla;
    }

    float getValor() const
    {
        return this->valor;
    }

    float getNota() const
    {
        return this->nota;
    }

    string getDescricao() const
    {
        return this->descricao;
    }

    friend ostream& operator<<(ostream &os, const Nota &nota)
    {
        os<< nota.sigla << " - " << nota.valor << " - " << nota.nota << endl;
        os<< nota.descricao << endl;

        return os;
    }
};

#endif