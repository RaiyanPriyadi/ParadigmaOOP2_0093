#include <iostream>
using namespace std;

class AbstraksiKlas {
    private: 
        string x, y;
    public :
        //methode untuk mengisi nilai
        //private nilai
        void setXY(string a, string b) {
        x = a;
        y = b;
     public :
        //methode untuk mengisi nilai
        //private nilai
        void setXY(string a, string b) {
        x = a;
        y = b;
    }

    //menampilkan nilai
    void display() {
        cout << "x = y " << x << endl;
        cout << "y = x " << y << endl;
        
    }
};

int main() {
        AbstraksiKlas ak;
        ak.setXY("Yogyakarta", "Kampus");
        ak.display();
        return 0;
}