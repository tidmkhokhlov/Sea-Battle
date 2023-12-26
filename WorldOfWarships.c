#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NLINES 11
#define SIZE 15
#define SIZEALL 32

char *FIELD_P1[NLINES][SIZE] = {
    "  ","    ","[A]","[B]","[C]","[D]","[E]","[F]","[G]","[H]","[I]","[J]","   ","[P]","[1]",
    "  ","[1] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[2] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[3] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[4] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[5] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[6] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[7] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[8] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[9] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    " ","[10] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   "
    
};

char *FIELD_P2[NLINES][SIZE] = {
    "  ","    ","[A]","[B]","[C]","[D]","[E]","[F]","[G]","[H]","[I]","[J]","   ","[P]","[2]",
    "  ","[1] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[2] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[3] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[4] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[5] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[6] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[7] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[8] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[9] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    " ","[10] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   "
};

char *FIELD_ALL[NLINES][SIZEALL] = {
    "  ","    ","[A]","[B]","[C]","[D]","[E]","[F]","[G]","[H]","[I]","[J]","   ","[P]","[1]","[|]","[|]","  ","    ","[A]","[B]","[C]","[D]","[E]","[F]","[G]","[H]","[I]","[J]","   ","[P]","[2]",
    "  ","[1] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[1] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[2] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[2] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[3] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[3] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[4] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[4] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[5] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[5] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[6] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[6] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[7] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[7] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[8] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[8] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    "  ","[9] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]","  ","[9] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ",
    " ","[10] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   ","[|]","[|]"," ","[10] "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ "," ~ ","   ","   ","   "
};

char *FIELD[NLINES][SIZEALL];

static struct {
    int score1;
    int score2;
    int winnernum; 
}Statistic;

void rules() {
    char r;
    puts("~~~RULES~~~");
    printf("The game uses standard naval combat rules. At the beginning of the game, players take turns placing ALL THEIR SHIPS, namely:\n+ 1 four-deck;\n+ 2 three-deck;\n+ 3 two-deck;\n+ 4 one-deck.\nShips must be located exclusively straight, they should not contain no bends. When placing them on the field, remember that the vessels should not touch each other in any way - neither sides nor corners. There should always be gaps. But touching the edges of the fields, occupying corners on the playing field is allowed. Placing ships on top of others and placing them in the same cage is prohibited! Once all of your ships are deployed, switch with another player.\nWhen all of both player's ships are deployed, they take turns choosing the squares where they want to shoot. If a player hits, he shoots again, if he misses, then the players change.\nThe game continues until all the ships of one of the players are destroyed or until the player enters Q+Enter in the console, which will automatically end the game.\nIcons :\n - [K] - ship;\n - [+] - hit;\n - [X] - destruction;\n -  O  - miss.\nCoordinate input format A1 A2 A3 ... J9 J10. Coordinates are entered one at a time, after entering one, press Enter.\n");
    puts("Press Enter to start game: ");
    scanf("%c", &r);
}

void outputField(int player) {
    if (player == 0) {
        for (int i = 0; i < NLINES; i++) {
            for (int j = 0; j < SIZE; j++) {
                printf("%s", FIELD_P1[i][j]);
            }
            puts("\n");
        }
    } else {
        for (int i = 0; i < NLINES; i++) {
            for (int j = 0; j < SIZE; j++) {
                printf("%s", FIELD_P2[i][j]);
            }
            puts("\n");
        }
    }
    return;
}

int translation(char p) {
    int y = 0;
    switch (p)
    {
    case 'A':
        y = 2;
        break;
    case 'B':
        y = 3;
        break;
    case 'C':
        y = 4;
        break;
    case 'D':
        y = 5;
        break;
    case 'E':
        y = 6;
        break;
    case 'F':
        y = 7;
        break;
    case 'G':
        y = 8;
        break;
    case 'H':
        y = 9;
        break;
    case 'I':
        y = 10;
        break;
    case 'J':
        y = 11;
        break;
    }
    return y;
}

