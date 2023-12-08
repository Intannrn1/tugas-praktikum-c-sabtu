#include <stdio.h>

int main() {
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int N;
	
	printf("masukkan nilai integer N: ");
	scanf("%d", &N);
	
	int found;
	
	for (int i = 0; i < 11; ++i) {
		if (A[i] == N) {
			found = 1;
			break; // Keluar dari loop jika nilai ditemukan
		}
	}
	
	if (found) {
		printf("ADA\nLokasi bilangan yang sama di index ke");
		for (int i = 0; i < 11; ++i) {
			if (A[i] == N) {
				printf(" %d", i);
			}
		}
		printf("\n");
	}else {
		printf("TIDAK ADA, Nilai %d tidak ditemukan dalam array.\n, N");
	}
	
	return 0;
}
