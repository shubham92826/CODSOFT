//tic tac toe
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char b[3][3];
char m;
int p;

void d() {
    cout << "  0 1 2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << b[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -----\n";
    }
}

bool pm(int r, int c) {
    if (r < 0 || r >= 3 || c < 0 || c >= 3) return false;
    if (b[r][c] != ' ') return false;
    b[r][c] = m;
    return true;
}

int cw() {
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != ' ')
            return p;
    }
    for (int i = 0; i < 3; i++) {
        if (b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[0][i] != ' ')
            return p;
    }
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[0][0] != ' ')
        return p;
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[0][2] != ' ')
        return p;

    return 0;
}

void sp() {
    p = (p == 1) ? 2 : 1;
    m = (m == 'X') ? 'O' : 'X';
}

void rb() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = ' ';
        }
    }
}

int main() {
    cout << "Tic Tac Toe Game!\n";
    cout << "Player 1, choose your marker (X or O): ";
    char m1;
    cin >> m1;
    m1 = toupper(m1);
    while (m1 != 'X' && m1 != 'O') {
        cout << "Invalid marker. Choose X or O: ";
        cin >> m1;
        m1 = toupper(m1);
    }
    m = m1;
    p = 1;
    rb();

    int w = 0;
    int r, c;
    for (int i = 0; i < 9; i++) {
        d();
        cout << "Player " << p << "'s turn. Enter row and column: ";
        cin >> r >> c;
        while (cin.fail() || !pm(r, c)) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "This spot is taken or invalid! Try another spot.\n";
            cout << "Player " << p << "'s turn. Enter row and column: ";
            cin >> r >> c;
        }
        w = cw();
        if (w == 1) {
            d();
            cout << "Player 1 wins!\n";
            break;
        } else if (w == 2) {
            d();
            cout << "Player 2 wins!\n";
            break;
        }
        sp();
    }
    if (w == 0) {
        d();
        cout << "It's a tie!\n";
    }

    return 0;
}
