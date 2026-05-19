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

