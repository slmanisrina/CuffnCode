🩺 Tugas Evaluasi 3 - Komputasi Paralel (CuffnCode)

Repositori ini dibuat untuk menuhi tugas Evaluasi 3 matakuliah Komputasi Paralel. 

👥 Anggota
Nisrina Salma - 152024043
---

## 📌 Analisis Masalah dan Solusi Sistem

### 1. Deskripsi Masalah (Problem Statement)
Perangkat *CuffnCode* dirancang sebagai sistem tertanam (*embedded system*) untuk mengukur tekanan darah otomatis menggunakan *Pressure Sensor* (sensor tekanan). Sensor ini bekerja secara *real-time* dengan melakukan sampling data pulsa tekanan udara dari manset dalam volume yang sangat masif. 

Tantangan utama pada sistem ini adalah tingginya beban komputasi saat melakukan pemrosesan sinyal mentah (*raw signal processing*) dari sensor. Jika seluruh tumpukan data sensor tersebut dieksekusi menggunakan metode konvensional secara sekuensial (tunggal/satu per satu), maka akan terjadi bottleneck pada CPU. Dampaknya, sistem akan mengalami *delay* (keterlambatan) yang signifikan dalam menampilkan hasil pembacaan tekanan sistolik dan diastolik kepada pengguna.

### 2. Solusi Optimasi (Proposed Solution)
Untuk mengatasi kendala latensi tersebut, kami mengimplementasikan arsitektur komputasi paralel pada tingkat perangkat lunak (*software optimization*) menggunakan library **OpenMP**. 

Melalui penerapan direktif `#pragma omp parallel for`, beban kerja algoritma pemrosesan data sensor yang awalnya bersifat linier dipecah secara otomatis menjadi beberapa sub-tugas (*data parallelism*). Sub-tugas ini kemudian dieksekusi secara bersamaan (*simultan*) memanfaatkan multi-core atau multi-thread yang tersedia pada arsitektur prosesor. Dengan memparalelkan proses kalkulasi data sensor, waktu komputasi dapat dipangkas secara drastis sehingga perangkat mampu menyajikan informasi medis secara instan dan akurat tanpa gejala *lagging*.

---

💻 Cara Run Program

Saya melakukan simulasi pemrosesan 10.000.000 data sensor tekanan di file `main.cpp`. Cara compile dan run lewat terminal:

```bash
# Compile program
g++ -fopenmp main.cpp -o program_cuff

# Run program
./program_cuff

```

📊 Hasil Pengujian & Performa
Berdasarkan hasil uji coba pada perangkat lokal (Laptop dengan 8 Thread Aktif), berikut adalah performa yang didapatkan:

Jumlah Data Sensor : 10.000.000 data
Waktu Eksekusi    : 68.6345 ms
Thread Berjalan   : 8 Thread

Kesimpulan: Dengan memanfaatkan teknik paralel, 10 juta data sensor tekanan berhasil dieksekusi hanya dalam waktu 68 milidetik, membuktikan bahwa optimasi software ini sangat efektif untuk pemrosesan data medis secara real-time.

📱 Link Video Demo 
---
```bash
Video demo running program bisa dicheck di sini:
👉 [Link Video Demo] (https://www.google.com/search?q=Isi_pake_link_IG_Reels_kamu)
```
