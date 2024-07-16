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


// Remove First
void removeFirst(){
  del = head;
  head = head->next;
  delete del;
}

// Remove Last
void removeLast(){
  del = tail;
  cur = head;
  while( cur->next != tail ){
    cur = cur->next;
  }
  tail = cur;
  tail->next = NULL;
  delete del;
}

// remove middle
void removeMiddle(int posisi){
  if( posisi < 1 || posisi > countSingleLinkedList() ){
    cout << "Posisi diluar jangkauan" << endl;
  }else if( posisi == 1){
    cout << "Posisi bukan posisi tengah" << endl;
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




void sorting()
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
                if (p2->hasil < min->hasil)
                {
                    min = p2;
                }
                p2 = p2->next;
            }
            if (p1->hasil > min->hasil)
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
	cout << setiosflags(ios::left) << setw(11) << cur->tempat;
	cout << setiosflags(ios::left) << setw(14) << cur->tgllahir;
	cout << setiosflags(ios::left) << setw(27) << cur->alamat;
	cout << setiosflags(ios::left) << setw(18) << cur->asal_sd;
	cout << setiosflags(ios::left) << setw(6) << cur->nilai1;
	cout << setiosflags(ios::left) << setw(5) << cur->nilai2;
	cout << setiosflags(ios::left) << setw(5) << cur->nilai3;
	cout << setiosflags(ios::left) << setw(11) << cur->hasil;
	cout << setiosflags(ios::left) << setw(0) << cur->keterangan <<endl;
		
    cur = cur->next;
    nomor++;
  }
	cout << "+===+========+====================+=========+========================+=========================+=================+=================+======+=============+\n";
}

int main(){
		addFirst("2101030", "Liye", "perempuan", "karanganyar", "2003", "Botok,Kerjo,Karanganyar", "SDN1", "-", 90, 80, 80, 0);
		addFirst("2245866", "Ades", "laki-laki", "surakarta", "2003", "Botok,Kerjo,Karanganyar", "SDN5", "-", 65, 80, 69, 0);
		addFirst("2754866", "Mineral", "laki-laki", "jatim", "2003", "Botok,Kerjo,Karanganyar", "SDN8", "-", 75, 50, 66, 0);
		addFirst("2210368", "Aqua", "laki-laki", "pekalongan", "2003", "Botok,Kerjo,Karanganyar", "SDN4", "-", 45, 90, 59, 0);
		addLast("5223653", "Dee", "perempuan", "klaten", "2003", "Botok,Kerjo,Karanganyar", "SDN5", "-", 90, 88, 70, 0);
		addLast("2343534", "Fiersa Besari", "laki-laki", "smg", "2003", "Botok,Kerjo,Karanganyar", "SDN2", "-", 57, 52, 70, 0);
		addLast("5464334", "Dee", "perempuan", "solo", "2003", "Botok,Kerjo,Karanganyar", "SDN2", "-", 68, 55, 30, 0);
		addLast("3244563", "des", "perempuan", "pacitan", "2003", "Botok,Kerjo,Karanganyar", "SDN1", "-", 78, 97, 92, 0);


	int pilih;
	//untuk linkedlist
	int posisi;
	string nisn;
	string nama, jk, tempat, tgllahir, alamat, asal_sd, keterangan;
	float nilai1, nilai2, nilai3, hasil;
    
	menu:
	system ("cls");
	cout << "+------------------------------------------------+" <<endl;
	cout << "|     Sistem Penerimaan Siswa Baru SMP Wacana    |" <<endl;
	cout << "+------------------------------------------------+" <<endl;
	cout << "|1. Insert Data Depan                            |\n";
	cout << "|2. Insert Data Tengah                           |\n";
	cout << "|3. Insert Data Belakang                         |\n";
	cout << "|4. Delete Data Atas/Awal                        |\n";
	cout << "|5. Delete Data Tengah                           |\n";
	cout << "|6. Delete Data Bawah/Akhir                      |\n";
	cout << "|7. Tampil Data                                  |\n";
	cout << "|8. Sorting Berdasarkan Tahun                    |\n";
	cout << "+------------------------------------------------+\n";
	cout << "Silahkan Masukan Pilihan Anda :";
	cin  >> pilih;
	cout << "\n";
	
	 //Tambah Awal
    if (pilih == 1)
    {
    	system("cls");
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
    
    //Tambah Tengah
    else if (pilih == 2)
    {
    	system("cls");
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
    
    //Tambah Akhir
    else if (pilih == 3)
    {
    	system("cls");
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
    
    //Hapus Awal
    else if (pilih == 4)
    {
    	system("cls");
    	cout << "Sebelum Di Hapus Awal/Atas\n";
    	printSingleLinkedList();
    	cout << "Tekan Untuk Lanjut....";
    	getch();
    	removeFirst();
    	cout << "\nSetelah Di Hapus Awal/Atas\n";
    	printSingleLinkedList();
		getch();
        goto menu;
    }
    
    //Hapus Tengah
    else if (pilih == 5)
    {
    	system("cls");
    	cout << "Sebelum Di Hapus Awal/Atas\n";
    	printSingleLinkedList();
    	cout << "Masukkan No Data Yang Ingin Di Hapus = "; cin >> posisi;
    	removeMiddle(posisi);
    	cout << "\nSetelah Di Hapus Awal/Atas\n";
    	printSingleLinkedList();
		getch();
        goto menu;
    } 
	   
    //Hapus Akhir
    else if (pilih == 6)
    {
    	system("cls");
    	cout << "Sebelum Di Hapus Akhir/Bawah\n";
    	printSingleLinkedList();
    	cout << "Tekan Untuk Lanjut....";
    	getch();
    	removeLast();
    	cout << "\nSetelah Di Hapus Akhir/Bawah\n";
    	printSingleLinkedList();
		getch();
        goto menu;
    }
    
	else if (pilih == 7)
	{
		system("cls");
		printSingleLinkedList();
		getch();
		goto menu;
	}
	
    else if (pilih == 8)
    {
    	system("cls");
    	cout << "Sebelum Di sorting\n";
    	printSingleLinkedList();
    	sorting();
    	cout << "\nSetelah Di Sorting\n";
    	printSingleLinkedList();
		getch();
        goto menu;
    }
	
	
	
	

}
