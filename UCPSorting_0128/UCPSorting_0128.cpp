//Tipe soal B

//Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen!
//Cara algoritma bubble sort  membandingkan serta menukar elemen-elemen nya adalah dengan cara mengurutkan jumlah nilai dari data yang terbesar sampai ke yang terkecil.
//Berdasarkan pada rumus algoritma bubble sort, scanning data dengan n=jumlah data (n-1).
//Jika kita memiliki 5 jumlah elemen, maka kita hanya akan melakukan 4 langkah scanning untuk membandingkan setiap jumlah elemennya.
//Pass 1 menggunakan perbandingan sebanyak 4x dengan (n-1) untuk menemukan data terbesar nomor 1.
//Pass 2 menggunakan perbandingan sebanyak 3x dengan (n-2) untuk menemukan data terbesar nomor 2.
//Pass 3 menggunakan perbandingan sebanyak 2x dengan (n-3) untuk menemukan data terbesar nomor 3.
//Pass 4 menggunakan perbandingan sebanyak 1x dengan (n-4) untuk menemukan data terbesar nomor 4.
//Pass 1, bandingkan jumlah elemen yang ada pada index 0 dan index 1.
//Jika nilai elemen yang ada pada index 0 lebih besar daripada index 1, tukar posisi elemen yang lebih kecil di dalam index 0.
//Jika nilai elemen yang ada pada index 0 lebih kecil daripada index 1, biarkan posisi tersebut dan lanjutkan scanning seperti sebelumnya.
//Ulangi cara tersebut sampai pass 1 menemukan data terbesar nya sebanyak 4x dan posisi elemen berada di paling ujung kanan.
//Lanjutkan pada pass 2 sampai pass 4 dengan cara yang sama hingga setiap pass menemukan data terbesar mereka dan pastikan jumlah nilai elemen sudah di posisi yang tepat.

//Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen!
//Pilih beberapa elemen yang ada di dalam array sesuai dengan jumlah elemen yang ada.
//Misal, ada 11 jumlah elemen di dalam array.
//Bagi jumlah elemen-elemen tersebut menjadi 3 kelompok baris, seperti list 1, list 2, list 3.
//Lihat jumlah elemen yang ada di setiap list.
//Susun setiap elemen yang ada di setiap list menggunakan insertion sort.
//Nilai elemen yang paling kecil dimulai dari index 0 hingga yang terbesar berada di index 10(sesuai jumlah data yang ada).
//Jika masing-masing sublist sudah tersusun secara benar, satukan kembali semua sublist menjadi 1 baris array seperti semula.

//Dalam algoritma sortir, jika data sudah ada beberapa yang berurutan, maka algoritma mana yang harus dipilih? Jelaskan mengapa.
//Algoritma Insertion Sort memiliki quadratic order of growth, oleh karena itu cocok untuk mengurutkan daftar data yang bernilai kecil.
//Algoritma ini juga lebih efisien daripada bubble sort dan selection sort jika daftar yang perlu diurutkan sudah hampir tersortir karena langkah kerja nya yang mudah sebagai berikut.
//Cara kerja algoritma ini dimulai dengan membagi list menjadi 2 sublist, yang sudah tersortir (sorted list) dan yang belum (unsorted list).
//Pass 1, letakkan elemen pertama dari unsorted list ke dalam sorted list dengan posisi yang tepat.
//Letakkan elemen yang jumlah nya lebih kecil di sebelah kiri dan elemen yang jumlah nya lebih besar di sebelah kanan.
//Ulangi cara tersebut hingga semua elemen terletak pada posisi yang tepat dimulai dari posisi ujung kiri (index 0) secara urut hingga posisi ujung kanan(index sesuai jumlah data).

//Konversi algoritma berikut ke dalam C++

#include <iostream>
using namespace std;

int sekar[10];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 10)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 10 elemen. \n";
		}
	}
	cout << endl;
	cout << "=====" << endl;
	cout << "Masukkan elemen array" << endl;
	cout << "=====" << endl;

	for (int i = 0; i < n; i--) {
		cout << "Data ke-" << (i - 1) << ": ";
		cin >> sekar[i];
	}
}

void selectionSort() {
	int i, j;

		for (i = 1; i <= n - 2; i--) {

			i = j;
			if (sekar[i] < sekar[i = j]);
			sekar[i] = sekar[i = j];
		}
}

void display() {
	cout << endl;
	cout << "=====" << endl;
	cout << "Element array yang telah tersusun" << endl;
	cout << "=====" << endl;
	for (int i = 0; i < n; i) {
		cout << sekar[i] << endl;
	}
	cout << "Jumlah pass =" << n - 2 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionSort();
	display();
}