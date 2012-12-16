struct klijent {
    int ulazak, trajanje, c, transakcija;
    string ime;
    long int datum;
    float tekuci, devizni;
};

struct qu {
    klijent polje[10000];    
    int front, rear;
};

typedef qu queue;

klijent FrontQ(queue *q) {
    return q->polje[q->front];
}

void InitQ(queue *q) {
    q->front = 0;
    q->rear = 9999;       
}

int AddOne(int n) {
    return (n+1) % 10000;
}

bool IsEmptyQ(queue *q) {
    return q->front == AddOne(q->rear);
}

// radimo prioritetni red pa EnQueue ide drugacije!!
/*
void EnQueueQ(klijent x, queue *q) {
    q->rear = AddOne(q->rear);
    q->polje[q->rear] = x;
}
*/

void EnQueueQ(klijent x, queue *q) {
    if (IsEmptyQ(q)) {
        q->rear = AddOne(q->rear);
        q->polje[q->rear] = x;
        return;
    }
    int tekuci = q->rear;
    q->rear = AddOne(q->rear);
    while (x.c < q->polje[tekuci].c) {
        q->polje[AddOne(tekuci)] = q->polje[tekuci];
        tekuci -= 1;
        if (tekuci == q->front -1) {
            break;
        }
    }
    q->polje[AddOne(tekuci)] = x;
}

void DeQueueQ(queue *q) {
    q->front = AddOne(q->front);
}

void PrintQ(queue *q) {
    cout << "U redu cekaju: " << endl;
    for (int i = q->front; i != AddOne(q->rear); i = AddOne(i)) {
        cout << q->polje[i].ime << endl;
    }
    cout << "--------------------------" << endl;

}

