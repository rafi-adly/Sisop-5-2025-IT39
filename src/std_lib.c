#include "std_lib.h"

int div(int a, int b)
{
    if (b == 0) return 0; 
    int negatif = 0;
    if (a < 0) { a = -a; negatif ^= 1; }
    if (b < 0) { b = -b; negatif ^= 1; }

    int hasil = 0;
    int cek_pembagi = b;
    int shift = 0;
    while ((cek_pembagi << 1) <= a) {
        cek_pembagi <<= 1;
        shift++;
    }

    while (shift >= 0) {
        if (a >= cek_pembagi) {
            a -= cek_pembagi;
            hasil |= (1 << shift);
        }
        cek_pembagi >>= 1;
        shift--;
    }

    return negatif ? -hasil : hasil;
}

int mod(int a, int b)
{
  if (b == 0) return -1;
    int cek_pembagi = b;
    int shift = 0;

    while ((temp_b << 1) <= a) {
        cek_pembagi <<= 1;
        shift++;
    }

    while (shift >= 0) {
        if (a >= cek_pembagi) {
            a -= cek_pembagi;
        }
        cek_pembagi >>= 1;
        shift--;
    }

    return a;
}

bool strcmp(char *str1, char *str2)
{
  //TODO: Implementasi perbandingan string
}

void strcpy(char *dst, char *src)
{
  //TODO: Implementasi penyalinan string
}

void clear(byte *buf, unsigned int size)
{
  //TODO: Implementasi pembersihan buffer
}

void atoi(char *str, int *num)
{
  //TODO: Implementasi konversi string ke integer
  //NOTE: HARUS BISA ANGKA NEGATIF
}

void itoa(int num, char *str)
{
  //TODO: Implementasi konversi integer ke string
  //NOTE: HARUS BISA ANGKA NEGATIF
}