void arrengementShips(int player) {
    int x = 0;
    char p;
    char h;
    int flag1[12][13] = {0};
    int flag2[12][13] = {0};
    int xstart = 0;
    int ystart = 0;
    int xend = 0;
    int yend = 0;
    int x1 = 0;
    int y1 = 0;
    if (player == 0) {
        system("cls");
        puts("Player_1");
        outputField(player);
        puts("Position the four-deck");
        for (int i = 0; i < 4; i++) {
            scanf("%c", &p);
            if (p == 'Q') {
                exit(1);
            }
            int y = translation(p);
            scanf("%d", &x);
            scanf("%c", &h);
            if (x < 1 || x > 10 || y == 0) {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
            }
            if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 4 || flag1[x+1][y] == 4 || flag1[x][y-1] == 4 || flag1[x][y+1] == 4))) {
                if (i > 0 && x != x1 && y != y1) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
                } else {
                    FIELD_P1[x][y] = "[K]";
                    flag1[x][y] = 4;
                    if (i == 0) {
                        xend = x;
                        yend = y;
                        xstart = x;
                        ystart = y;
                        x1 = x;
                        y1 = y;
                    }
                    if (xstart > x) {
                        xstart = x;
                    } else if (ystart > y) {
                        ystart = y;
                    }
                    if (i == 1 && x == x1) {
                        y1 = 0;
                    } else if (i == 1 && y == y1) {
                        x1 = 0;
                    }
                    if (xend < x) {
                        xend = x;
                    } else if (yend < y) {
                        yend = y;
                    }
                }
            } else {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                i--;
            }
        }
        if (xstart > xend) {
            int h = xstart;
            xstart = xend;
            xend = h;
        }
        if (ystart > yend) {
            int h = ystart;
            ystart = yend;
            yend = h;
        }
        for (int i = xstart-1; i <= xend+1; i++) {
            for (int j = ystart-1; j <= yend+1; j++) {
                flag1[i][j] = 5;
            }
        }
        system("cls");
        outputField(player);
        for (int k = 0; k < 2; k++) {
            puts("Position the three-deck");
            for (int i = 0; i < 3; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 3 || flag1[x+1][y] == 3 || flag1[x][y-1] == 3 || flag1[x][y+1] == 3))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 3;
                        if (i == 0) {
                            xend = x;
                            yend = y;
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (xstart > x) {
                            xstart = x;
                        } else if (ystart > y) {
                            ystart = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (xend < x) {
                            xend = x;
                        } else if (yend < y) {
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 3; k++) {
            puts("Position the two-deck");
            for (int i = 0; i < 2; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 2 || flag1[x+1][y] == 2 || flag1[x][y-1] == 2 || flag1[x][y+1] == 2))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 2;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 1) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 4; k++) {
            puts("Position the one-deck");
            for (int i = 0; i < 1; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 1 || flag1[x+1][y] == 1 || flag1[x][y-1] == 1 || flag1[x][y+1] == 1))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 1;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 0) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        puts("Press Enter: ");
        scanf("%c", &h);
        if (h == 'Q') {
            exit(1);
        }
        system("cls");
    } else {
        puts("Player_2, press Enter: ");
        scanf("%c", &h);
        if (h == 'Q') {
            exit(1);
        }
        system("cls");
        puts("Player_2");
        outputField(player);
        puts("Position the four-deck");
        for (int i = 0; i < 4; i++) {
            scanf("%c", &p);
            if (p == 'Q') {
                exit(1);
            }
            int y = translation(p);
            scanf("%d", &x);
            scanf("%c", &h);
            if (x < 1 || x > 10 || y == 0) {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
            }
            if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 4 || flag2[x+1][y] == 4 || flag2[x][y-1] == 4 || flag2[x][y+1] == 4))) {
                if (i > 0 && x != x1 && y != y1) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
                } else {
                    FIELD_P2[x][y] = "[K]";
                    flag2[x][y] = 4;
                    if (i == 0) {
                        xend = x;
                        yend = y;
                        xstart = x;
                        ystart = y;
                        x1 = x;
                        y1 = y;
                    }
                    if (xstart > x) {
                        xstart = x;
                    } else if (ystart > y) {
                        ystart = y;
                    }
                    if (i == 1 && x == x1) {
                        y1 = 0;
                    } else if (i == 1 && y == y1) {
                        x1 = 0;
                    }
                    if (xend < x) {
                        xend = x;
                    } else if (yend < y) {
                        yend = y;
                    }
                }
            } else {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                i--;
            }
        }
        if (xstart > xend) {
            int h = xstart;
            xstart = xend;
            xend = h;
        }
        if (ystart > yend) {
            int h = ystart;
            ystart = yend;
            yend = h;
        }
        for (int i = xstart-1; i <= xend+1; i++) {
            for (int j = ystart-1; j <= yend+1; j++) {
                flag2[i][j] = 5;
            }
        }
        system("cls");
        outputField(player);
        for (int k = 0; k < 2; k++) {
            puts("Position the three-deck");
            for (int i = 0; i < 3; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 3 || flag2[x+1][y] == 3 || flag2[x][y-1] == 3 || flag2[x][y+1] == 3))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 3;
                        if (i == 0) {
                            xend = x;
                            yend = y;
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (xstart > x) {
                            xstart = x;
                        } else if (ystart > y) {
                            ystart = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (xend < x) {
                            xend = x;
                        } else if (yend < y) {
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 3; k++) {
            puts("Position the two-deck");
            for (int i = 0; i < 2; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 2 || flag2[x+1][y] == 2 || flag2[x][y-1] == 2 || flag2[x][y+1] == 2))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 2;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 1) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 4; k++) {
            puts("Position the one-deck");
            for (int i = 0; i < 1; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 1 || flag2[x+1][y] == 1 || flag2[x][y-1] == 1 || flag2[x][y+1] == 1))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 1;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 0) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        puts("Press Enter: ");
        scanf("%c", &h);
        if (h == 'Q') {
            exit(1);
        }
        system("cls");
    }
}

