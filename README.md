🩺 Tugas Evaluasi 3 - Komputasi Paralel (CuffnCode)

Repositori ini dibuat untuk menuhi tugas Evaluasi 3 matakuliah Komputasi Paralel. 

👥 Anggota
Nisrina Salma - 152024043

📌 Analisis Masalah dan Solusi Sistem
---

1. Deskripsi Masalah (Problem Statement)
Perangkat *CuffnCode* mengandalkan *Pressure Sensor* untuk membaca pulsa tekanan darah secara *real-time*. Namun, tingginya volume sampling data mentah dari sensor menimbulkan beban komputasi yang masif. Jika pemrosesan algoritma dilakukan secara sekuensial (satu per satu), akan terjadi *bottleneck* pada CPU yang mengakibatkan *delay* signifikan dalam menampilkan hasil kalkulasi medis.

2. Solusi Optimasi (Proposed Solution)
Untuk mengatasi latensi tersebut, kami menerapkan optimasi komputasi paralel menggunakan **OpenMP**. Dengan mengintegrasikan direktif `#pragma omp parallel for`, beban komputasi yang besar dieksekusi secara simultan (*data parallelism*) memanfaatkan *multi-thread* prosesor. Pendekatan ini berhasil memangkas waktu pemrosesan data sensor secara drastis, sehingga sistem mampu beroperasi secara instan tanpa mengalami *lagging*.
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
Video demo running program bisa dicheck melalui:

👉 https://drive.google.com/file/d/1lEt5WDyWRmb2wIAbFU6MSBgG9adPLjN3/view?usp=sharing

