#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char gamelist[] = {'#','1','2','3','4','5','6','7','8','9'};

void display(char lis[]) {
    printf(" ___________\n");
    printf("| %c | %c | %c |\n", lis[1], lis[2], lis[3]);
    printf("|___|___|___|\n");
    printf("| %c | %c | %c |\n", lis[4], lis[5], lis[6]);
    printf("|___|___|___|\n");
    printf("| %c | %c | %c |\n", lis[7], lis[8], lis[9]);
    printf("|___|___|___|\n");
}

bool opening(char *player) {
    printf("WELCOME TO TIC TAC TOE\n");
    char choice[4];
    printf("Are you ready (Yes/No): ");
    scanf("%s", choice);
    while (strcmp(choice, "Yes") != 0 && strcmp(choice, "No") != 0) {
        printf("I don't understand. Make sure your choice!!!\n");
        printf("Are you ready (Yes/No): ");
        scanf("%s", choice);
    }
    if (strcmp(choice, "Yes") == 0) {
        printf("Hai Player 1\n");
        printf("Choose your character (X/O): ");
        scanf("%s", player);
        while (*player != 'X' && *player != 'O') {
            printf("I don't understand. Make sure your choice!!!\n");
            printf("Choose your character (X/O): ");
            scanf("%s", player);
        }
        return true;
    } else {
        printf("Goodbye\n");
        return false;
    }
}

char opening2(char nilai) {
    if (nilai == 'X') {
        return 'O';
    } else if (nilai == 'O') {
        return 'X';
    }
}

void input_game(char pola, char pola2, char list_game[]) {
    char *gamelist = list_game;
    char nilai_awal[10];
    strcpy(nilai_awal, gamelist);

    bool flag = true;
    while (flag) {
        printf("Player 1\n");
        display(gamelist);
        int iii;
        printf("Masukkan posisi yang anda ingin ubah(1-9): ");
        scanf("%d", &iii);
        while (iii < 1 || iii > 9) {
            printf("Make sure your choice!!!\n");
            printf("Masukkan posisi yang anda ingin ubah(1-9): ");
            scanf("%d", &iii);
        }
        gamelist[iii] = pola;
        if ((gamelist[1] == gamelist[2] && gamelist[2] == gamelist[3] && gamelist[3] == pola) ||
            (gamelist[4] == gamelist[5] && gamelist[5] == gamelist[6] && gamelist[6] == pola) ||
            (gamelist[7] == gamelist[8] && gamelist[8] == gamelist[9] && gamelist[9] == pola) ||
            (gamelist[1] == gamelist[4] && gamelist[4] == gamelist[7] && gamelist[7] == pola) ||
            (gamelist[2] == gamelist[5] && gamelist[5] == gamelist[8] && gamelist[8] == pola) ||
            (gamelist[3] == gamelist[6] && gamelist[6] == gamelist[9] && gamelist[9] == pola) ||
            (gamelist[1] == gamelist[5] && gamelist[5] == gamelist[9] && gamelist[9] == pola) ||
            (gamelist[3] == gamelist[5] && gamelist[5] == gamelist[7] && gamelist[7] == pola)) {
            printf("Player 1 menang. Selamat!\n");
            display(gamelist);
            strcpy(gamelist, nilai_awal);
            break;
        }

        if ((gamelist[1] == pola || gamelist[1] == pola2) &&
            (gamelist[2] == pola || gamelist[2] == pola2) &&
            (gamelist[3] == pola || gamelist[3] == pola2) &&
            (gamelist[4] == pola || gamelist[4] == pola2) &&
            (gamelist[5] == pola || gamelist[5] == pola2) &&
            (gamelist[6] == pola || gamelist[6] == pola2) &&
            (gamelist[7] == pola || gamelist[7] == pola2) &&
            (gamelist[8] == pola || gamelist[8] == pola2) &&
            (gamelist[9] == pola || gamelist[9] == pola2)) {
            printf("Game Draw\n");
            display(gamelist);
            strcpy(gamelist, nilai_awal);
            break;
        }

        printf("Player 2\n");
        display(gamelist);
        printf("Masukkan posisi yang anda ingin ubah(1-9): ");
        scanf("%d", &iii);
        while (iii < 1 || iii > 9) {
            printf("Make sure your choice!!!\n");
            printf("Masukkan posisi yang anda ingin ubah(1-9): ");
            scanf("%d", &iii);
        }
        gamelist[iii] = pola2;
        if ((gamelist[1] == gamelist[2] && gamelist[2] == gamelist[3] && gamelist[3] == pola2) ||
            (gamelist[4] == gamelist[5] && gamelist[5] == gamelist[6] && gamelist[6] == pola2) ||
            (gamelist[7] == gamelist[8] && gamelist[8] == gamelist[9] && gamelist[9] == pola2) ||
            (gamelist[1] == gamelist[4] && gamelist[4] == gamelist[7] && gamelist[7] == pola2) ||
            (gamelist[2] == gamelist[5] && gamelist[5] == gamelist[8] && gamelist[8] == pola2) ||
            (gamelist[3] == gamelist[6] && gamelist[6] == gamelist[9] && gamelist[9] == pola2) ||
            (gamelist[1] == gamelist[5] && gamelist[5] == gamelist[9] && gamelist[9] == pola2) ||
            (gamelist[3] == gamelist[5] && gamelist[5] == gamelist[7] && gamelist[7] == pola2)) {
            printf("Player 2 menang. Selamat!\n");
            display(gamelist);
            strcpy(gamelist, nilai_awal);
            break;
        }

        if ((gamelist[1] == pola || gamelist[1] == pola2) &&
            (gamelist[2] == pola || gamelist[2] == pola2) &&
            (gamelist[3] == pola || gamelist[3] == pola2) &&
            (gamelist[4] == pola || gamelist[4] == pola2) &&
            (gamelist[5] == pola || gamelist[5] == pola2) &&
            (gamelist[6] == pola || gamelist[6] == pola2) &&
            (gamelist[7] == pola || gamelist[7] == pola2) &&
            (gamelist[8] == pola || gamelist[8] == pola2) &&
            (gamelist[9] == pola || gamelist[9] == pola2)) {
            printf("Game Draw\n");
            display(gamelist);
            strcpy(gamelist, nilai_awal);
            break;
        }
    }
}

void restart_game() {
    bool flag2 = true;
    while (flag2) {
        char x_o;
        if (!opening(&x_o)) {
            flag2 = false;
            break;
        }
        char o_x = opening2(x_o);
        input_game(x_o, o_x, gamelist);
        char iiii[4];
        printf("Apakah anda ingin bermain lagi (yes/no): ");
        scanf("%s", iiii);
        while (strcmp(iiii, "yes") != 0 && strcmp(iiii, "no") != 0) {
            printf("I don't understand. Make sure your choice!!!\n");
            printf("Apakah anda ingin bermain lagi (yes/no): ");
            scanf("%s", iiii);
        }
        if (strcmp(iiii, "no") == 0) {
            flag2 = false;
            printf("Terima kasih sudah bermain!\n");
        }
    }
}

int main() {
    restart_game();
    return 0;
}