void arrengementShipsC(int player) {
    int x = 0;
    char p;
    char h;
    int flag1[12][13] = {0};
    int flag2[12][13] = {0};
    int xstart = 0;
    int ystart = 0;
    int xend = 0;
    int yend = 0;
    int x1 = 0;
    int y1 = 0;
    srand(time(NULL));

    if (player == 0) {
        system("cls");
        puts("Player_1");
        outputField(player);
        puts("Position the four-deck");
        for (int i = 0; i < 4; i++) {
            scanf("%c", &p);
            if (p == 'Q') {
                exit(1);
            }
            int y = translation(p);
            scanf("%d", &x);
            scanf("%c", &h);
            if (x < 1 || x > 10 || y == 0) {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
            }
            if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 4 || flag1[x+1][y] == 4 || flag1[x][y-1] == 4 || flag1[x][y+1] == 4))) {
                if (i > 0 && x != x1 && y != y1) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                    continue;
                } else {
                    FIELD_P1[x][y] = "[K]";
                    flag1[x][y] = 4;
                    if (i == 0) {
                        xend = x;
                        yend = y;
                        xstart = x;
                        ystart = y;
                        x1 = x;
                        y1 = y;
                    }
                    if (xstart > x) {
                        xstart = x;
                    } else if (ystart > y) {
                        ystart = y;
                    }
                    if (i == 1 && x == x1) {
                        y1 = 0;
                    } else if (i == 1 && y == y1) {
                        x1 = 0;
                    }
                    if (xend < x) {
                        xend = x;
                    } else if (yend < y) {
                        yend = y;
                    }
                }
            } else {
                puts("!!!ALARM!!! (INCORRECT INPUT)");
                i--;
            }
        }
        if (xstart > xend) {
            int h = xstart;
            xstart = xend;
            xend = h;
        }
        if (ystart > yend) {
            int h = ystart;
            ystart = yend;
            yend = h;
        }
        for (int i = xstart-1; i <= xend+1; i++) {
            for (int j = ystart-1; j <= yend+1; j++) {
                flag1[i][j] = 5;
            }
        }
        system("cls");
        outputField(player);
        for (int k = 0; k < 2; k++) {
            puts("Position the three-deck");
            for (int i = 0; i < 3; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 3 || flag1[x+1][y] == 3 || flag1[x][y-1] == 3 || flag1[x][y+1] == 3))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 3;
                        if (i == 0) {
                            xend = x;
                            yend = y;
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (xstart > x) {
                            xstart = x;
                        } else if (ystart > y) {
                            ystart = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (xend < x) {
                            xend = x;
                        } else if (yend < y) {
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 3; k++) {
            puts("Position the two-deck");
            for (int i = 0; i < 2; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 2 || flag1[x+1][y] == 2 || flag1[x][y-1] == 2 || flag1[x][y+1] == 2))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 2;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 1) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        for (int k = 0; k < 4; k++) {
            puts("Position the one-deck");
            for (int i = 0; i < 1; i++) {
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                }
                if ((flag1[x][y] == 0) && ((i == 0) || (flag1[x-1][y] == 1 || flag1[x+1][y] == 1 || flag1[x][y-1] == 1 || flag1[x][y+1] == 1))) {
                    if (i > 0 && x != x1 && y != y1) {
                        puts("!!!ALARM!!! (INCORRECT INPUT)");
                        i--;
                        continue;
                    } else {
                        FIELD_P1[x][y] = "[K]";
                        flag1[x][y] = 1;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 0) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)");
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag1[i][j] = 5;
                }
            }
            system("cls");
            outputField(player);
        }
        puts("Press Enter: ");
        scanf("%c", &h);
        if (h == 'Q') {
            exit(1);
        }
        system("cls");
    } else {
        system("cls");
        for (int i = 0; i < 4; i++) {
            int y = 2 + rand()%10;
            x = 1 + rand()%10;
            if (x < 1 || x > 10 || y < 2 || y > 11) {
                    i--;
                    continue;
            }
            if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 4 || flag2[x+1][y] == 4 || flag2[x][y-1] == 4 || flag2[x][y+1] == 4))) {
                if (i > 0 && x != x1 && y != y1) {
                    i--;
                    continue;
                } else {
                    FIELD_P2[x][y] = "[K]";
                    flag2[x][y] = 4;
                    if (i == 0) {
                        xend = x;
                        yend = y;
                        xstart = x;
                        ystart = y;
                        x1 = x;
                        y1 = y;
                    }
                    if (xstart > x) {
                        xstart = x;
                    } else if (ystart > y) {
                        ystart = y;
                    }
                    if (i == 1 && x == x1) {
                        y1 = 0;
                    }
                    if (i == 1 && y == y1) {
                        x1 = 0;
                    }
                    if (xend < x) {
                        xend = x;
                    } else if (yend < y) {
                        yend = y;
                    }
                }
            } else {
                i--;
            }
        }
        if (xstart > xend) {
            int h = xstart;
            xstart = xend;
            xend = h;
        }
        if (ystart > yend) {
            int h = ystart;
            ystart = yend;
            yend = h;
        }
        for (int i = xstart-1; i <= xend+1; i++) {
            for (int j = ystart-1; j <= yend+1; j++) {
                flag2[i][j] = 5;
            }
        }
        for (int k = 0; k < 2; k++) {
            for (int i = 0; i < 3; i++) {
                int y = 2 + rand()%10;
                x = 1 + rand()%10;
                if (x < 1 || x > 10 || y < 2 || y > 11) {
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 3 || flag2[x+1][y] == 3 || flag2[x][y-1] == 3 || flag2[x][y+1] == 3))) {
                    if (i > 0 && x != x1 && y != y1) {
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 3;
                        if (i == 0) {
                            xend = x;
                            yend = y;
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (xstart > x) {
                            xstart = x;
                        }
                        if (ystart > y) {
                            ystart = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (xend < x) {
                            xend = x;
                        } else if (yend < y) {
                            yend = y;
                        }
                    }
                } else {
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
        }
        
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < 2; i++) {
                int y = 2 + rand()%10;
                x = 1 + rand()%10;
                if (x < 1 || x > 10 || y < 2 || y > 11) {
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 2 || flag2[x+1][y] == 2 || flag2[x][y-1] == 2 || flag2[x][y+1] == 2))) {
                    if (i > 0 && x != x1 && y != y1) {
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 2;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 1) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
        }
        for (int k = 0; k < 4; k++) {
            for (int i = 0; i < 1; i++) {
                int y = 2 + rand()%10;
                x = 1 + rand()%10;
                if (x < 1 || x > 10 || y < 2 || y > 11) {
                        i--;
                        continue;
                }
                if ((flag2[x][y] == 0) && ((i == 0) || (flag2[x-1][y] == 1 || flag2[x+1][y] == 1 || flag2[x][y-1] == 1 || flag2[x][y+1] == 1))) {
                    if (i > 0 && x != x1 && y != y1) {
                        i--;
                        continue;
                    } else {
                        FIELD_P2[x][y] = "[K]";
                        flag2[x][y] = 1;
                        if (i == 0) {
                            xstart = x;
                            ystart = y;
                            x1 = x;
                            y1 = y;
                        }
                        if (i == 1 && x == x1) {
                            y1 = 0;
                        } else if (i == 1 && y == y1) {
                            x1 = 0;
                        }
                        if (i == 0) {
                            xend = x;
                            yend = y;
                        }
                    }
                } else {
                    i--;
                }
            }
            if (xstart > xend) {
                int h = xstart;
                xstart = xend;
                xend = h;
            }
            if (ystart > yend) {
                int h = ystart;
                ystart = yend;
                yend = h;
            }
            for (int i = xstart-1; i <= xend+1; i++) {
                for (int j = ystart-1; j <= yend+1; j++) {
                    flag2[i][j] = 5;
                }
            }
        }
        system("cls");
    }
}

