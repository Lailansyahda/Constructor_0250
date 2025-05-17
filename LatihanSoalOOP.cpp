#include <iostream>
using namespace std;

class admin
{
    public :
    void statistikData(peminjam* p)
    {
        cout << "Peminjam : " << p->nama << "Total Pinjaman : " << p->totalPinjaman << endl;
    }
};

class petugas
{
    private :
    string nama;
    int IDpetugas;
    string levelAkses;

    public :
    string levelAkses;
    friend class admin;
};

class buku 
{
    private :
    string judul;
    string penulis;
    bool dipinjam;

    public :
    void prosesPinjam( buku* b, peminjam* p)
    {
    
        b->dipinjam=true;
        p->totalPinjaman++;
        cout << "Buku telah dipinjam" << *p << endl;

    }
    void prosesKembali(buku* b)
    {
        b->dipinjam=false;
        cout << "Buku telah dikembalikan" << *b << endl;
    }
    friend class petugas;
};

class peminjam
{
    private : 
    string nama;
    int ID;
    int totalPinjaman;

    public :
    int totalPinjaman;
    friend class admin;
    friend class petugas;
};

int main()
{
    buku *bk = new buku("Little Women", "Louisa May Alcott");
    peminjam *pj = new peminjam("Laila", "250");
    petugas *pgs = new petugas("Selvi", "234", "standar");
    admin *adm = new admin();

    petugas->prosesPinjam(buku* b, peminjam* p);
    petugas->prosesKembali(buku*b );
    admin->statistikData();

    delete bk;
    delete pj;
    delete pgs;
    delete adm;
    return 0;
}