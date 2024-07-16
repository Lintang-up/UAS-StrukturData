#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

// deklarasi single linked list
struct Siswa{
  	string nisn;
	string nama, jk, tempat, tgllahir, alamat, asal_sd, keterangan;
	float nilai1, nilai2, nilai3, hasil;
  Siswa *next;
};
Siswa *head, *tail, *cur, *newNode, *del, *before;


void printSingleLinkedList();

// create single linked list
void createSingleLinkedList(string nisn, string nama, string jk, string tempat, string tgllahir, string alamat, string asal_sd, string keterangan,
							float nilai1, float nilai2, float nilai3, float hasil)
	{
  	head = new Siswa();
 	head->nisn = nisn;
  	head->nama = nama;
  	head->jk = jk;
  	head->tempat = tempat;
  	head->tgllahir = tgllahir;
	head->alamat = alamat;
	head->asal_sd = asal_sd;
	head->nilai1 = nilai1;
	head->nilai2 = nilai2;
	head->nilai3 = nilai3;
	head->hasil = nilai1 + nilai2 + nilai3;
	if(head->hasil >= 200){
		keterangan = "Diterima";
	}
	
	else if(head->hasil <= 199){
		keterangan = "Tidak Diterima";	
	}
	head->keterangan = keterangan;  	
  	
  	head->next = NULL;
  	tail = head;
	}


// print single linked list
int countSingleLinkedList(){
  cur = head;
  int jumlah = 0;
  while( cur != NULL ){
    jumlah++;
    cur = cur->next;
  }
  return jumlah;
}