void fillField() {
    for (int i = 0; i < NLINES; i++) {
        for (int j = 0; j < SIZE; j++) {
            FIELD[i][j] = FIELD_P1[i][j];
        }
        FIELD[i][SIZE] = "[|]";
        FIELD[i][SIZE+1] = "[|]";
        for (int j = 1; j < SIZE+1; j++) {
            FIELD[i][j+SIZE+1] = FIELD_P2[i][j-1];
        }
    }
}

void outputFieldCache() {
    for (int i = 0; i < NLINES; i++) {
        for (int j = 0; j < SIZEALL; j++) {
            printf("%s", FIELD[i][j]);
        }
        puts("\n");
    }
}

void outputFieldAll(int player) {
    if (player == 0) {
        for (int i = 0; i < NLINES; i++) {
            for (int j = 0; j < SIZEALL/2; j++) {
                printf("%s", FIELD[i][j]);
            }
            for (int j = SIZEALL/2; j < SIZEALL; j++) {
                printf("%s", FIELD_ALL[i][j]);
            }
            puts("\n");
        }
    } else {
        for (int i = 0; i < NLINES; i++) {
            for (int j = 0; j < SIZEALL/2; j++) {
                printf("%s", FIELD_ALL[i][j]);
            }
            for (int j = SIZEALL/2; j < SIZEALL; j++) {
                printf("%s", FIELD[i][j]);
            }
            puts("\n");
        }
    }
}

