---
title: C++ | Konsep Dasar. 
date: 2023-05-21
categories: [struktur-data]
tags: [rahmam-manto, strudat, c2.3, materi, koding,cpp]
duration: 60:00
---

{{< step label="Pendahuluan & Daftar Isi" duration="3:00" >}}

Semua materi yang saya sampaikan adalah hasil terjemahan dari kursus online terkemuka [SoloLearn](https://www.sololearn.com/),silahkan bagi yang ingin memperdalam pemahaman dan mengasah skill koding saya sarankan untuk mengunjunginya

saya juga minta maaf sebelumnya jikalau dalam penerjemahan masih kaku dalam hal bahasa,jika ada keluhan/tanya seputar koding C++ bisa menghubungi saya di [RoiDev](https://wa.me/6285600640009)

> ### Daftar Isi
>
> - Memulai dengan C++
> - Pernyataan/Statement
> - Struktur Program
> - Variabel
> - Tipe Data
> - Operasi Matematika/Aritmatika
> - Lebih Lanjut Tentang Variabel
> - Komentar

{{< /step >}}

{{< step label="Memulai dengan C++" duration="3:00" >}}

## Selamat datang di C++

C++ adalah salah satu bahasa pemrograman yang paling populer,yang diciptakan oleh Bjarne Stroustrup di Bell Laboratories pada tahun 1979.

bahasa Ini digunakan untuk membuat game, sistem operasi, browser, dan banyak lagi!

Keuntungan terbesar C++ adalah skalabilitas dan kontrolnya atas cara menggunakan sumber daya.
___

## Koding

Manusia menggunakan program komputer untuk berkomunikasi dengan mesin. Tanpa program komputer, kita tidak akan memiliki ponsel pintar, situs web, atau bahkan penjelajahan di luar angkasa.

Mempelajari beberapa pengkodean dapat membantu Kita berinovasi dan menciptakan solusi berbeda untuk masalah, memberi Kita keunggulan kompetitif di dunia yang digerakkan oleh teknologi ini.
___

## Output

Sebagian besar program komputer dirancang untuk menghasilkan **output** . Berikut beberapa contohnya:

- Notifikasi "Anda mendapat pesan baru".

- "Game Over" ditampilkan di layar saat bermain video game

- Saldo akun Anda saat memeriksa aplikasi perbankan online Anda.

**Output** paling sederhana yaitu menampilkan pesan di layar.

Pembuat kode menggunakan **output** sepanjang waktu untuk memeriksa apakah komputer mengikuti instruksi yang diberikan dan memperbaiki masalah dengan kode.

Baris kode berikut menampilkan `"Welcome to C++"` di layar sebagai output:

```c++
cout << "Welcome to C++";
```

setiap perintah cout harus diikuti dengan tanda  `<<`.

{{< /step >}}

{{< step label="Pernyataan/Statement" duration="3:00" >}}

## Statement

Sebaris kode disebut pernyataan . Sebuah pernyataan melakukan tugas tertentu.

Perintah output dibawah ini adalah contoh pernyataan:

```c++
cout << "Coding adalah Seni";
```

___

## Titik Koma(;)

Setiap pernyataan dalam C++ harus diakhiri dengan titik koma ; .

Kode di bawah ini mengandung kesalahan,dan akan menyebabkan error jika dijalankan

```c++
cout << "Coding is your new superpower"
```

___

## Mencetak Output sebuah Teks

Saat mencetak keluaran teks, Kita harus mengapit teks dengan tanda kutip ganda .

```c++
cout << "Level completed!";
```

___

## Teks vs Angka

Komputer memperlakukan teks dan angka secara berbeda. Kita tidak perlu tanda kutip saat mengeluarkan angka.

```c++
cout << 42;

```

___

## Case-Sensitive

bahasa c++ merupakan bahasa yang peka terhadap huruf kecil dan besar,jadi berhati hati ketika menulis syntax dan variabel.
Contoh :
Variabel nama dan Nama adalah sesuatu yang berbeda

{{< /step >}}

{{< step label="Struktur Program" duration="3:00" >}}

## Program C++

Mari kita lihat kode keseluruhan program dan pelajari tentang semua pernyataan kode dan apa yang mereka lakukan.

Berikut adalah kode untuk menampilkan teks:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "C++ is awesome";
}
```

Baris pertama kode menambahkan `<iostream>` header ke program:

```c++
#include <iostream>
```

Pernyataan kode berikutnya adalah:

```c++
using namespace std;
```

Ini memberitahu program untuk menggunakan std namespace .

Kita perlu melakukan ini karena perintah cout adalah bagian dari std namespace.

>namespace digunakan untuk mengatur kode ke dalam grup logis dan memberi mereka nama.
>
>Jadi, stdnamespace adalah bagian dari `<iostream>` header, yang berisi perintah cout.

Mari kita lihat  keseluruhan program :

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "C++ is awesome";
}
```

Setelah header, Kita melihat kode berikut:

```c++
int main() { 
```

Setiap program C++ memiliki titik masuk, atau titik awal, yang merupakan fungsi yang disebut `main`.

>
Kita akan membahas setiap kata kunci dari definisi tersebut di pelajaran selanjutnya, saat mempelajari tentang fungsi. Untuk saat ini, ingatlah bahwa fungsi `main` harus dideklarasikan identik dengan kode di atas.

Tanda kurung kurawal { } menunjukkan awal dan akhir fungsi, yang juga bisa disebut badan fungsi . Kode di dalam tanda kurung menunjukkan fungsi apa yang dilakukan saat dijalankan.

```c++
int main() {
  cout << "C++ is awesome";
}
```

Saat kita menjalankan kode, perintah `cout` akan dieksekusi.

Fungsi main dapat berisi beberapa baris kode.

Misalnya, mari kita coba menampilkan dua nilai teks yang berbeda:

```c++
int main() {
  cout << "This is the first line";
  cout << "This is the second line";
}
```

Untuk menambahkan baris baru, Anda dapat menggunakan perintah endl , seperti ini:

```c++
cout << "This is the first line" << endl;
cout << "This is the second line";
```

>Kerja bagus! Sekarang Kita tahu cara membuat program C++ yang valid.
>
>Ingat poin-poin penting berikut ini:
>
> - Pernyataan  #include digunakan untuk menambahkan file header ke program.
> - Perintah  using digunakan untuk memberi tahu program namespace mana yang akan digunakan.
> - Untuk menggunakan perintah cout, Kita perlu menyertakan `<iostream>`  dan menggunakan stdnamespace.
> - Titik awal program C++ adalah fungsi yang disebut main, yang menyertakan kode yang ingin Kita jalankan.
> - Perintah `endl` digunakan untuk menambahkan baris baru ke output.

{{< /step >}}

{{< step label="Variabel" duration="3:00" >}}

Setiap program bekerja dengan nilai/value.

Variabel dapat menyimpan nilai teks, angka, desimal, dll.

Variabel memungkinkan Kita menyimpan nilai/value dengan menugaskannya ke sebuah `nama` . Nama ini nantinya dapat digunakan untuk merujuk ke nilai dalam program.

>Misalnya, dalam pengembangan game, Kita akan menggunakan variabel untuk menyimpan berapa banyak poin yang dicetak pemain.

Setiap variabel memiliki tipe data , yang menentukan jenis nilai yang dimilikinya.

Kita sudah terbiasa dengan nilai teks - yang dibuat menggunakan tanda kutip,seperti di materi sebelumnya :

```c++
    "ini adalah sebuah teks"
```

___
Mari buat variabel bertipe string :

```c++
string message;
```

Ini akan menciptakan variabel baru yang disebut  `message`  yang bertipe data string .

Sekarang, variabel `message` yang kita buat dapat menyimpan nilai string.

>Dalam istilah pemrograman, proses pembuatan variabel disebut deklarasi.

___
Setelah mendeklarasikan variabel kita, kita dapat memberinya nilai menggunakan operator penugasan(=) :

```c++
string message;
message = "Selamat Datang";
```

Sekarang, `message` mempunyai nilai "Selamat Datang".

>Perhatikan, bahwa nilai string harus dalam tanda kutip.
___
Sekarang, setelah mendeklarasikan dan menetapkan nilai, kita dapat menampilkan nilai variabel kita:

```c++
string message;
message = "Selamat Datang";
cout << message;
```

___
Kita dapat menggabungkan deklarasi dan penugasan menjadi satu pernyataan, seperti ini:

```c++
string message = "Selamat Datang";
```

> Ini berguna ketika kita sudah mengetahui nilai variabel kita dan membuat kode lebih pendek dan lebih mudah dibaca.
___
Variabel dapat mengubah nilainya selama program beberapa kali.

Misalnya, pesan dapat berubah berdasarkan bahasa:

```c++
string message = "Selamat Datang";
message = "Welcome";
```

___
>Luar biasa! Berikut adalah beberapa kesimpulan yang bisa diambil dari pembelajaran kali ini:
>
> - Variabel memiliki nama dan jenis nilai yang dimilikinya.
> - Untuk mendeklarasikan variabel gunakan tipe diikuti dengan nama variabel.
> - Anda dapat menetapkan nilai ke variabel yang dideklarasikan menggunakan operator =.
> - Variabel dapat mengubah nilainya selama program, dengan menetapkan nilai baru.

Kita akan mempelajari lebih banyak jenis variabel di pelajaran selanjutnya!

{{< /step >}}

{{< step label="Tipe Data" duration="3:00" >}}

C++ mendukung berbagai jenis variabel, berdasarkan nilainya.

## Integer/Int

Jenis `int` digunakan untuk menyimpan integer (disebut integer dalam pemrograman):

```c++
int points = 128;
```

## Double

Untuk menyimpan desimal (atau angka floating point), C++ menyediakan tipe data float dan double .

Misalnya:

```c++
double temp = 84.2;
```

## Float

Jenis `float` juga digunakan untuk menyimpan desimal.

Untuk menentukan bahwa nilainya adalah sebuah `float`, kita perlu menggunakan huruf f setelahnya:

```c++
float length = 5.31f;
```

Ini memberitahu C++ untuk menggunakan nilai sebagai float, bukan double.

## Float vs Double

Secara default, nilai desimal bertipe double.

float menggunakan lebih sedikit penyimpanan dalam memori, tetapi tidak setepat tipenya double.

Ini berarti bahwa perhitungan yang menggunakan float lebih cepat daripada yang menggunakan double, namun hasilnya kurang  akurat dalam hal angka desimal.

## Char

Jenis char digunakan untuk menyimpan satu karakter.

Ini mirip dengan mendeklarasikan string, tetapi menggunakan tanda kutip tunggal(') untuk nilainya:

```c++
char x = 'H';
```

## Boolean

Jenis bool hanya dapat menyimpan 2 nilai: antara `true` atau `false`.

biasanya digunakan saat bekerja dengan pengkondisian.

```c++
bool online = false;
```

Variabel online dapat menunjukkan apakah pengguna sedang online atau tidak.

>Saat Kita menjalankan kode, Kita akan melihat bahwa hasilnya adalah  0 , bukan  false. Ini karena nilai boolean  true sesuai dengan  1 , sedangkan nilainya  false sesuai dengan  0 .

Kerja bagus! Berikut adalah beberapa kesimpulan utama tentang tipe data:

> - `int` digunakan untuk menampung bilangan bulat (integer)
> - `double` menyimpan desimal.
> - `float` mirip dengan double, tetapi kurang presisi dan membutuhkan lebih sedikit memori. Kita perlu mengakhiri nilai dengan huruf 'f' untuk membuat float.
> - `char` memegang satu karakter.
> - `boolean` dapat memiliki salah satu dari nilai berikut: true atau false .

Kita akan belajar bagaimana menggunakan variabel dan membuat perhitungan pada pelajaran selanjutnya.

{{< /step >}}

{{< step label="Operasi  Aritmatika" duration="3:00" >}}

{{< /step >}}

{{< step label="" duration="3:00" >}}

{{< /step >}}

{{< step label="" duration="3:00" >}}

{{< /step >}}

{{< step label="" duration="3:00" >}}

{{< /step >}}