// tambahAwal
void addFirst(string nisn, string nama, string jk, string tempat, string tgllahir, string alamat, string asal_sd, string keterangan,
							float nilai1, float nilai2, float nilai3, float hasil){
	if (head == NULL)  //jika head kosong maka kita buat singlelist dulu
	{
	  	head = new Siswa();
 		head->nisn = nisn;
  		head->nama = nama;
  		head->jk = jk;
  		head->tempat = tempat;
  		head->tgllahir = tgllahir;
		head->alamat = alamat;
		head->asal_sd = asal_sd;
		head->nilai1 = nilai1;
		head->nilai2 = nilai2;
		head->nilai3 = nilai3;
		head->hasil = nilai1 + nilai2 + nilai3;
		if(head->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(head->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		head->keterangan = keterangan;   	
  	
  		head->next = NULL;
  		tail = head;
	}
	
	else
	{
	  	newNode = new Siswa();
 		newNode->nisn = nisn;
  		newNode->nama = nama;
  		newNode->jk = jk;
  		newNode->tempat = tempat;
  		newNode->tgllahir = tgllahir;
		newNode->alamat = alamat;
		newNode->asal_sd = asal_sd;
		newNode->nilai1 = nilai1;
		newNode->nilai2 = nilai2;
		newNode->nilai3 = nilai3;
		newNode->hasil = nilai1 + nilai2 + nilai3;
		if(newNode->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(newNode->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		newNode->keterangan = keterangan;   
  		
  		newNode->next = head;
  		head = newNode;
	}
}

// tambahAkhir
void addLast(string nisn, string nama, string jk, string tempat, string tgllahir, string alamat, string asal_sd, string keterangan,
							float nilai1, float nilai2, float nilai3, float hasil){
	if (head == NULL)  //jika head kosong maka kita buat singlelist dulu
	{
	  	head = new Siswa();
 		head->nisn = nisn;
  		head->nama = nama;
  		head->jk = jk;
  		head->tempat = tempat;
  		head->tgllahir = tgllahir;
		head->alamat = alamat;
		head->asal_sd = asal_sd;
		head->nilai1 = nilai1;
		head->nilai2 = nilai2;
		head->nilai3 = nilai3;
		head->hasil = nilai1 + nilai2 + nilai3;
		if(head->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(head->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		head->keterangan = keterangan;   	
  	
  		head->next = NULL;
  		tail = head;
	}
	
	else
	{
	  	newNode = new Siswa();
 		newNode->nisn = nisn;
  		newNode->nama = nama;
  		newNode->jk = jk;
  		newNode->tempat = tempat;
  		newNode->tgllahir = tgllahir;
		newNode->alamat = alamat;
		newNode->asal_sd = asal_sd;
		newNode->nilai1 = nilai1;
		newNode->nilai2 = nilai2;
		newNode->nilai3 = nilai3;
		newNode->hasil = nilai1 + nilai2 + nilai3;
		if(newNode->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(newNode->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		newNode->keterangan = keterangan;  
  		
  		newNode->next = NULL;
  		tail->next = newNode;
  		tail = newNode;
	}

}

// tambah tengah
void addMiddle(string nisn, string nama, string jk, string tempat, string tgllahir, string alamat, string asal_sd, string keterangan,
							float nilai1, float nilai2, float nilai3, float hasil, int posisi){
	
	if(head == NULL) //jika head kosong maka kita buat singlelist dulu
	{
	  	head = new Siswa();
 		head->nisn = nisn;
  		head->nama = nama;
  		head->jk = jk;
  		head->tempat = tempat;
  		head->tgllahir = tgllahir;
		head->alamat = alamat;
		head->asal_sd = asal_sd;
		head->nilai1 = nilai1;
		head->nilai2 = nilai2;
		head->nilai3 = nilai3;
		head->hasil = nilai1 + nilai2 + nilai3;
		if(head->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(head->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		head->keterangan = keterangan;  
  		
  		head->next = NULL;
  		tail = head;
	}
	
	
	else{
		if( posisi < 1 || posisi > countSingleLinkedList() )		{
    		cout << "Posisi diluar jangkauan" << endl;
  		}
		else if( posisi == 1)		{
    		cout << "Posisi bukan posisi tengah" << endl;
  		}
		else{
		  	newNode = new Siswa();
	 		newNode->nisn = nisn;
	  		newNode->nama = nama;
	  		newNode->jk = jk;
	  		newNode->tempat = tempat;
	  		newNode->tgllahir = tgllahir;
			newNode->alamat = alamat;
			newNode->asal_sd = asal_sd;
			newNode->nilai1 = nilai1;
			newNode->nilai2 = nilai2;	
			newNode->nilai3 = nilai3;
			newNode->hasil = nilai1 + nilai2 + nilai3;
			if(newNode->hasil >= 200){
				keterangan = "Diterima";
			}
	
			else if(newNode->hasil <= 199){
				keterangan = "Tidak Diterima";	
			}
			newNode->keterangan = keterangan;  

   			// tranversing
    		cur = head;
    		int nomor = 1;
    		while( nomor < posisi - 1 ){
      		cur = cur->next;
      		nomor++;
    		}
    		newNode->next = cur->next;
    		cur->next = newNode;
  		}
	}

}


void change(string nisn, string nama, string jk, string tempat, string tgllahir, string alamat, string asal_sd, string keterangan,
							float nilai1, float nilai2, float nilai3, float hasil, int posisi){
								
	if(head == NULL) //jika head kosong maka kita buat singlelist dulu
	{
	  	head = new Siswa();
 		head->nisn = nisn;
  		head->nama = nama;
  		head->jk = jk;
  		head->tempat = tempat;
  		head->tgllahir = tgllahir;
		head->alamat = alamat;
		head->asal_sd = asal_sd;
		head->nilai1 = nilai1;
		head->nilai2 = nilai2;
		head->nilai3 = nilai3;
		head->hasil = nilai1 + nilai2 + nilai3;
		if(head->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(head->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		head->keterangan = keterangan;  
  		
  		head->next = NULL;
  		tail = head;
	}
	else{
		if( posisi < 1 || posisi > countSingleLinkedList() ){
	    cout << "Posisi diluar jangkauan" << endl;
		}
		else if( posisi == 1 || posisi == countSingleLinkedList() ){
    	cout << "Posisi bukan posisi tengah" << endl;
  		}
		else{
    	cur = head;
    	int nomor = 1;
    	
    		while( nomor < posisi ){
      		cur = cur->next;
      		nomor++;
    		}

 		cur->nisn = nisn;
  		cur->nama = nama;
  		cur->jk = jk;
  		cur->tempat = tempat;
  		cur->tgllahir = tgllahir;
		cur->alamat = alamat;
		cur->asal_sd = asal_sd;
		cur->nilai1 = nilai1;
		cur->nilai2 = nilai2;
		cur->nilai3 = nilai3;
		cur->hasil = nilai1 + nilai2 + nilai3;
		if(cur->hasil >= 200){
			keterangan = "Diterima";
		}
	
		else if(cur->hasil <= 199){
			keterangan = "Tidak Diterima";	
		}
		cur->keterangan = keterangan; 
  		}
	}
  
}


// remove Data
void removeMiddle(int posisi){
  if( posisi < 1 || posisi > countSingleLinkedList() ){
    cout << "Posisi diluar jangkauan" << endl;
  }else if( posisi == 1){
      	del = head;
  		head = head->next;
  		delete del;
  }else{
    int nomor = 1;
    cur = head;
    while( nomor <= posisi ){
      if( nomor == posisi-1 ){
        before = cur;
      }
      if( nomor == posisi ){
        del = cur;
      }
      cur = cur->next;
      nomor++;
    }
    before->next = cur;
    delete del;
  }
}


void sorting_nilai()
{
    int temp;
    string strtemp;
    float strtemp2;
    Siswa *p1, *p2, *min;
    p1 = new Siswa();
    p2 = new Siswa();
    min = new Siswa();

    if (head != NULL)
    {
        p1 = head;
        while (p1->next != NULL)
        {
            p2 = p1;
            min = p1;
            while (p2 != NULL)
            {
                if (p2->hasil > min->hasil)
                {
                    min = p2;
                }
                p2 = p2->next;
            }
            if (p1->hasil < min->hasil)
            {
                temp = p1->hasil;
                p1->hasil = min->hasil;
                min->hasil = temp;

                strtemp = p1->nisn;
                p1->nisn = min->nisn;
                min->nisn = strtemp;

                strtemp = p1->nama;
                p1->nama = min->nama;
                min->nama = strtemp;
                
                strtemp = p1->jk;
                p1->jk = min->jk;
                min->jk = strtemp;
                
                strtemp = p1->tempat;
                p1->tempat = min->tempat;
                min->tempat = strtemp;
                
                strtemp = p1->tgllahir;
                p1->tgllahir = min->tgllahir;
                min->tgllahir = strtemp;
                
                strtemp = p1->alamat;
                p1->alamat = min->alamat;
                min->alamat = strtemp;
                
                strtemp = p1->asal_sd;
                p1->asal_sd = min->asal_sd;
                min->asal_sd = strtemp;
                
                strtemp2 = p1->nilai1;
                p1->nilai1 = min->nilai1;
                min->nilai1 = strtemp2;
                
                strtemp2 = p1->nilai2;
                p1->nilai2 = min->nilai2;
                min->nilai2 = strtemp2;
                
                strtemp2 = p1->nilai3;
                p1->nilai3 = min->nilai3;
                min->nilai3 = strtemp2;
                
                strtemp = p1->keterangan;
                p1->keterangan = min->keterangan;
                min->keterangan = strtemp;             
                
            }
            p1 = p1->next;
        }
    }
    else
    {
        cout << "Data Masih Kosong!!!" << endl;
    }
}


void sorting_nama()
{
    string temp;
    string strtemp;
    float strtemp2;
    Siswa *p1, *p2, *min;
    p1 = new Siswa();
    p2 = new Siswa();
    min = new Siswa();

    if (head != NULL)
    {
        p1 = head;
        while (p1->next != NULL)
        {
            p2 = p1;
            min = p1;
            while (p2 != NULL)
            {
                if (p2->nama < min->nama)
                {
                    min = p2;
                }
                p2 = p2->next;
            }
            if (p1->nama > min->nama)
            {
                temp = p1->nama;
                p1->nama = min->nama;
                min->nama = temp;

                strtemp = p1->nisn;
                p1->nisn = min->nisn;
                min->nisn = strtemp;

                strtemp2 = p1->hasil;
                p1->hasil = min->hasil;
                min->hasil = strtemp2;
                
                strtemp = p1->jk;
                p1->jk = min->jk;
                min->jk = strtemp;
                
                strtemp = p1->tempat;
                p1->tempat = min->tempat;
                min->tempat = strtemp;
                
                strtemp = p1->tgllahir;
                p1->tgllahir = min->tgllahir;
                min->tgllahir = strtemp;
                
                strtemp = p1->alamat;
                p1->alamat = min->alamat;
                min->alamat = strtemp;
                
                strtemp = p1->asal_sd;
                p1->asal_sd = min->asal_sd;
                min->asal_sd = strtemp;
                
                strtemp2 = p1->nilai1;
                p1->nilai1 = min->nilai1;
                min->nilai1 = strtemp2;
                
                strtemp2 = p1->nilai2;
                p1->nilai2 = min->nilai2;
                min->nilai2 = strtemp2;
                
                strtemp2 = p1->nilai3;
                p1->nilai3 = min->nilai3;
                min->nilai3 = strtemp2;
                
                strtemp = p1->keterangan;
                p1->keterangan = min->keterangan;
                min->keterangan = strtemp;             
                
            }
            p1 = p1->next;
        }
    }
    else
    {
        cout << "Data Masih Kosong!!!" << endl;
    }
}


void print_sorting(){
	void printSingleLinkedList();
	int pilih_sorting;
	
	cout << "+========================================+\n";
	cout << "|1.| Sorting Berdasarkan Nama            |\n";
	cout << "|2.| Sorting Berdasarkan Nilai Tertingi  |\n";
	cout << "|                                        |\n";
	cout << "|3.| Kembali Ke Menu                     |\n";
	cout << "+========================================+\n";
	cout << "Masukkan Pilihan Anda = ";	cin >> pilih_sorting;
	
	if (pilih_sorting == 1){
		system("cls");
    	cout << "Sebelum Di sorting\n";
    	printSingleLinkedList();
    	sorting_nama();
    	cout << "\nSetelah Di Sorting Berdasarkan Nama Siswa\n";
    	printSingleLinkedList();
		getch();
	}
	else if(pilih_sorting == 2){
		system("cls");
    	cout << "Sebelum Di sorting\n";
    	printSingleLinkedList();
    	sorting_nilai();
    	cout << "\nSetelah Di Sorting Berdasarkan Nilai Siswa Tertinggi\n";
    	printSingleLinkedList();
		getch();
	}
}

// print single linked list
void printSingleLinkedList(){
  int nomor = 0;
  cout << "Jumlah data ada : " << countSingleLinkedList() << endl;
  cout << "--------------------" << endl;
  cur = head;
  
  cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
  cout << "|No.|  Nisn  |        Nama        |  Jenis  |     Tempat Tanggal     |          Alamat         |     Asal SD     |      Nilai      |Jumlah| Keterangan  |\n";
  cout << "|   |        |                    | Kelamin |         Lahir          |                         |                 | IPA   MTK   BI  |      |             |\n";
  cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
  
  while( cur != NULL )
  {
  	cout << "|" << nomor + 1 << ". |";
  	cout << setiosflags(ios::left) << " " << setw(9) << cur->nisn;
	cout << setiosflags(ios::left) << setw(20) << cur->nama;
	cout << setiosflags(ios::left) << setw(11) << cur->jk;
	cout << setiosflags(ios::left) << setw(12) << cur->tempat;
	cout << setiosflags(ios::left) << setw(13) << cur->tgllahir;
	cout << setiosflags(ios::left) << setw(27) << cur->alamat;
	cout << setiosflags(ios::left) << setw(18) << cur->asal_sd;
	cout << setiosflags(ios::left) << setw(6) << cur->nilai1;
	cout << setiosflags(ios::left) << setw(5) << cur->nilai2;
	cout << setiosflags(ios::left) << setw(6) << cur->nilai3;
	cout << setiosflags(ios::left) << setw(6) << cur->hasil;
	cout << setiosflags(ios::left) << setw(0) << cur->keterangan <<endl;
		
    cur = cur->next;
    nomor++;
  }
	cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
}


//print searching
void print_urutan(){
  int nomor = 0;
  cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
  cout << "|No.|  Nisn  |        Nama        |  Jenis  |     Tempat Tanggal     |          Alamat         |     Asal SD     |      Nilai      |Jumlah| Keterangan  |\n";
  cout << "|   |        |                    | Kelamin |         Lahir          |                         |                 | IPA   MTK   BI  |      |             |\n";
  cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
  
  	cout << "|" << nomor + 1 << ". |";
  	cout << setiosflags(ios::left) << " " << setw(9) << cur->nisn;
	cout << setiosflags(ios::left) << setw(20) << cur->nama;
	cout << setiosflags(ios::left) << setw(11) << cur->jk;
	cout << setiosflags(ios::left) << setw(12) << cur->tempat;
	cout << setiosflags(ios::left) << setw(13) << cur->tgllahir;
	cout << setiosflags(ios::left) << setw(27) << cur->alamat;
	cout << setiosflags(ios::left) << setw(18) << cur->asal_sd;
	cout << setiosflags(ios::left) << setw(6) << cur->nilai1;
	cout << setiosflags(ios::left) << setw(5) << cur->nilai2;
	cout << setiosflags(ios::left) << setw(6) << cur->nilai3;
	cout << setiosflags(ios::left) << setw(6) << cur->hasil;
	cout << setiosflags(ios::left) << setw(0) << cur->keterangan <<endl;

    nomor++;
	cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
}

void searching()
{
	string nisn;
	string nama;
	float hasil;
	
    int pi;
    bool ketemu = false;
    cur = head;

    system("cls");
    cout << "+----------------------+" << endl;
    cout << "|  Proses Pencarian    |" << endl;
    cout << "+----------------------+" << endl;
    cout << "| pilih berdasarkan:   |" << endl;
    cout << "| 1. Nama Siswa        |" << endl;
    cout << "| 2. Nisn              |" << endl;
    cout << "| 3. Nilai Akhir       |" << endl;
    cout << "|                      |" << endl;
    cout << "| 4. Kembali ke Menu   |" << endl;    
    cout << "+----------------------+" << endl;
    cout << "pilih: ";
    cin >> pi;
    if (pi == 1)
    {
        cout << "\nMasukkan Nama : "; 	fflush(stdin); 		getline (cin, nama);
        while (!ketemu && cur != NULL)
        {
            if (nama == cur->nama)
            {
                ketemu = true;
            }
            else
            {
                cur = cur->next;
            }
        }
        if (ketemu)
        {
            cout << "Data Nama Siswa = " << nama << " Ditemukan" <<endl;
            print_urutan();
        }
        else
        {
            cout << "Data Nama Siswa = " << nama << " Tidak Ditemukan" << endl;
        }
        getch();
    }
    
    else if (pi == 2)
    {
        cout << "\nMasukkan NISN : ";		cin >> nisn;
        while (!ketemu && cur != NULL)
        {
            if (nisn == cur->nisn)
            {
                ketemu = true;
            }
            else
            {
                cur = cur->next;
            }
        }
        if (ketemu)
        {
            cout << "Data NISN = " << nisn << " Ditemukan" << endl;
            print_urutan();
        }
        else
        {
            cout << "Data NISN = " << nisn << " Tidak Ditemukan" << endl;
        }
        getch();
    }
    
    else if (pi == 3)
    {
        cout << "\nMasukkan Nilai Akhir : "; cin >> hasil;
        while (!ketemu && cur != NULL)
        {
            if (hasil == cur->hasil)
            {
                ketemu = true;
            }
            else
            {
                cur = cur->next;
            }
        }
        if (ketemu)
        {
            cout << "Nilai Akhir Siswa = " << hasil << " Ditemukan" << endl;
            print_urutan();
        }
        else
        {
            cout << "Nilai Akhir Siswa = " << hasil << " Tidak Ditemukan" << endl;
        }
        getch();
    }
}


int main(){
	
	//Sample uji coba
		addFirst("2001", "Ajik", "laki-laki", "Surakarta", "02-03-2003", "tipes, Surakarta", "SDN 1 Tipes", "-", 90, 80, 80, 0);
		addFirst("2003", "Lintang", "laki-laki", "Karanganyar", "21-08-2003", "Botok,Kerjo,Karanganyar", "SDN 2 karanganyar", "-", 66, 72, 80, 0);
		addLast("2002", "Abil", "laki-laki", "Colomadu", "23-05-2003", "Kemuning,Karanganyar", "SDN 5 Colomadu", "-", 65, 80, 69, 0);
		addLast("2004", "Natasya", "perempuan", "Karanganyar", "26-04-2003", "jenawi,Karanganyar", "SDN 2 Jenawi", "-", 68, 55, 30, 0);
		addLast("2005", "Rstu", "perempuan", "Karanganyar", "25-04-2004", "ngargoyoso,Karanganyar", "SDN 1 Cemani", "-", 78, 97, 92, 0);


	int pilih;
	//untuk linkedlist
	int posisi;
	string nisn;
	string nama, jk, tempat, tgllahir, alamat, asal_sd, keterangan;
	float nilai1, nilai2, nilai3, hasil;
    
	menu:
	system ("cls");
	cout << "+------------------------------------------------+\n";
	cout << "|     Sistem Penerimaan Siswa Baru SMP Wacana    |\n";
	cout << "+------------------------------------------------+\n";
	cout << "|1. Insert Data Siswa                            |\n";
	cout << "|2. Ubah Data Siswa                              |\n";
	cout << "|3. Delete Data Siswa                            |\n";
	cout << "|4. Tampil Data Siswa yang Sudah Mendaftar       |\n";
	cout << "|5. Sorting Data Siswa                           |\n";
	cout << "|6. Searching Data Siswa                         |\n";
	cout << "|7. Keluar                                       |\n";
	cout << "+------------------------------------------------+\n";
	cout << "Silahkan Masukan Pilihan Anda :";
	cin  >> pilih;
	cout << "\n";
	
	 //Tambah Awal
    if (pilih == 1)
    {
    	int p1;
    	system("cls");
    	cout << "+==========================================+\n";
    	cout << "|1. Insert Data Depan                      |\n";
		cout << "|2. Insert Data Tengah                     |\n";
		cout << "|3. Insert Data Belakang                   |\n";
    	cout << "+==========================================+\n";
    	cout << " Silahkan Pilih = ";	cin >> p1;
    	
    	if (p1 == 1)
    	{
    		cout << "Masukkan Nisn Siswa    = ";	cin >> nisn;
			cout << "Masukkan Nama Siswa    = ";	fflush(stdin); 		getline (cin, nama);
			cout << "Masukkan Jenis Kelamin = ";	fflush(stdin); 		getline (cin, jk);
			cout << "Masukkan Tempat Lahir  = ";	fflush(stdin); 		getline (cin, tempat);
			cout << "Masukkan Tgl lahir     = ";	fflush(stdin); 		getline (cin, tgllahir);
			cout << "Masukkan Alamat        = ";	fflush(stdin); 		getline (cin, alamat);
			cout << "Masukkan Asal SD       = ";	fflush(stdin); 		getline (cin, asal_sd);
			cout << "Masukkan Nilai IPA     = ";	cin >> nilai1;
			cout << "Masukkan Nilai MTK     = ";	cin >> nilai2;
			cout << "Masukkan Nilai BI      = ";	cin >> nilai3;
			addFirst(nisn, nama, jk, tempat, tgllahir, alamat, asal_sd, keterangan, nilai1, nilai2, nilai3, hasil);
        	goto menu;
		}
    	else if (p1 == 2)
    	{
			cout << "Masukkan Nisn Siswa    = ";	cin >> nisn;
			cout << "Masukkan Nama Siswa    = ";	fflush(stdin); 		getline (cin, nama);
			cout << "Masukkan Jenis Kelamin = ";	fflush(stdin); 		getline (cin, jk);
			cout << "Masukkan Tempat Lahir  = ";	fflush(stdin); 		getline (cin, tempat);
			cout << "Masukkan Tgl lahir     = ";	fflush(stdin); 		getline (cin, tgllahir);
			cout << "Masukkan Alamat        = ";	fflush(stdin); 		getline (cin, alamat);
			cout << "Masukkan Asal SD       = ";	fflush(stdin); 		getline (cin, asal_sd);
			cout << "Masukkan Nilai IPA     = ";	cin >> nilai1;
			cout << "Masukkan Nilai MTK     = ";	cin >> nilai2;
			cout << "Masukkan Nilai BI      = ";	cin >> nilai3;
			cout << "\nMasukkan Posisi Data ke= ";	cin >> posisi;
			addMiddle(nisn, nama, jk, tempat, tgllahir,alamat, asal_sd, keterangan, nilai1, nilai2, nilai3, hasil, posisi);
       	 	goto menu;
   		}
   		else if (p1 == 3)
    	{
			cout << "Masukkan Nisn Siswa    = ";	cin >> nisn;
			cout << "Masukkan Nama Siswa    = ";	fflush(stdin); 		getline (cin, nama);
			cout << "Masukkan Jenis Kelamin = ";	fflush(stdin); 		getline (cin, jk);
			cout << "Masukkan Tempat Lahir  = ";	fflush(stdin); 		getline (cin, tempat);
			cout << "Masukkan Tgl lahir     = ";	fflush(stdin); 		getline (cin, tgllahir);
			cout << "Masukkan Alamat        = ";	fflush(stdin); 		getline (cin, alamat);
			cout << "Masukkan Asal SD       = ";	fflush(stdin); 		getline (cin, asal_sd);
			cout << "Masukkan Nilai IPA     = ";	cin >> nilai1;
			cout << "Masukkan Nilai MTK     = ";	cin >> nilai2;
			cout << "Masukkan Nilai BI      = ";	cin >> nilai3;
			addLast(nisn, nama, jk, tempat, tgllahir,alamat, asal_sd, keterangan, nilai1, nilai2, nilai3, hasil);
        	goto menu;
    	}
    }
        
    //ubah data
    else if (pilih == 2)
    {
    	system("cls");
    	printSingleLinkedList();
    	cout << "\n\n";
    	cout << "Masukkan Posisi Data ke- ";	cin >> posisi;
		cout << "\nMasukkan Nisn Siswa  = ";	cin >> nisn;
		cout << "Masukkan Nama Siswa    = ";	fflush(stdin); 		getline (cin, nama);
		cout << "Masukkan Jenis Kelamin = ";	fflush(stdin); 		getline (cin, jk);
		cout << "Masukkan Tempat Lahir  = ";	fflush(stdin); 		getline (cin, tempat);
		cout << "Masukkan Tgl lahir     = ";	fflush(stdin); 		getline (cin, tgllahir);
		cout << "Masukkan Alamat        = ";	fflush(stdin); 		getline (cin, alamat);
		cout << "Masukkan Asal SD       = ";	fflush(stdin); 		getline (cin, asal_sd);
		cout << "Masukkan Nilai IPA     = ";	cin >> nilai1;
		cout << "Masukkan Nilai MTK     = ";	cin >> nilai2;
		cout << "Masukkan Nilai BI      = ";	cin >> nilai3;
		change(nisn, nama, jk, tempat, tgllahir,alamat, asal_sd, keterangan, nilai1, nilai2, nilai3, hasil, posisi);
        goto menu;
    }
    
    //Hapus Data
    else if (pilih == 3)
    {
    	system("cls");
    	cout << "Sebelum Di Hapus Data\n";
    	printSingleLinkedList();
    	cout << "Masukkan No Data Yang Ingin Di Hapus = "; cin >> posisi;
    	removeMiddle(posisi);
    	cout << "\nSetelah Di Hapus Data\n";
    	printSingleLinkedList();
		getch();
        goto menu;
    } 
	     
    //lihat data pendaftar
	else if (pilih == 4)
	{
		system("cls");
		printSingleLinkedList();
		cout << "Nilai dibawah 200 tidak di terima!!!";
		getch();
		goto menu;
	}
	
	//sorting data siswa
    else if (pilih == 5)
    {
    	system("cls");
    	print_sorting();
        goto menu;
    }
	
	//searching data siswa
	else if (pilih == 6)
    {
    	system("cls");
		searching();
        goto menu;
    }
    
    //Menu Keluar
	else if (pilih == 7)
    {
    	system("cls");
		cout << "Nama : Bachrul Rizal  ||  Muhammad Lintang Pamungkas\n";
		cout << "NIM  :   210103007    ||           210103028\n";
		cout << "Kelas: 21 TIA1\n";
		cout << "\n\n\n\n\n\n\n";
    }
    

}
