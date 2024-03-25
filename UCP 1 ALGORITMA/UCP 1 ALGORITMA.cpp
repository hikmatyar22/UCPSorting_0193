//SOAL TYPE 1

//1. Algoritma Insertion Sort membandingkan serta menukarkan setiap elemennya dengan :
 //A) arr(i) dimulai dari n = 1 hingga n -1.
 //B) Set Temp = arr (i) yang artinya temp itu terletak pada i yakni pada pass 1 hingga seterusnya.
//C) letak j ditentukan dengan i - 1
//D) Jika arr[j] > tempt maka posisinya tidak berubah.
//E) ulangi langkah-langkah diatas hingga j < 0 atau arr[i] <= temp
   //*geser nilai pada indeks j ke indeks j + 1
    //*kurangi j sebanyak 1
//F) simpan temp pada indeks j + 1


//2. Algoritma Selection Sort membandingkan serta menukarkan setiap elemennya dengan mencari nilai yang paling kecil diantara elemen pada tiap kolom 
// kemudian jika sudah mendapatkannya maka bandingkan dengan arr[0] atau elemen yang berada di kotak pertama. Jika setelah dibandingkan nilai yang kecil <  elemen yang berada di kotak pertama
// maka tukarkan posisi keduanya dan ulangi langkah-langkag tersebut hingga array berurutan.
// Secara sistematis maka :
 //A) J dimulai dari 0 hingga n-2
 //B) arr(n-1)/cari nilai terkecil.
    //*tetapkan min_index = j
   //* ulangi langkah c dengan i dari j+1 hingga n-1
   //* jika arr[i] < arr (min_indek)/(j) = min_index = i
//c) Tukarkan Arr[j] dengan arr (min_index)

//3. cara mengetahui jumlah langkah yang dilakukan dengan cara n - 1 atau banyaknya elemen - 1
// contoh = n : 5
//         langkah yang dilakukan = 5 - 1 = 4 langkah





#include <iostream>
using namespace std;

int faiq[193];                       
int n;                               

void input() {                      
	while (true) {                   
		cout << "Masukan banyaknya elemen pada array : "; 
		cin >> n;                    
		if (n <= 193)                 
			break;                   
		else {                       
			cout << "\nArray dapat mempunyai maksimal 193 elemen.\n";   

		}
	}
	cout << endl;                              
	cout << "====================" << endl;    
	cout << "Masukan Elemen Array" << endl;    
	cout << "====================" << endl;    

	for (int i = 0; i < n; i++) {              
		cout << "Data Ke-" << (i + 1) << ": ";    
		cin >> faiq[i];                              

	}
}

void display() {                                
	cout << endl;                              
	cout << "================================" << endl;    
	cout << "Elemen Array yang telah tersusun" << endl;    
	cout << "================================" << endl;    
	for (int j = 0; j < n; j++) {                
		cout << faiq[j] << endl;                    
	}
	cout << endl;                                
}

void Selectionsort() {                                                          
	int j;
	int i;
	int min_index;

	for (j = 0; j <= n - 2; j++) {
			min_index = j;
			for (i = j + 1; i <= n - 1; i++) {
				if (i < min_index) {
					min_index = i;
				}
			}
		}
}

int main()
{
	input();                   
	Selectionsort();         
	display();                 
	return 0;

}









