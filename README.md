🩺 Tugas Evaluasi 3 - Komputasi Paralel (CuffnCode)
---

Repositori ini dibuat untuk menuhi tugas Evaluasi 3 matakuliah Komputasi Paralel. 

👥 Anggota
Nisrina Salma - 152024043

📌 Analisis Masalah dan Solusi Sistem
---

1. Deskripsi Masalah (Problem Statement)
Perangkat CuffnCode dirancang untuk mengukur tekanan darah pasien secara langsung (real-time) melalui sensor tekanan. Tantangan utamanya adalah sensor ini mengirimkan data mentah dalam jumlah yang sangat banyak dan terus-menerus. Jika seluruh data tersebut dihitung secara berurutan (satu per satu), prosesor komputer akan mengalami antrean beban kerja (bottleneck). Akibatnya, sistem akan mengalami keterlambatan (delay) yang cukup lama sebelum bisa menampilkan hasil kalkulasi medis ke layar.

2. Solusi Optimasi (Proposed Solution)
Untuk mengatasi masalah keterlambatan tersebut, kami menerapkan metode bagi-tugas menggunakan teknologi OpenMP. Melalui perintah khusus `#pragma omp parallel for`, kami membagi tumpukan data yang besar tersebut agar dikerjakan secara bersamaan oleh beberapa inti prosesor (multi-thread) sekaligus. Karena beban kerja dikerjakan secara gotong-royong di waktu yang sama, waktu pemrosesan data sensor terpangkas secara drastis. Hasilnya, perangkat CuffnCode dapat menyajikan informasi medis secara instan dan lancar tanpa mengalami kendala macet (lagging).
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
Waktu Eksekusi    : 125.389 ms
Thread Berjalan   : 8 Thread

Kesimpulan: Dengan memanfaatkan teknik paralel, 10 juta data sensor tekanan berhasil dieksekusi hanya dalam waktu 125 milidetik, membuktikan bahwa optimasi software ini sangat efektif untuk pemrosesan data medis secara real-time.

📱 Link Video Demo 
---
Video demo running program bisa dicheck melalui:

👉 https://drive.google.com/file/d/1lEt5WDyWRmb2wIAbFU6MSBgG9adPLjN3/view?usp=sharing

