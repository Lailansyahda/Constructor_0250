#include <iostream>
using namespace std;

class angka{
  private :
  int *arr;
  int panjang;
  
  public :
  angka(int); //Constructor
  ~angka(); // destructor
  void cetakData();
  void isiData();
};

//Definisi member Function
angka::angka(int i){ //Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka(){//Destructor
    cout<<endl;
    cetakData();
    delete[]arr;
    cout<<"Alamat Array Sudah Dilrpaskan"<<endl;
}

void angka::cetakData(){
    for(int i=1;i<=panjang;i++){
        cout<<i<<" = "<<arr[i]<<endl;
    }
}

void angka::isiData(){
    for(int i=1;i<=panjang;i++){
        cout<<i<<" = ";cin>>arr[i];
    }
    cout<<endl;
}

int main(){
    angka belajarcpp(3); //constructor dipanggil
    angka *ptrBelajarcpp = new angka(5); //constructor dipanggil
    delete ptrBelajarcpp; //Destructor Dipanggil

    return 0;
}//destructor dipanggil