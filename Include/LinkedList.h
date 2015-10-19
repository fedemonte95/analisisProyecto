#include "Node.h"
#include <stdexcept>
using namespace std;

template <typename E>
class LinkedList{
    private:
        Node<E>* head;
        Node<E>* tail;
        Node<E>* current;
        int size;

        Node<E>* searchPrevious(Node<E>* pNode) {
            if (current == head) {
                    return NULL;
            }
            Node<E> *res = head;
            while (res->next != current) {
                    res = res->next;
            }
            return res;
        }
    public:
    LinkedList() {
            head = tail = current = new Node<E>();
            size = 0;
        }
    ~LinkedList() {
            clear();
            delete head;
        }
    void insert(E pElement) {
            current->next = new Node<E>(pElement, current->next);
            if (current == tail) {
                    tail = tail->next;
            }
            size++;
        }
    void append(E pElement) {
            tail->next = new Node<E>(pElement);
            tail = tail->next;
            size++;
    }
    E remove() throw(runtime_error) {
            if (current->next == NULL) {
                    throw runtime_error("No element to remove.");
            }
            E result = current->next->element;
            Node<E> *temp = current->next;
            current->next = current->next->next;
            if (temp == tail) {
                tail = current;
            }
            delete temp;
            size--;
            return result;
    }
    void clear() {
        current = head;
        while (head != NULL) {
                head = head->next;
                delete current;
                current = head;
        }
        head = tail = current = new Node<E>();
        size = 0;
    }
    E getElement() throw(runtime_error) {
        if (current->next == NULL) {
                throw runtime_error("No element to get.");
        }
        return current->next->element;
    }
    void goToStart() {
        current = head;
    }
    void goToEnd() {
        current = tail;
    }
    void goToPos(int nPos) throw(runtime_error) {
        if ((nPos < 0) || (nPos > size)) {
            throw runtime_error("Index out of bounds");
        }
        current = head;
        for (int i = 0; i < nPos; i++) {
            current = current->next;
        }
    }
    void previous() {
        if (current != head) {
            current = searchPrevious(current);
        }
    }
    void next() {
        if (current != tail) {
            current = current->next;
        }
    }
    int getPos() {
        int pos = 0;
        Node<E>* temp = head;
        while (temp != current) {
            pos++;
            temp = temp->next;
        }
        return pos;
    }
    int getSize() {
        return size;
    }
    void print(){
        cout << "[";
        Node<E>* temp;
        temp = head->next;
        for(int j=0; j<size; j++){
            cout << temp->element;
            if(j != size -1){
                    cout << ", ";
            }
            temp = temp->next;
        }
        cout << "]" << endl;

    }
    void invertir()throw(runtime_error){
        if (size == 0){
                throw runtime_error("Lista vacía");
        }
        if (size == 1){
                throw runtime_error("No es necesario invertir el orden");
        }
        LinkedList<E> *listaInvertida = new LinkedList<E>();
        for(int i = getSize()-1; i >= 0; i--){
                goToPos(i);
                listaInvertida->append(getElement());
        }
        clear();
        for(int i = 0; i < listaInvertida->getSize(); i++){
                listaInvertida->goToPos(i);
            append(listaInvertida->getElement());
            }
            delete listaInvertida;
    }
    void swapNode(int pos1, int pos2){
        Node<E>* temp1;
        Node<E>* temp2;
        current = head;
        if(((pos1 > 0) && (pos1 < size))&&
           ((pos2 > 0) && (pos2 < size))){
            for(int i = 0; i < size; i++){
                    if(i == pos1){
                     temp1 = current;
                    }
                    if(i == pos2){
                        temp2 = current;
                    }
                    current = current->next;
            }
            for(int i = 0; i < size; i++){
                    if(current->next == temp1){
                        current->next = temp2;
                    }
                    if(current->next == temp2){
                        current->next = temp1;
                    }
                        current = current->next;
                    }
            }

            else{
             cout << "Posiciones incorrectas"<< endl;
            }
        }
};
