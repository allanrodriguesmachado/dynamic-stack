#include <iostream>

typedef int TipoItem;

class pilhadinamica {
    private:

    public:
    pilhadinamica();
    ~pilhadinamica();
    bool estavazio();
    bool estacheio();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();

};