void killSearch(int x, int y) {
    if (FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]" && FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]" && FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
    } 
    if (FIELD[x-2][y] != "[+]" && FIELD[x-2][y] != "[K]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] != "[+]" && FIELD[x][y+2] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
    } else if (FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] != "[+]" && FIELD[x+2][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
    } else if (FIELD[x][y-2] != "[+]" && FIELD[x][y-2] != "[K]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    }
    if (FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x+3][y] != "[+]" && FIELD[x+3][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD_ALL[x+2][y] = "[X]";
    } else if (FIELD[x-2][y] != "[+]" && FIELD[x-2][y] != "[K]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] != "[+]" && FIELD[x+2][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x-3][y] != "[+]" && FIELD[x-3][y] != "[K]" && FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
    } else if (FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] != "[+]" && FIELD[x][y+3] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
    } else if (FIELD[x][y-2] != "[+]" && FIELD[x][y-2] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+2] != "[+]" && FIELD[x][y+2] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    } else if (FIELD[x][y-3] != "[+]" && FIELD[x][y-3] != "[K]" && FIELD[x][y-1] == "[+]" && FIELD[x][y-2] == "[+]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    }
    if (FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x+3][y] == "[+]" && FIELD[x+4][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD_ALL[x+2][y] = "[X]";
        FIELD[x+3][y] = "[X]";
        FIELD_ALL[x+3][y] = "[X]";
    } else if (FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x+3][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD_ALL[x+2][y] = "[X]";
    } else if (FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
    } else if (FIELD[x-3][y] == "[+]" && FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-3][y] = "[X]";
        FIELD_ALL[x-3][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] == "[+]" && FIELD[x][y+4] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
        FIELD[x][y+3] = "[X]";
        FIELD_ALL[x][y+3] = "[X]";
    } else if (FIELD[x][y-1] == "[+]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
    } else if (FIELD[x][y-2] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
    } else if (FIELD[x][y-3] == "[+]" && FIELD[x][y-2] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-3] = "[X]";
        FIELD_ALL[x][y-3] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    }
}

