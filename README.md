🩺 Tugas Evaluasi 3 - Komputasi Paralel (CuffnCode)

Repositori ini dibuat untuk menuhi tugas Evaluasi 3 matakuliah Komputasi Paralel. 

👥 Anggota
Nisrina Salma - 152024043
---

📌 Problem & Solusi
Perangkat *CuffnCode* punya *Pressure Sensor* (sensor tekanan) yang fungsinya buat baca data denyut nadi secara real-time. Masalahnya, data sensor yang masuk tuh banyak banget dan numpuk. Kalau diproses satu-satu (sekuensial), alatnya bakal lag atau telat nampilin hasil.

Solusinya, kami pake direktif `#pragma omp parallel for` dari OpenMP buat ngebagi beban komputasi ke beberapa thread CPU sekaligus biar proses filter data sensornya jadi jauh lebih cepet.

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
