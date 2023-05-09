class Nodo {
private:
    int Nota;
    int J;
    int I;
    Nodo* up;
    Nodo* left;
    Nodo* siguiente;
   
public:
    Nodo(int Nota, int J, int I) {
        this->Nota = Nota;
        up = nullptr;
        left = nullptr;
        siguiente = nullptr;
    }
    int getNota() {
        return Nota;
    }
    int getJ() {
        return J;
    }
    int getI() {
        return I;
    }
    Nodo* getUp() {
        return up;
    }
    Nodo* getLeft() {
        return left;
    }
    Nodo* getSiguiente() {
        return siguiente;
    }
    Nodo setSiguiente(Nodo* siguiente) {
        this->siguiente = siguiente;
    }
    Nodo setUp(Nodo* up) {
        this->up = up;
    }
    Nodo setLeft(Nodo* left) {
        this->left = left;
    }  

    Nodo setNota(int Nota) {
        this->Nota = Nota;
    }
    Nodo setJ(int J) {
        this->J = J;
    }
    Nodo setI(int I) {
        this->I = I;
    }
    
};
void agregarNodo(Nodo* nodo, int Nota, int J, int I) {
    if (nodo->getSiguiente() == nullptr) {
        Nodo* nuevo = new Nodo(Nota, J, I);
        nodo->setSiguiente(nuevo);
        return;
    }else {
        agregarNodo(nodo->getSiguiente(), Nota, J, I);
    }
}
