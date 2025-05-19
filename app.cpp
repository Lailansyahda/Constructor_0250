#include <iostream>
using namespace std;

class Student {
    private :
        static int studentTotal;
    public :
        string name;
        string status;
        int age;

        Student(string pName, int pAge) {
            name = pName;
            age = pAge;
            status = "New Student"; // constructor (semua status mahasiswa baru)
            ++studentTotal; // MENGETAHUI BERAPA JUMLAH OBJEK MAHASISWA
            cout << name << "Created" << "Status" << status << endl;
            cout << endl;
        }

        ~Student(){ // destructor tidak bisa mempunyai parameter 
            cout << name << "Destroyed" << endl; // setelah object dibuat maka object di hapus dr data
            --studentTotal;
            cout << endl;
        }

        static int getStudentTotal(){ // semua proses sudah dilakukan kemudian nilai disimpan di student total
            return studentTotal;
        }

        static void setstudentTotal(int a){
            studentTotal = a; //merubah studentTotal
        }

};

int Student::studentTotal = 0;

int main(){ //bisa memanggil 4 object

    cout << "Student total is" << Student::getStudentTotal() << endl; 

    Student st1("Maman", 40);
    Student st2("Agus", 34);

    Student::setstudentTotal(10);

    cout << "Student total is" << Student::getStudentTotal() << endl;
    { // apabila ada kurawa, kurawa yg dieksekusi dulu
        Student st3("Budi", 19);
        Student st4("Caca", 21);
        cout << "Student total is" << Student::getStudentTotal() << endl;
    }

        cout << "Student total is" << Student::getStudentTotal() << endl;
        return 0;
}