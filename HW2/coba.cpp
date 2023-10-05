#include <iostream>

int main() {
    // Mendefinisikan matriks pertama
    int matrix1[3][3];

    // Mendefinisikan matriks kedua
    int matrix2[3][3];

    // Meminta pengguna untuk memasukkan nilai matriks pertama
    std::cout << "Masukkan nilai matriks pertama (3x3):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Masukkan nilai matriks1[" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }

    // Menampilkan matriks pertama
    std::cout << "Matriks pertama:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Meminta pengguna untuk memasukkan nilai matriks kedua
    std::cout << "Masukkan nilai matriks kedua (3x3):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Masukkan nilai matriks2[" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }

    // Menampilkan matriks kedua
    std::cout << "Matriks kedua:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Matriks hasil penjumlahan
    int result_add[3][3];
    // Matriks hasil pengurangan
    int result_subtract[3][3];
    // Matriks hasil perkalian
    int result_multiply[3][3];

    // Melakukan penjumlahan matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result_add[i][j] = matrix1[i][j] + matrix2[i][j];
            result_subtract[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Melakukan perkalian matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result_multiply[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result_multiply[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Menampilkan hasil penjumlahan
    std::cout << "Hasil penjumlahan matriks:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << result_add[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Menampilkan hasil pengurangan
    std::cout << "Hasil pengurangan matriks:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << result_subtract[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Menampilkan hasil perkalian
    std::cout << "Hasil perkalian matriks:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << result_multiply[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
