#include <iostream>
#include <vector>
#include <chrono>
#include <omp.h>

using namespace std;

int main() {
    // Simulasi data dari pressure sensor alat CuffnCode
    long long jumlah_data = 10000000; 
    vector<int> data_sensor(jumlah_data, 5); 
    long long total_nilai = 0;

    // Mulai hitung waktu proses paralel
    auto start = chrono::high_resolution_clock::now();

    #pragma omp parallel for reduction(+:total_nilai)
    for (long long i = 0; i < jumlah_data; i++) {
        // Proses manipulasi sinyal mentah dari sensor
        data_sensor[i] = (data_sensor[i] * 2) + 3; 
        total_nilai += data_sensor[i];
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> waktu = end - start;

    // Output terminal yang kasual
    cout << "Hasil Test Running Program:" << endl;
    cout << "-> Total data sensor : " << jumlah_data << " item" << endl;
    cout << "-> Waktu eksekusi    : " << waktu.count() << " ms" << endl;
    cout << "-> Thread yang aktif : " << omp_get_max_threads() << " thread" << endl;

    return 0;
}