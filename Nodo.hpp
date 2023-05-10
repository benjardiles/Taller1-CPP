class Nodo {
private:
    int Nota;
    int Alumno;
    int Ramo ;
    Nodo* up;
    Nodo* left;
    Nodo* siguiente;
   
public:
    Nodo(int Nota, int Alumno, int Ramo) {
        this-> Nota = Nota;
        up = nullptr;
        left = nullptr;
        siguiente = nullptr;
    }
    int getNota() {
        return Nota;
    }
    int getAlumno() {
        return Alumno;
    }
    int getRamo() {
        return Ramo;
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
        this-> Nota = Nota;
    }
    Nodo setAlumno(int Alumno) {
        this->Alumno = Alumno;
    }
    Nodo setI(int Ramo) {
        this->Ramo = Ramo;
    }
    
};
void agregarNodo(Nodo* nodo, int Nota, int Alumno, int Ramo) {
    if (nodo->getSiguiente() == nullptr) {
        Nodo* nuevo = new Nodo (Nota, Alumno, Ramo);
        nodo->setSiguiente(nuevo);
        return;
    }else {
        agregarNodo(nodo->getSiguiente(), Nota, Alumno, Ramo);
    }
}
void eliminarNodo(Nodo* nodo, int Nota, int Alumno, int Ramo) {
    if (nodo->getSiguiente() == nullptr) {
        return;
    }else {
        if (nodo->getSiguiente()->ge Nota() == Nota && nodo->getSiguiente()->getAlumno() == Alumno && nodo->getSiguiente()->getRamo() == Ramo) {
            Nodo* temp = nodo->getSiguiente();
            nodo->setSiguiente(temp->getSiguiente());
            delete temp;
            return;
        }else {
            eliminarNodo(nodo->getSiguiente(), Nota, Alumno, Ramo);
        }
    }
}
