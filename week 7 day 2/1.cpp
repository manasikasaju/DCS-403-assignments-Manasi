#include <iostream>
using namespace std;

#define SIZE 5

int lq[SIZE], cq[SIZE];
int lf = -1, lr = -1;
int cf = -1, cr = -1;

/* ---------- LINEAR QUEUE ---------- */

// 1 & 6. Check Empty / Full
bool lEmpty() { return lf == -1; }
bool lFull() { return lr == SIZE - 1; }

// 2. Enqueue
void lEnqueue(int x) {
    if (lFull())
        cout << "Linear Queue Full\n";
    else {
        if (lf == -1) lf = 0;
        lq[++lr] = x;
    }
}

// 3. Dequeue
void lDequeue() {
    if (lEmpty())
        cout << "Linear Queue Empty\n";
    else {
        lf++;
        if (lf > lr) lf = lr = -1;
    }
}

// 4. Peek
void lPeek() {
    if (lEmpty())
        cout << "Linear Queue Empty\n";
    else
        cout << "Front: " << lq[lf] << endl;
}

// 5. Display
void lDisplay() {
    if (lEmpty())
        cout << "Linear Queue Empty\n";
    else {
        for (int i = lf; i <= lr; i++)
            cout << lq[i] << " ";
        cout << endl;
    }
}

/* ---------- CIRCULAR QUEUE ---------- */

// 1 & 6. Check Empty / Full
bool cEmpty() { return cf == -1; }
bool cFull() { return (cr + 1) % SIZE == cf; }

// 2. Enqueue
void cEnqueue(int x) {
    if (cFull())
        cout << "Circular Queue Full\n";
    else {
        if (cf == -1) cf = 0;
        cr = (cr + 1) % SIZE;
        cq[cr] = x;
    }
}

// 3. Dequeue
void cDequeue() {
    if (cEmpty())
        cout << "Circular Queue Empty\n";
    else if (cf == cr)
        cf = cr = -1;
    else
        cf = (cf + 1) % SIZE;
}

// 4. Peek
void cPeek() {
    if (cEmpty())
        cout << "Circular Queue Empty\n";
    else
        cout << "Front: " << cq[cf] << endl;
}

// 5. Display
void cDisplay() {
    if (cEmpty())
        cout << "Circular Queue Empty\n";
    else {
        int i = cf;
        while (i != cr) {
            cout << cq[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << cq[cr] << endl;
    }
}

int main() {
    // Sample operations
    lEnqueue(10);
    lEnqueue(20);
    lDisplay();
    lDequeue();
    lPeek();

    cEnqueue(30);
    cEnqueue(40);
    cDisplay();
    cDequeue();
    cPeek();

    return 0;
}