void killSearchC2(int x, int y) {
    if (FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]" && FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]" && FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
    } 
    if (FIELD[x-2][y] != "[+]" && FIELD[x-2][y] != "[K]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD[x-2][y] = " & ";
        FIELD[x-2][y+1] = " & ";
        FIELD[x-2][y-1] = " & ";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] != "[+]" && FIELD[x][y+2] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD[x][y+2] = " & ";
        FIELD[x-1][y+2] = " & ";
        FIELD[x+1][y+2] = " & ";
        FIELD_ALL[x][y+1] = "[X]";
    } else if (FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] != "[+]" && FIELD[x+2][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD[x+2][y] = " & ";
        FIELD[x+2][y-1] = " & ";
        FIELD[x+2][y+1] = " & ";
        FIELD_ALL[x+1][y] = "[X]";
    } else if (FIELD[x][y-2] != "[+]" && FIELD[x][y-2] != "[K]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD[x][y-2] = " & ";
        FIELD[x-1][y-2] = " & ";
        FIELD[x+1][y-2] = " & ";
        FIELD_ALL[x][y-1] = "[X]";
    }
    if (FIELD[x-1][y] != "[+]" && FIELD[x-1][y] != "[K]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x+3][y] != "[+]" && FIELD[x+3][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD[x+3][y+1] = " & ";
        FIELD[x+2][y+1] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x+3][y] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD[x+2][y-1] = " & ";
        FIELD[x+3][y-1] = " & ";
        FIELD_ALL[x+2][y] = "[X]";
    } else if (FIELD[x-2][y] != "[+]" && FIELD[x-2][y] != "[K]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] != "[+]" && FIELD[x+2][y] != "[K]") {
        FIELD[x][y] = "[X]";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD[x+2][y] = " & ";
        FIELD[x+2][y+1] = " & ";
        FIELD[x+1][y+1] = " & ";
        FIELD[x][y+1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD[x+1][y-1] = " & ";
        FIELD[x+2][y-1] = " & ";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD[x][y+1] = " & ";
        FIELD[x-1][y+1] = " & ";
        FIELD[x-2][y+1] = " & ";
        FIELD[x-2][y] = " & ";
        FIELD[x-2][y-1] = " & ";
        FIELD[x-1][y-1] = " & ";
        FIELD[x][y-1] = " & ";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x-3][y] != "[+]" && FIELD[x-3][y] != "[K]" && FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] != "[+]" && FIELD[x+1][y] != "[K]") {
        for (int i = x-3; i <= x+1; i++) {
            for (int j = y-1; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
    } else if (FIELD[x][y-1] != "[+]" && FIELD[x][y-1] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] != "[+]" && FIELD[x][y+3] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-1; j <= y+3; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
    } else if (FIELD[x][y-2] != "[+]" && FIELD[x][y-2] != "[K]" && FIELD[x][y+1] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+2] != "[+]" && FIELD[x][y+2] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-2; j <= y+2; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    } else if (FIELD[x][y-3] != "[+]" && FIELD[x][y-3] != "[K]" && FIELD[x][y-1] == "[+]" && FIELD[x][y-2] == "[+]" && FIELD[x][y+1] != "[+]" && FIELD[x][y+1] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-3; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    }
    if (FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x+3][y] == "[+]" && FIELD[x][y+4] != "[K]") {
        for (int i = x-1; i <= x+4; i++) {
            for (int j = y-1; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD_ALL[x+2][y] = "[X]";
        FIELD[x+3][y] = "[X]";
        FIELD_ALL[x+3][y] = "[X]";
    } else if (FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x+2][y] == "[+]" && FIELD[x][y+3] != "[K]") {
        for (int i = x-2; i <= x+3; i++) {
            for (int j = y-1; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
        FIELD[x+2][y] = "[X]";
        FIELD_ALL[x+2][y] = "[X]";
    } else if (FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x+1][y] == "[+]" && FIELD[x][y+2] != "[K]") {
        for (int i = x-3; i <= x+2; i++) {
            for (int j = y-1; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
        FIELD[x+1][y] = "[X]";
        FIELD_ALL[x+1][y] = "[X]";
    } else if (FIELD[x-3][y] == "[+]" && FIELD[x-2][y] == "[+]" && FIELD[x-1][y] == "[+]" && FIELD[x][y+1] != "[K]") {
        for (int i = x-4; i <= x+1; i++) {
            for (int j = y-1; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x-3][y] = "[X]";
        FIELD_ALL[x-3][y] = "[X]";
        FIELD[x-2][y] = "[X]";
        FIELD_ALL[x-2][y] = "[X]";
        FIELD[x-1][y] = "[X]";
        FIELD_ALL[x-1][y] = "[X]";
    } else if (FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] == "[+]" && FIELD[x][y+4] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-1; j <= y+4; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
        FIELD[x][y+3] = "[X]";
        FIELD_ALL[x][y+3] = "[X]";
    } else if (FIELD[x][y-1] == "[+]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] == "[+]" && FIELD[x][y+3] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-2; j <= y+3; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
        FIELD[x][y+2] = "[X]";
        FIELD_ALL[x][y+2] = "[X]";
    } else if (FIELD[x][y-2] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] == "[+]" && FIELD[x][y+2] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-3; j <= y+2; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
        FIELD[x][y+1] = "[X]";
        FIELD_ALL[x][y+1] = "[X]";
    } else if (FIELD[x][y-3] == "[+]" && FIELD[x][y-2] == "[+]" && FIELD[x][y-1] == "[+]" && FIELD[x][y+1] != "[K]") {
        for (int i = x-1; i <= x+1; i++) {
            for (int j = y-4; j <= y+1; j++) {
                FIELD[i][j] = " & ";
            }
        }
        FIELD[x][y] = "[X]";
        FIELD_ALL[x][y] = "[X]";
        FIELD[x][y-3] = "[X]";
        FIELD_ALL[x][y-3] = "[X]";
        FIELD[x][y-2] = "[X]";
        FIELD_ALL[x][y-2] = "[X]";
        FIELD[x][y-1] = "[X]";
        FIELD_ALL[x][y-1] = "[X]";
    }
    for (int i = 0; i < SIZEALL; i++) {
        FIELD[0][i] = FIELD_ALL[0][i];
    }
    for (int i = 0; i < NLINES; i++) {
        FIELD[i][1] = FIELD_ALL[i][1];
    }
    for (int i = 0; i < NLINES; i++) {
        FIELD[i][12] = FIELD_ALL[i][12];
    }
}

int battle(int player) {
    int x = 0;
    char p;
    char h;
    int k1 = 0;
    int k2 = 0;
    int i = 0;
    int hit = 1;
    while (k1 != 20 && k2 != 20) {
        if (player == 1) {
            while (hit != 0) {
                puts("Player_2, press Enter to shoot: ");
                scanf("%c", &h);
                if (h == 'Q') {
                    exit(1);
                }
                system("cls");
                puts("Player_2");
                outputFieldAll(player);
                puts("Shoot: ");
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                system("cls");
                if (x < 1 || x > 10 || y == 0) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                } else if (FIELD[x][y] == " ~ ") {
                    puts("!!!MISSED!!!\n");
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    puts("!!!HIT!!!\n");
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k2++;
                    killSearch(x, y);
                    if (k2 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                }
                outputFieldAll(player);
            }
            puts("Player_2, press Enter to change: ");
            scanf("%c", &h);
            if (h == 'Q') {
                exit(1);
            }
            system("cls");
            hit = 1;
            player = 0;
        } else {
            while (hit != 0) {
                puts("Player_1, press Enter to shoot: ");
                scanf("%c", &h);
                if (h == 'Q') {
                    exit(1);
                }
                system("cls");
                puts("Player_1");
                outputFieldAll(player);
                puts("Shoot: ");
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                system("cls");
                y += 17;
                if (x < 1 || x > 10 || y == 17) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                } else if (FIELD[x][y] == " ~ ") {
                    puts("!!!MISSED!!!\n");
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    puts("!!!HIT!!!\n");
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k1++;
                    killSearch(x, y);
                    if (k1 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                }
                outputFieldAll(player);
            }
            puts("Player_1, press Enter to change: ");
            scanf("%c", &h);
            if (h == 'Q') {
                exit(1);
            }
            system("cls");
            hit = 1;
            player = 1;
        }
    }
}

int battleC(int player) {
    int x = 0;
    char p;
    char h;
    int k1 = 0;
    int k2 = 0;
    int i = 0;
    int hit = 1;
    int f = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int x3 = 0;
    int y3 = 0;
    int y = 0;
    srand(time(NULL));
    while (k1 != 20 && k2 != 20) {
        if (player == 0) {
            while (hit != 0) {
                puts("Player_1, press Enter to shoot: ");
                scanf("%c", &h);
                if (h == 'Q') {
                    exit(1);
                }
                system("cls");
                puts("Player_1");
                outputFieldAll(player);
                puts("Shoot: ");
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                system("cls");
                y += 17;
                if (x < 1 || x > 10 || y == 17) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                } else if (FIELD[x][y] == " ~ ") {
                    puts("!!!MISSED!!!\n");
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    puts("!!!HIT!!!\n");
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k1++;
                    killSearch(x, y);
                    if (k1 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                }
                outputFieldAll(player);
            }
            puts("Player_1, press Enter to change: ");
            scanf("%c", &h);
            if (h == 'Q') {
                exit(1);
            }
            system("cls");
            hit = 1;
            player = 1;
        } else {
            while (hit != 0) {
                if (f == 0) {
                    y = 2 + rand()%10;
                    x = 1 + rand()%10;
                } else if (f == 1) {
                    int w = rand()%4;
                    if (w == 0) {
                        x = x1+1;
                        y = y1;
                    } else if (w == 1) {
                        x = x1-1;
                        y = y1;
                    } else if (w == 2) {
                        y = y1+1;
                        x = x1;
                    } else {
                        y = y1-1;
                        x = x1;
                    }
                } else if (f == 2) {
                    int w = rand()%2;
                    if (x1 == x2) {
                        if (y1 > y2) {
                            int r = y1;
                            y1 = y2;
                            y2 = r;
                        }
                        if (w == 0) {
                            x = x2;
                            y = y2+1;
                        } else {
                            x = x1;
                            y = y1-1;
                        }
                    } else if (y1 == y2) {
                        if (x1 > x2) {
                            int r = x1;
                            x1 = x2;
                            x2 = r;
                        }
                        if (w == 0) {
                            y = y2;
                            x = x2+1;
                        } else {
                            y = y1;
                            x = x1-1;
                        }
                    }
                } else if (f == 3) {
                    int w = rand()%2;
                    if (x1 == x3) {
                        if (y1 > y3) {
                            int r = y1;
                            y1 = y3;
                            y3 = r;
                        }
                        if (w == 0) {
                            x = x3;
                            y = y3+1;
                        } else {
                            x = x1;
                            y = y1-1;
                        }
                    } else if (y1 == y3) {
                        if (x1 > x3) {
                            int r = x1;
                            x1 = x3;
                            x3 = r;
                        }
                        if (w == 0) {
                            y = y3;
                            x = x3+1;
                        } else {
                            y = y1;
                            x = x1-1;
                        }
                    }
                }
                if (x < 1 || x > 10 || y == 0) {
                    continue;
                } else if (FIELD[x][y] == " ~ ") {
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k2++;
                    killSearch(x, y);
                    if (FIELD[x][y] == "[X]") {
                        f = 0;
                    } else if (f == 0) {
                        f++;
                        x1 = x;
                        y1 = y;
                    } else if (f == 1) {
                        f++;
                        x2 = x;
                        y2 = y;
                    } else if (f == 2) {
                        f++;
                        x3 = x;
                        y3 = y;
                    }
                    if (k2 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    continue;
                }
            }
            hit = 1;
            player = 0;
        }
    }
}

int battleC2(int player) {
    int x = 0;
    char p;
    char h;
    int k1 = 0;
    int k2 = 0;
    int i = 0;
    int hit = 1;
    int f = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int x3 = 0;
    int y3 = 0;
    int y = 0;
    srand(time(NULL));
    while (k1 != 20 && k2 != 20) {
        if (player == 0) {
            while (hit != 0) {
                puts("Player_1, press Enter to shoot: ");
                scanf("%c", &h);
                if (h == 'Q') {
                    exit(1);
                }
                system("cls");
                puts("Player_1");
                outputFieldAll(player);
                puts("Shoot: ");
                scanf("%c", &p);
                if (p == 'Q') {
                    exit(1);
                }
                int y = translation(p);
                scanf("%d", &x);
                scanf("%c", &h);
                system("cls");
                y += 17;
                if (x < 1 || x > 10 || y == 17) {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                } else if (FIELD[x][y] == " ~ ") {
                    puts("!!!MISSED!!!\n");
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    puts("!!!HIT!!!\n");
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k1++;
                    killSearch(x, y);
                    if (k1 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    puts("!!!ALARM!!! (INCORRECT INPUT)\n");
                }
                outputFieldAll(player);
            }
            puts("Player_1, press Enter to change: ");
            scanf("%c", &h);
            if (h == 'Q') {
                exit(1);
            }
            system("cls");
            hit = 1;
            player = 1;
        } else {
            while (hit != 0) {
                if (f == 0) {
                    y = 2 + rand()%10;
                    x = 1 + rand()%10;
                } else if (f == 1) {
                    if (FIELD[x1+1][y1] == "[K]") {
                        x = x1+1;
                        y = y1;
                    } else if (FIELD[x1-1][y1] == "[K]") {
                        x = x1-1;
                        y = y1;
                    } else if (FIELD[x1][y1+1] == "[K]") {
                        x = x1;
                        y = y1+1;
                    } else if (FIELD[x1][y1-1] == "[K]") {
                        x = x1;
                        y = y1-1;
                    }
                } else if (f == 2) {
                    if (x1 == x2) {
                        if (y1 > y2) {
                            int r = y1;
                            y1 = y2;
                            y2 = r;
                        }
                        if (FIELD[x2][y2+1] == "[K]") {
                            x = x2;
                            y = y2+1;
                        } else if (FIELD[x1][y1-1] == "[K]") {
                            x = x1;
                            y = y1-1;
                        }
                    } else if (y1 == y2) {
                        if (x1 > x2) {
                            int r = x1;
                            x1 = x2;
                            x2 = r;
                        }
                        if (FIELD[x2+1][y2] == "[K]") {
                            y = y2;
                            x = x2+1;
                        } else if (FIELD[x1-1][y1] == "[K]") {
                            y = y1;
                            x = x1-1;
                        }
                    }
                } else if (f == 3) {
                    if (x1 == x3) {
                        if (y1 > y3) {
                            int r = y1;
                            y1 = y3;
                            y3 = r;
                        }
                        if (FIELD[x3][y3+1] == "[K]") {
                            x = x3;
                            y = y3+1;
                        } else if (FIELD[x1][y1-1] == "[K]") {
                            x = x1;
                            y = y1-1;
                        }
                    } else if (y1 == y3) {
                        if (x1 > x3) {
                            int r = x1;
                            x1 = x3;
                            x3 = r;
                        }
                        if (FIELD[x3+1][y3] == "[K]") {
                            y = y3;
                            x = x3+1;
                        } else if (FIELD[x1-1][y1] == "[K]") {
                            y = y1;
                            x = x1-1;
                        }
                    }
                }
                if (x < 1 || x > 10 || y == 0) {
                    continue;
                } else if (FIELD[x][y] == " ~ ") {
                    FIELD[x][y] = " O ";
                    FIELD_ALL[x][y] = " O ";
                    hit = 0;
                } else if (FIELD[x][y] == "[K]") {
                    FIELD[x][y] = "[+]";
                    FIELD_ALL[x][y] = "[+]";
                    k2++;
                    killSearchC2(x, y);
                    if (FIELD[x][y] == "[X]") {
                        f = 0;
                    } else if (f == 0) {
                        f++;
                        x1 = x;
                        y1 = y;
                    } else if (f == 1) {
                        f++;
                        x2 = x;
                        y2 = y;
                    } else if (f == 2) {
                        f++;
                        x3 = x;
                        y3 = y;
                    }
                    if (k2 == 20) {
                        Statistic.score1 = k1;
                        Statistic.score2 = k2;
                        return player;
                    }
                } else {
                    continue;
                }
            }
            hit = 1;
            player = 0;
        }
    }
}
 
void end() {
    puts("~~~Game Over~~~");
    printf("---| Score Player_1: %d |---\n---| Score Player_2: %d |---\n", Statistic.score1, Statistic.score2);
    puts("~~~WINNER~~~");
    printf("PLAYER %d", Statistic.winnernum);
}
  
void endC() {
    puts("~~~Game Over~~~");
    printf("---| Score Player_1: %d |---\n---| Score Computer: %d |---\n", Statistic.score1, Statistic.score2);
    puts("~~~WINNER~~~");
    if (Statistic.winnernum == 1) {
        printf("PLAYER %d", Statistic.winnernum);
    } else {
        printf("COMPUTER");
    }
}

int main() {

    rules();

    printf("Choose the game mode:\nPress 0 to play with a person\nPress 1 to play with the first-level computer\nPress 2 to play with the second-level computer\n");
    int mode = 0;
    scanf("%d", &mode);
    char n;
    scanf("%c", &n);

    int u = 0;
    int player = 0;

    if (mode == 0) {
        while (u < 2) {
            arrengementShips(player);
            player = ~player;
            u++;
        }
    } else {
        while (u < 2) {
            arrengementShipsC(player);
            player = ~player;
            u++;
        }
    }

    fillField();


    system("cls");

    if (mode == 0) {
        player = battle(player);
    } else if (mode == 1) {
        player = battleC(player);
    } else {
        player = battleC2(player);
    }
    
    Statistic.winnernum = player+1;

    outputFieldCache();
    if (mode == 0) {
        end();
    } else {
        endC();
    }

    puts("\n");
    system("pause");
    
}






