// Solving Kattis 2048
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int board[4][4];
int dMov;

void doMove(int dir) {
	switch(dir) {
		case 1: {
			for(int i = 0; i < 4; i++) {
				for (int t = 0; t < 2; t++) for (int j = 1; j < 4; j++) {
					if (j == 0) continue;
					if (board[i][j] == 0) continue;
					if (board[i][j-1] == 0) {
						board[i][j-1] = board[i][j];
						board[i][j] = 0;
						j--;
					}
				}
				for (int j = 1; j < 4; j++) {
					if (board[i][j] == 0) continue;
					if (board[i][j-1] == board[i][j]) {
						board[i][j-1] += board[i][j];
						board[i][j] = 0;
						j++;
					}
				}
				for (int t = 0; t < 2; t++) for (int j = 1; j < 4; j++) {
					if (j == 0) continue;
					if (board[i][j] == 0) continue;
					if (board[i][j-1] == 0) {
						board[i][j-1] = board[i][j];
						board[i][j] = 0;
						j--;
					}
				}
			}
			break;
		}
		case 0: {
			for(int i = 0; i < 4; i++) {
				for (int t = 0; t < 2; t++) for (int j = 1; j < 4; j++) {
					if (j == 0) continue;
					if (board[j][i] == 0) continue;
					if (board[j-1][i] == 0) {
						board[j-1][i] = board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
				for (int j = 1; j < 4; j++) {
					if (board[j][i] == 0) continue;
					if (board[j-1][i] == board[j][i]) {
						board[j-1][i] += board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
				for (int t = 0; t < 2; t++) for (int j = 1; j < 4; j++) {
					if (j == 0) continue;
					if (board[j][i] == 0) continue;
					if (board[j-1][i] == 0) {
						board[j-1][i] = board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
			}
			break;
		}
		case 3: {
			for(int i = 0; i < 4; i++) {
				for (int t = 0; t < 2; t++) for (int j = 2; j > -1; j--) {
					if (j == 3) continue;
					if (board[i][j] == 0) continue;
					if (board[i][j+1] == 0) {
						board[i][j+1] = board[i][j];
						board[i][j] = 0;
						j++;
					}
				}
				for (int j = 2; j > -1; j--) {
					if (board[i][j] == 0) continue;
					if (board[i][j+1] == board[i][j]) {
						board[i][j+1] += board[i][j];
						board[i][j] = 0;
						j++;
					}
				}
				for (int t = 0; t < 2; t++) for (int j = 2; j > -1; j--) {
					if (j == 3) continue;
					if (board[i][j] == 0) continue;
					if (board[i][j+1] == 0) {
						board[i][j+1] = board[i][j];
						board[i][j] = 0;
						j++;
					}
				}
			}
			break;
		}
		case 2: {
			for(int i = 0; i < 4; i++) {
				for (int t = 0; t < 2; t++) for (int j = 2; j > -1; j--) {
					if (j == 3) continue;
					if (board[j][i] == 0) continue;
					if (board[j+1][i] == 0) {
						board[j+1][i] = board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
				for (int j = 2; j > -1; j--) {
					if (board[j][i] == 0) continue;
					if (board[j+1][i] == board[j][i]) {
						board[j+1][i] += board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
				for (int t = 0; t < 2; t++) for (int j = 2; j > -1; j--) {
					if (j == 3) continue;
					if (board[j][i] == 0) continue;
					if (board[j+1][i] == 0) {
						board[j+1][i] = board[j][i];
						board[j][i] = 0;
						j++;
					}
				}
			}
			break;
		}
	}
}

int main() {
	for(int i = 0; i < 16; i++) {
		std::cin >> board[i%4][i/4];
	}
	std::cin >> dMov;
	doMove(dMov);
	for(int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << board[j][i] << " ";
		}
		std::cout << std::endl;
	}
}