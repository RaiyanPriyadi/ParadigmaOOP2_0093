#include <iostream>
using namespace std;

// Abstract Base Class
class RekeningBank {
protected:
    int saldo;

public:
    RekeningBank(int s) {
        saldo = s;
    }

    virtual void potongAdmin() = 0; // pure virtual function

    virtual void tampilSaldo() {
        cout << "Saldo akhir: Rp " << saldo << endl;
    }

    virtual ~RekeningBank() {}
};

// Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(int s) : RekeningBank(s) {}

    void potongAdmin() override {
        // Tidak ada potongan admin
        cout << "Rekening Syariah bebas biaya admin." << endl;
    }
};

// Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(int s) : RekeningBank(s) {}

    void potongAdmin() override {
        saldo -= 15000;
        cout << "Biaya admin Rp 15.000 dipotong." << endl;
    }
};

// Rekening Premium
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(int s) : RekeningBank(s) {}

    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "Saldo di atas Rp 10.000.000, bebas biaya admin." << endl;
        } else {
            saldo -= 50000;
            cout << "Biaya admin Rp 50.000 dipotong." << endl;
        }
    }
};

