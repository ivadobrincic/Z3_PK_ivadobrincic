Z3_PK_ivadobrincic
==================

Programsko rijesenje treceg zadatka iz kolegija strukture podataka.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

using namespace std;

#include "red_polje.h"
//#include "red_pokazivac.h"

queue banka;
klijent *klijenti;
int n;

void generiranje() {
    cout << "Koliko cetvorki treba generirati: ";
    cin >> n;
    klijenti = new klijent[n];
    for (int i = 0; i < n; i++) {
        klijenti[i].ulazak = rand() % 401 + 100;
        klijenti[i].trajanje = rand() % 401 + 100;
        klijenti[i].c = rand() % 6 + 1;
        klijenti[i].transakcija = rand() % 4 + 1;

        if (klijenti[i].c == 6 && (klijenti[i].transakcija == 2 || klijenti[i].transakcija == 4)) {
            klijenti[i].transakcija -=  1;
        }

        while (klijenti[i].c == 1 && klijenti[i].transakcija == 4) {
            klijenti[i].transakcija = rand() % 4 + 1;
        }
    }
}

void svi_klijenti() {
    klijent clients[20];

    clients[0].ulazak = 1; 
    clients[0].trajanje = 2000; 
    clients[0].c = rand() % 6 + 1;
    clients[0].transakcija = 1;
    clients[0].ime = "Danko";
    clients[0].datum = 19840819;
    clients[0].tekuci = 1234;
    clients[0].devizni = 5678;

    clients[1].ulazak = rand() % 401 + 100;
    clients[1].trajanje = rand() % 401 + 100;
    clients[1].c = rand() % 6 + 1;
    clients[1].transakcija = 1;
    clients[1].ime = "Marija";
    clients[1].datum = 19671228;
    clients[1].tekuci = 4567;
    clients[1].devizni = 10;

    clients[2].ulazak = rand() % 401 + 100;
    clients[2].trajanje = rand() % 401 + 100;
    clients[2].c = rand() % 6 + 1;
    clients[2].transakcija = 1;
    clients[2].ime = "Ivan";
    clients[2].datum = 19919428;
    clients[2].tekuci = 567;
    clients[2].devizni = 50;

    clients[3].ulazak = rand() % 401 + 100;
    clients[3].trajanje = rand() % 401 + 100;
    clients[3].c = rand() % 6 + 1;
    clients[3].transakcija = 1;
    clients[3].ime = "Ana";
    clients[3].datum = 19901119;
    clients[3].tekuci = 345;
    clients[3].devizni = 987;

    clients[4].ulazak = rand() % 401 + 100;
    clients[4].trajanje = rand() % 401 + 100;
    clients[4].c = rand() % 6 + 1;
    clients[4].transakcija = 1;
    clients[4].ime = "Renata";
    clients[4].datum = 19650307;
    clients[4].tekuci = 3456;
    clients[4].devizni = 6657;

    clients[5].ulazak = rand() % 401 + 100;
    clients[5].trajanje = rand() % 401 + 100;
    clients[5].c = rand() % 6 + 1;
    clients[5].transakcija = 2;
    clients[5].ime = "Zdravko";
    clients[5].datum = 19550116;
    clients[5].tekuci = 123;
    clients[5].devizni = 1245;

    clients[6].ulazak = rand() % 401 + 100;
    clients[6].trajanje = rand() % 401 + 100;
    clients[6].c = rand() % 6 + 1;
    clients[6].transakcija = 2;
    clients[6].ime = "Tamara";
    clients[6].datum = 19870909;
    clients[6].tekuci = 765;
    clients[6].devizni = 9876;

    clients[7].ulazak = rand() % 401 + 100;
    clients[7].trajanje = rand() % 401 + 100;
    clients[7].c = rand() % 6 + 1;
    clients[7].transakcija = 2;
    clients[7].ime = "Ena";
    clients[7].datum = 19930906;
    clients[7].tekuci = 123;
    clients[7].devizni = 123;

    clients[8].ulazak = rand() % 401 + 100;
    clients[8].trajanje = rand() % 401 + 100;
    clients[8].c = rand() % 6 + 1;
    clients[8].transakcija = 2;
    clients[8].ime = "Lucija";
    clients[8].datum = 19980807;
    clients[8].tekuci = 543;
    clients[8].devizni = 786;

    clients[9].ulazak = rand() % 401 + 100;
    clients[9].trajanje = rand() % 401 + 100;
    clients[9].c = rand() % 6 + 1;
    clients[9].transakcija = 2;
    clients[9].ime = "Marijana";
    clients[9].datum = 19760112;
    clients[9].tekuci = 1238;
    clients[9].devizni = 987;

    clients[10].ulazak = rand() % 401 + 100 ;
    clients[10].trajanje = rand() % 401 + 100;
    clients[10].c = rand() % 6 + 1;
    clients[10].transakcija = 3;
    clients[10].ime = "Tomislav";
    clients[10].datum = 19870908;
    clients[10].tekuci = 12345;
    clients[10].devizni = 8765;

    clients[11].ulazak = rand() % 401 + 100;
    clients[11].trajanje = rand() % 401 + 100;
    clients[11].c = rand() % 6 + 1;
    clients[11].transakcija = 3;
    clients[11].ime = "Zvonimir";
    clients[11].datum = 19450104;
    clients[11].tekuci = 5678;
    clients[11].devizni = 987;

    clients[12].ulazak = rand() % 401 + 100;
    clients[12].trajanje = rand() % 401 + 100;
    clients[12].c = rand() % 6 + 1;
    clients[12].transakcija = 3;
    clients[12].ime = "Dominik";
    clients[12].datum = 19781230;
    clients[12].tekuci = 453;
    clients[12].devizni = 873;

    clients[13].ulazak = rand() % 401 + 100;
    clients[13].trajanje = rand() % 401 + 100;
    clients[13].c = rand() % 6 + 1;
    clients[13].transakcija = 3;
    clients[13].ime = "Diana";
    clients[13].datum = 19901112;
    clients[13].tekuci = 541;
    clients[13].devizni = 945;

    clients[14].ulazak = rand() % 401 + 100;
    clients[14].trajanje = rand() % 401 + 100;
    clients[14].c = rand() % 6 + 1;
    clients[14].transakcija = 3;
    clients[14].ime = "Katarina";
    clients[14].datum = 19910325;
    clients[14].tekuci = 908;
    clients[14].devizni = 990;

    clients[15].ulazak = rand() % 401 + 100;
    clients[15].trajanje = rand() % 401 + 100;
    clients[15].c = rand() % 6 + 1;
    clients[15].transakcija = 4;
    clients[15].ime = "Marta";
    clients[15].datum = 19910812;
    clients[15].tekuci = 5630;
    clients[15].devizni = 490;

    clients[16].ulazak = rand() % 401 + 100;
    clients[16].trajanje = rand() % 401 + 100;
    clients[16].c = rand() % 6 + 1;
    clients[16].transakcija = 4;
    clients[16].ime = "Filip";
    clients[16].datum = 19871231;
    clients[16].tekuci = 126;
    clients[16].devizni = 9876;

    clients[17].ulazak = rand() % 401 + 100;
    clients[17].trajanje = rand() % 401 + 100;
    clients[17].c = rand() % 6 + 1;
    clients[17].transakcija = 4;
    clients[17].ime = "Mile";
    clients[17].datum = 19670907;
    clients[17].tekuci = 509;
    clients[17].devizni = 5610;

    clients[18].ulazak = rand() % 401 + 100;
    clients[18].trajanje = rand() % 401 + 100;
    clients[18].c = rand() % 6 + 1;
    clients[18].transakcija = 4;
    clients[18].ime = "Svjetlana";
    clients[18].datum = 19890204;
    clients[18].tekuci = 456;
    clients[18].devizni = 981;

    clients[19].ulazak = rand() % 401 + 100;
    clients[19].trajanje = rand() % 401 + 100;
    clients[19].c = rand() % 6 + 1;
    clients[19].transakcija = 4;
    clients[19].ime = "Goran";
    clients[19].datum = 19870330;
    clients[19].tekuci = 2390;
    clients[19].devizni = 2390;

    cout << "Pregled upisanih podataka." << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        printf("Klijent %s: (ulaz%d =%d, vrij%d =%d, prio%d =%d, trans%d =%d)\n", clients[i].ime.c_str(), i+1, clients[i].ulazak, i+1, clients[i].trajanje, i+1,  clients[i].c, i+1,  clients[i].transakcija);
    }



    klijent salter = clients[0];
    int t = salter.ulazak;
    int i = 1;
    int dolazak_zadnjeg = salter.ulazak;
    int pocetak_obrade = salter.ulazak;
    cout << "Ulazi: " << salter.ime << endl;
    cout << "Na salter dolazi: " << salter.ime << endl;

    while(1) {
        if ((pocetak_obrade + salter.trajanje > dolazak_zadnjeg + clients[i].ulazak) && i < n) {
            cout << "Ulazi: " << clients[i].ime << endl;
            EnQueueQ(clients[i], &banka);            
            PrintQ(&banka); cout << "*****" << endl;
            dolazak_zadnjeg += clients[i].ulazak;
            i++;
        }
        if (pocetak_obrade + salter.trajanje < dolazak_zadnjeg + clients[i].ulazak) {
            cout << "Izlazi: " << salter.ime << endl;

            if (IsEmptyQ(&banka) == false) {
                pocetak_obrade += salter.trajanje; 
                salter = FrontQ(&banka);    
                DeQueueQ(&banka);
                cout << "Na salter dolazi: " << salter.ime << endl;
            }
        }

        if (pocetak_obrade + salter.trajanje == dolazak_zadnjeg + clients[i].ulazak) {
            cout << "Izlazi: " << salter.ime << endl;

            if (IsEmptyQ(&banka) == false) {
                pocetak_obrade += salter.trajanje; 
                salter = FrontQ(&banka);    
                DeQueueQ(&banka);
                cout << "Na salter dolazi: " << salter.ime << endl;
            }
            cout << "Ulazi: " << clients[i].ime << endl;
            EnQueueQ(clients[i], &banka);            
            PrintQ(&banka); cout << "************" << endl;
            dolazak_zadnjeg += clients[i].ulazak;
            i++;
        }

        if (i == n) {
            while (IsEmptyQ(&banka) == false) {
                cout << "Izlazi: " << salter.ime << endl;
                salter = FrontQ(&banka);
                cout << "Na salter dolazi: " << salter.ime << endl;
                DeQueueQ(&banka);
            }            

            break;
        }
    }
    
    cout << "Vise od 10000 kn u dolarima imaju: " << endl;
    for (int i = 0; i < 20; i++) {
        if (clients[i].devizni * 5 > 10000) {
            cout << clients[i].ime << "(" << clients[i].devizni << ")" << endl;
        }
    }
}

void brzi_red() {
    klijent clients[20];

    clients[0].ulazak = 1; 
    clients[0].trajanje = 2000; 
    clients[0].c = rand() % 6 + 1;
    clients[0].transakcija = 1;
    clients[0].ime = "Danko";
    clients[0].datum = 19840819;
    clients[0].tekuci = 1234;
    clients[0].devizni = 5678;

    clients[1].ulazak = rand() % 401 + 100;
    clients[1].trajanje = rand() % 401 + 100;
    clients[1].c = rand() % 6 + 1;
    clients[1].transakcija = 1;
    clients[1].ime = "Marija";
    clients[1].datum = 19671228;
    clients[1].tekuci = 4567;
    clients[1].devizni = 10;

    clients[2].ulazak = rand() % 401 + 100;
    clients[2].trajanje = rand() % 401 + 100;
    clients[2].c = rand() % 6 + 1;
    clients[2].transakcija = 1;
    clients[2].ime = "Ivan";
    clients[2].datum = 19919428;
    clients[2].tekuci = 567;
    clients[2].devizni = 50;

    clients[3].ulazak = rand() % 401 + 100;
    clients[3].trajanje = rand() % 401 + 100;
    clients[3].c = rand() % 6 + 1;
    clients[3].transakcija = 1;
    clients[3].ime = "Ana";
    clients[3].datum = 19901119;
    clients[3].tekuci = 345;
    clients[3].devizni = 987;

    clients[4].ulazak = rand() % 401 + 100;
    clients[4].trajanje = rand() % 401 + 100;
    clients[4].c = rand() % 6 + 1;
    clients[4].transakcija = 1;
    clients[4].ime = "Renata";
    clients[4].datum = 19650307;
    clients[4].tekuci = 3456;
    clients[4].devizni = 6657;

    clients[5].ulazak = rand() % 401 + 100;
    clients[5].trajanje = rand() % 401 + 100;
    clients[5].c = rand() % 6 + 1;
    clients[5].transakcija = 2;
    clients[5].ime = "Zdravko";
    clients[5].datum = 19550116;
    clients[5].tekuci = 123;
    clients[5].devizni = 1245;

    clients[6].ulazak = rand() % 401 + 100;
    clients[6].trajanje = rand() % 401 + 100;
    clients[6].c = rand() % 6 + 1;
    clients[6].transakcija = 2;
    clients[6].ime = "Tamara";
    clients[6].datum = 19870909;
    clients[6].tekuci = 765;
    clients[6].devizni = 9876;

    clients[7].ulazak = rand() % 401 + 100;
    clients[7].trajanje = rand() % 401 + 100;
    clients[7].c = rand() % 6 + 1;
    clients[7].transakcija = 2;
    clients[7].ime = "Ena";
    clients[7].datum = 19930906;
    clients[7].tekuci = 123;
    clients[7].devizni = 123;

    clients[8].ulazak = rand() % 401 + 100;
    clients[8].trajanje = rand() % 401 + 100;
    clients[8].c = rand() % 6 + 1;
    clients[8].transakcija = 2;
    clients[8].ime = "Lucija";
    clients[8].datum = 19980807;
    clients[8].tekuci = 543;
    clients[8].devizni = 786;

    clients[9].ulazak = rand() % 401 + 100;
    clients[9].trajanje = rand() % 401 + 100;
    clients[9].c = rand() % 6 + 1;
    clients[9].transakcija = 2;
    clients[9].ime = "Marijana";
    clients[9].datum = 19760112;
    clients[9].tekuci = 1238;
    clients[9].devizni = 987;

    clients[10].ulazak = rand() % 401 + 100 ;
    clients[10].trajanje = rand() % 401 + 100;
    clients[10].c = rand() % 6 + 1;
    clients[10].transakcija = 3;
    clients[10].ime = "Tomislav";
    clients[10].datum = 19870908;
    clients[10].tekuci = 12345;
    clients[10].devizni = 8765;

    clients[11].ulazak = rand() % 401 + 100;
    clients[11].trajanje = rand() % 401 + 100;
    clients[11].c = rand() % 6 + 1;
    clients[11].transakcija = 3;
    clients[11].ime = "Zvonimir";
    clients[11].datum = 19450104;
    clients[11].tekuci = 5678;
    clients[11].devizni = 987;

    clients[12].ulazak = rand() % 401 + 100;
    clients[12].trajanje = rand() % 401 + 100;
    clients[12].c = rand() % 6 + 1;
    clients[12].transakcija = 3;
    clients[12].ime = "Dominik";
    clients[12].datum = 19781230;
    clients[12].tekuci = 453;
    clients[12].devizni = 873;

    clients[13].ulazak = rand() % 401 + 100;
    clients[13].trajanje = rand() % 401 + 100;
    clients[13].c = rand() % 6 + 1;
    clients[13].transakcija = 3;
    clients[13].ime = "Diana";
    clients[13].datum = 19901112;
    clients[13].tekuci = 541;
    clients[13].devizni = 945;

    clients[14].ulazak = rand() % 401 + 100;
    clients[14].trajanje = rand() % 401 + 100;
    clients[14].c = rand() % 6 + 1;
    clients[14].transakcija = 3;
    clients[14].ime = "Katarina";
    clients[14].datum = 19910325;
    clients[14].tekuci = 908;
    clients[14].devizni = 990;

    clients[15].ulazak = rand() % 401 + 100;
    clients[15].trajanje = rand() % 401 + 100;
    clients[15].c = rand() % 6 + 1;
    clients[15].transakcija = 4;
    clients[15].ime = "Marta";
    clients[15].datum = 19910812;
    clients[15].tekuci = 5630;
    clients[15].devizni = 490;

    clients[16].ulazak = rand() % 401 + 100;
    clients[16].trajanje = rand() % 401 + 100;
    clients[16].c = rand() % 6 + 1;
    clients[16].transakcija = 4;
    clients[16].ime = "Filip";
    clients[16].datum = 19871231;
    clients[16].tekuci = 126;
    clients[16].devizni = 9876;

    clients[17].ulazak = rand() % 401 + 100;
    clients[17].trajanje = rand() % 401 + 100;
    clients[17].c = rand() % 6 + 1;
    clients[17].transakcija = 4;
    clients[17].ime = "Mile";
    clients[17].datum = 19670907;
    clients[17].tekuci = 509;
    clients[17].devizni = 5610;

    clients[18].ulazak = rand() % 401 + 100;
    clients[18].trajanje = rand() % 401 + 100;
    clients[18].c = rand() % 6 + 1;
    clients[18].transakcija = 4;
    clients[18].ime = "Svjetlana";
    clients[18].datum = 19890204;
    clients[18].tekuci = 456;
    clients[18].devizni = 981;

    clients[19].ulazak = rand() % 401 + 100;
    clients[19].trajanje = rand() % 401 + 100;
    clients[19].c = rand() % 6 + 1;
    clients[19].transakcija = 4;
    clients[19].ime = "Goran";
    clients[19].datum = 19870330;
    clients[19].tekuci = 2390;
    clients[19].devizni = 2390;

    cout << "Pregled upisanih podataka." << endl;
    cout << "----------------------------------" << endl;
    queue spori_red, brzi_red;
    InitQ(&spori_red);
    InitQ(&brzi_red);
    for (int i = 0; i < n; i++) {
        printf("Klijent %s: (ulaz%d =%d, vrij%d =%d, prio%d =%d, trans%d =%d)\n", clients[i].ime.c_str(), i+1, clients[i].ulazak, i+1, clients[i].trajanje, i+1,  clients[i].c, i+1,  clients[i].transakcija);
        EnQueueQ(clients[i], &spori_red);
    }

    cout << "Glavni red: " << endl;
    PrintQ(&spori_red);

    queue pomocni_red; InitQ(&pomocni_red);
    klijent cli;
    while (!IsEmptyQ(&spori_red)) {
        cli = FrontQ(&spori_red);
        DeQueueQ(&spori_red);
        if (cli.transakcija == 3) {
            EnQueueQ(cli, &brzi_red);
        }
        else {
            EnQueueQ(cli, &pomocni_red);
        }
    }
    
    while(!IsEmptyQ(&pomocni_red)) {
        cli = FrontQ(&pomocni_red);
        DeQueueQ(&pomocni_red);
        EnQueueQ(cli, &spori_red);
    }

    cout << "Glavni red nakon premjestanja:" << endl;
    PrintQ(&spori_red);

    cout << "Red za transakciju placanja racuna: " << endl;
    PrintQ(&brzi_red);
    
}

void brisanje() {
    klijent clients[20];

    clients[0].ulazak = 1; 
    clients[0].trajanje = 2000; 
    clients[0].c = rand() % 6 + 1;
    clients[0].transakcija = 1;
    clients[0].ime = "Danko";
    clients[0].datum = 19840819;
    clients[0].tekuci = 1234;
    clients[0].devizni = 5678;

    clients[1].ulazak = rand() % 401 + 100;
    clients[1].trajanje = rand() % 401 + 100;
    clients[1].c = rand() % 6 + 1;
    clients[1].transakcija = 1;
    clients[1].ime = "Marija";
    clients[1].datum = 19671228;
    clients[1].tekuci = 4567;
    clients[1].devizni = 10;

    clients[2].ulazak = rand() % 401 + 100;
    clients[2].trajanje = rand() % 401 + 100;
    clients[2].c = rand() % 6 + 1;
    clients[2].transakcija = 1;
    clients[2].ime = "Ivan";
    clients[2].datum = 19919428;
    clients[2].tekuci = 567;
    clients[2].devizni = 50;

    clients[3].ulazak = rand() % 401 + 100;
    clients[3].trajanje = rand() % 401 + 100;
    clients[3].c = rand() % 6 + 1;
    clients[3].transakcija = 1;
    clients[3].ime = "Ana";
    clients[3].datum = 19901119;
    clients[3].tekuci = 345;
    clients[3].devizni = 987;

    clients[4].ulazak = rand() % 401 + 100;
    clients[4].trajanje = rand() % 401 + 100;
    clients[4].c = rand() % 6 + 1;
    clients[4].transakcija = 1;
    clients[4].ime = "Renata";
    clients[4].datum = 19650307;
    clients[4].tekuci = 3456;
    clients[4].devizni = 6657;

    clients[5].ulazak = rand() % 401 + 100;
    clients[5].trajanje = rand() % 401 + 100;
    clients[5].c = rand() % 6 + 1;
    clients[5].transakcija = 2;
    clients[5].ime = "Zdravko";
    clients[5].datum = 19550116;
    clients[5].tekuci = 123;
    clients[5].devizni = 1245;

    clients[6].ulazak = rand() % 401 + 100;
    clients[6].trajanje = rand() % 401 + 100;
    clients[6].c = rand() % 6 + 1;
    clients[6].transakcija = 2;
    clients[6].ime = "Tamara";
    clients[6].datum = 19870909;
    clients[6].tekuci = 765;
    clients[6].devizni = 9876;

    clients[7].ulazak = rand() % 401 + 100;
    clients[7].trajanje = rand() % 401 + 100;
    clients[7].c = rand() % 6 + 1;
    clients[7].transakcija = 2;
    clients[7].ime = "Ena";
    clients[7].datum = 19930906;
    clients[7].tekuci = 123;
    clients[7].devizni = 123;

    clients[8].ulazak = rand() % 401 + 100;
    clients[8].trajanje = rand() % 401 + 100;
    clients[8].c = rand() % 6 + 1;
    clients[8].transakcija = 2;
    clients[8].ime = "Lucija";
    clients[8].datum = 19980807;
    clients[8].tekuci = 543;
    clients[8].devizni = 786;

    clients[9].ulazak = rand() % 401 + 100;
    clients[9].trajanje = rand() % 401 + 100;
    clients[9].c = rand() % 6 + 1;
    clients[9].transakcija = 2;
    clients[9].ime = "Marijana";
    clients[9].datum = 19760112;
    clients[9].tekuci = 1238;
    clients[9].devizni = 987;

    clients[10].ulazak = rand() % 401 + 100 ;
    clients[10].trajanje = rand() % 401 + 100;
    clients[10].c = rand() % 6 + 1;
    clients[10].transakcija = 3;
    clients[10].ime = "Tomislav";
    clients[10].datum = 19870908;
    clients[10].tekuci = 12345;
    clients[10].devizni = 8765;

    clients[11].ulazak = rand() % 401 + 100;
    clients[11].trajanje = rand() % 401 + 100;
    clients[11].c = rand() % 6 + 1;
    clients[11].transakcija = 3;
    clients[11].ime = "Zvonimir";
    clients[11].datum = 19450104;
    clients[11].tekuci = 5678;
    clients[11].devizni = 987;

    clients[12].ulazak = rand() % 401 + 100;
    clients[12].trajanje = rand() % 401 + 100;
    clients[12].c = rand() % 6 + 1;
    clients[12].transakcija = 3;
    clients[12].ime = "Dominik";
    clients[12].datum = 19781230;
    clients[12].tekuci = 453;
    clients[12].devizni = 873;

    clients[13].ulazak = rand() % 401 + 100;
    clients[13].trajanje = rand() % 401 + 100;
    clients[13].c = rand() % 6 + 1;
    clients[13].transakcija = 3;
    clients[13].ime = "Diana";
    clients[13].datum = 19901112;
    clients[13].tekuci = 541;
    clients[13].devizni = 945;

    clients[14].ulazak = rand() % 401 + 100;
    clients[14].trajanje = rand() % 401 + 100;
    clients[14].c = rand() % 6 + 1;
    clients[14].transakcija = 3;
    clients[14].ime = "Katarina";
    clients[14].datum = 19910325;
    clients[14].tekuci = 908;
    clients[14].devizni = 990;

    clients[15].ulazak = rand() % 401 + 100;
    clients[15].trajanje = rand() % 401 + 100;
    clients[15].c = rand() % 6 + 1;
    clients[15].transakcija = 4;
    clients[15].ime = "Marta";
    clients[15].datum = 19910812;
    clients[15].tekuci = 5630;
    clients[15].devizni = 490;

    clients[16].ulazak = rand() % 401 + 100;
    clients[16].trajanje = rand() % 401 + 100;
    clients[16].c = rand() % 6 + 1;
    clients[16].transakcija = 4;
    clients[16].ime = "Filip";
    clients[16].datum = 19871231;
    clients[16].tekuci = 126;
    clients[16].devizni = 9876;

    clients[17].ulazak = rand() % 401 + 100;
    clients[17].trajanje = rand() % 401 + 100;
    clients[17].c = rand() % 6 + 1;
    clients[17].transakcija = 4;
    clients[17].ime = "Mile";
    clients[17].datum = 19670907;
    clients[17].tekuci = 509;
    clients[17].devizni = 5610;

    clients[18].ulazak = rand() % 401 + 100;
    clients[18].trajanje = rand() % 401 + 100;
    clients[18].c = rand() % 6 + 1;
    clients[18].transakcija = 4;
    clients[18].ime = "Svjetlana";
    clients[18].datum = 19890204;
    clients[18].tekuci = 456;
    clients[18].devizni = 981;

    clients[19].ulazak = rand() % 401 + 100;
    clients[19].trajanje = rand() % 401 + 100;
    clients[19].c = rand() % 6 + 1;
    clients[19].transakcija = 4;
    clients[19].ime = "Goran";
    clients[19].datum = 19870330;
    clients[19].tekuci = 2390;
    clients[19].devizni = 2390;

    queue spori_red, brzi_red;
    InitQ(&spori_red);
    InitQ(&brzi_red);
    for (int i = 0; i < n; i++) {
        EnQueueQ(clients[i], &spori_red);
    }

    cout << "Red: " << endl;
    PrintQ(&spori_red);

    klijent cli;
    while (!IsEmptyQ(&spori_red)) {
        cli = FrontQ(&spori_red);
        DeQueueQ(&spori_red);
        if (cli.c == 1 && cli.transakcija == 2 && cli.tekuci > 5000 || cli.c == 4 && cli.transakcija == 1 && cli.datum > 19821211 && cli.tekuci < 100) {
            cout << "Izbacujemo: " << cli.ime << endl;
        }
        else {
            EnQueueQ(cli, &brzi_red);
        }
    }
    
    while(!IsEmptyQ(&brzi_red)) {
        cli = FrontQ(&brzi_red);
        DeQueueQ(&brzi_red);
        EnQueueQ(cli, &spori_red);
    }

    cout << "Red nakon izbacivanja:" << endl;
    PrintQ(&spori_red);

}
    
void rekurzija(queue *ulazak, queue*trajanje, int brojac) {
    if (brojac == 20) {
        return;
    }
    else {
        klijent cli = FrontQ(ulazak);
        DeQueueQ(ulazak);


        brojac++;
        rekurzija(ulazak, trajanje, brojac);

        if (brojac < 15) {
            cli.c = cli.c + 10 + brojac;
            EnQueueQ(cli, ulazak);
        }
        else {
            cli.c = cli.c - 10 - 2*brojac;
            EnQueueQ(cli, trajanje);
        }
    }
}

void novi_salter() {
    klijent clients[20];

    clients[0].ulazak = 1; 
    clients[0].trajanje = 2000; 
    clients[0].c = rand() % 6 + 1;
    clients[0].transakcija = 1;
    clients[0].ime = "Danko";
    clients[0].datum = 19840819;
    clients[0].tekuci = 1234;
    clients[0].devizni = 5678;

    clients[1].ulazak = rand() % 401 + 100;
    clients[1].trajanje = rand() % 401 + 100;
    clients[1].c = rand() % 6 + 1;
    clients[1].transakcija = 1;
    clients[1].ime = "Marija";
    clients[1].datum = 19671228;
    clients[1].tekuci = 4567;
    clients[1].devizni = 10;

    clients[2].ulazak = rand() % 401 + 100;
    clients[2].trajanje = rand() % 401 + 100;
    clients[2].c = rand() % 6 + 1;
    clients[2].transakcija = 1;
    clients[2].ime = "Ivan";
    clients[2].datum = 19919428;
    clients[2].tekuci = 567;
    clients[2].devizni = 50;

    clients[3].ulazak = rand() % 401 + 100;
    clients[3].trajanje = rand() % 401 + 100;
    clients[3].c = rand() % 6 + 1;
    clients[3].transakcija = 1;
    clients[3].ime = "Ana";
    clients[3].datum = 19901119;
    clients[3].tekuci = 345;
    clients[3].devizni = 987;

    clients[4].ulazak = rand() % 401 + 100;
    clients[4].trajanje = rand() % 401 + 100;
    clients[4].c = rand() % 6 + 1;
    clients[4].transakcija = 1;
    clients[4].ime = "Renata";
    clients[4].datum = 19650307;
    clients[4].tekuci = 3456;
    clients[4].devizni = 6657;

    clients[5].ulazak = rand() % 401 + 100;
    clients[5].trajanje = rand() % 401 + 100;
    clients[5].c = rand() % 6 + 1;
    clients[5].transakcija = 2;
    clients[5].ime = "Zdravko";
    clients[5].datum = 19550116;
    clients[5].tekuci = 123;
    clients[5].devizni = 1245;

    clients[6].ulazak = rand() % 401 + 100;
    clients[6].trajanje = rand() % 401 + 100;
    clients[6].c = rand() % 6 + 1;
    clients[6].transakcija = 2;
    clients[6].ime = "Tamara";
    clients[6].datum = 19870909;
    clients[6].tekuci = 765;
    clients[6].devizni = 9876;

    clients[7].ulazak = rand() % 401 + 100;
    clients[7].trajanje = rand() % 401 + 100;
    clients[7].c = rand() % 6 + 1;
    clients[7].transakcija = 2;
    clients[7].ime = "Ena";
    clients[7].datum = 19930906;
    clients[7].tekuci = 123;
    clients[7].devizni = 123;

    clients[8].ulazak = rand() % 401 + 100;
    clients[8].trajanje = rand() % 401 + 100;
    clients[8].c = rand() % 6 + 1;
    clients[8].transakcija = 2;
    clients[8].ime = "Lucija";
    clients[8].datum = 19980807;
    clients[8].tekuci = 543;
    clients[8].devizni = 786;

    clients[9].ulazak = rand() % 401 + 100;
    clients[9].trajanje = rand() % 401 + 100;
    clients[9].c = rand() % 6 + 1;
    clients[9].transakcija = 2;
    clients[9].ime = "Marijana";
    clients[9].datum = 19760112;
    clients[9].tekuci = 1238;
    clients[9].devizni = 987;

    clients[10].ulazak = rand() % 401 + 100 ;
    clients[10].trajanje = rand() % 401 + 100;
    clients[10].c = rand() % 6 + 1;
    clients[10].transakcija = 3;
    clients[10].ime = "Tomislav";
    clients[10].datum = 19870908;
    clients[10].tekuci = 12345;
    clients[10].devizni = 8765;

    clients[11].ulazak = rand() % 401 + 100;
    clients[11].trajanje = rand() % 401 + 100;
    clients[11].c = rand() % 6 + 1;
    clients[11].transakcija = 3;
    clients[11].ime = "Zvonimir";
    clients[11].datum = 19450104;
    clients[11].tekuci = 5678;
    clients[11].devizni = 987;

    clients[12].ulazak = rand() % 401 + 100;
    clients[12].trajanje = rand() % 401 + 100;
    clients[12].c = rand() % 6 + 1;
    clients[12].transakcija = 3;
    clients[12].ime = "Dominik";
    clients[12].datum = 19781230;
    clients[12].tekuci = 453;
    clients[12].devizni = 873;

    clients[13].ulazak = rand() % 401 + 100;
    clients[13].trajanje = rand() % 401 + 100;
    clients[13].c = rand() % 6 + 1;
    clients[13].transakcija = 3;
    clients[13].ime = "Diana";
    clients[13].datum = 19901112;
    clients[13].tekuci = 541;
    clients[13].devizni = 945;

    clients[14].ulazak = rand() % 401 + 100;
    clients[14].trajanje = rand() % 401 + 100;
    clients[14].c = rand() % 6 + 1;
    clients[14].transakcija = 3;
    clients[14].ime = "Katarina";
    clients[14].datum = 19910325;
    clients[14].tekuci = 908;
    clients[14].devizni = 990;

    clients[15].ulazak = rand() % 401 + 100;
    clients[15].trajanje = rand() % 401 + 100;
    clients[15].c = rand() % 6 + 1;
    clients[15].transakcija = 4;
    clients[15].ime = "Marta";
    clients[15].datum = 19910812;
    clients[15].tekuci = 5630;
    clients[15].devizni = 490;

    clients[16].ulazak = rand() % 401 + 100;
    clients[16].trajanje = rand() % 401 + 100;
    clients[16].c = rand() % 6 + 1;
    clients[16].transakcija = 4;
    clients[16].ime = "Filip";
    clients[16].datum = 19871231;
    clients[16].tekuci = 126;
    clients[16].devizni = 9876;

    clients[17].ulazak = rand() % 401 + 100;
    clients[17].trajanje = rand() % 401 + 100;
    clients[17].c = rand() % 6 + 1;
    clients[17].transakcija = 4;
    clients[17].ime = "Mile";
    clients[17].datum = 19670907;
    clients[17].tekuci = 509;
    clients[17].devizni = 5610;

    clients[18].ulazak = rand() % 401 + 100;
    clients[18].trajanje = rand() % 401 + 100;
    clients[18].c = rand() % 6 + 1;
    clients[18].transakcija = 4;
    clients[18].ime = "Svjetlana";
    clients[18].datum = 19890204;
    clients[18].tekuci = 456;
    clients[18].devizni = 981;

    clients[19].ulazak = rand() % 401 + 100;
    clients[19].trajanje = rand() % 401 + 100;
    clients[19].c = rand() % 6 + 1;
    clients[19].transakcija = 4;
    clients[19].ime = "Goran";
    clients[19].datum = 19870330;
    clients[19].tekuci = 2390;
    clients[19].devizni = 2390;

    queue neki_red;
    InitQ(&neki_red);

    for (int i = 0; i < n; i++) {
        EnQueueQ(clients[i], &neki_red);
    }

    int brojac = 20;

    cout << "Stanje u redu prije premjestanja: " << endl;
    PrintQ(&neki_red);
    queue novi_red;
    InitQ(&novi_red);
    rekurzija(&neki_red, &novi_red, 0);

    cout << "Stanje nakon premjestanja, glavni red: " << endl;
    PrintQ(&neki_red);
    cout << "Novi red: " << endl;
    PrintQ(&novi_red);

}


int main() {

    srand(time(0));
    InitQ(&banka);
    int izbor;
    
    do{
        cout << "-----------IZBORNIK-----------" << endl;
        cout<<"1. Generiranje N cetvorki slucajnih brojeva"<<endl;
        cout<<"2. Ispis klijenata u banci. Slaganje u red po prioritetima." << endl;
        cout << "   Ispis svih klijenata koji na racunu imaju vise od 10000 kuna u dolarima."<<endl;
        cout<<"3. Red brzih transakcija. "<<endl;
        cout<<"4. Brisanje VIP klijenata ( <30 god, uplata, <100 kn na tekucem) i umirovljenika   (isplata, >5000 kn)   ."<<endl;
        cout<<"5. Otvaranje novog saltera. "<<endl;
        cout<<"9. Izlaz iz programa"<<endl;
        cout<<"Izbor: ";
        cin>>izbor;
         
        switch(izbor){
            case 1:
                 generiranje();
                 cout << "Pregled generiranih podataka." << endl;
                 cout << "----------------------------------" << endl;
                 for (int i = 0; i < n; i++) {
                     printf("Klijent %d: (ulaz%d =%d, vrij%d =%d, prio%d =%d, trans%d =%d)\n", i+1, i+1, klijenti[i].ulazak, i+1, klijenti[i].trajanje, i+1,  klijenti[i].c, i+1,  klijenti[i].transakcija);
                 }
                 cout << "----------------------------------" << endl;
                 break;
             
            case 2:
                 svi_klijenti();
                 cout << "----------------------------------" << endl;
                 break;
   
            case 3:
                 brzi_red();
                 break;
             
            case 4:
                 brisanje();
                 break;  
            
            case 5:
                 cout << endl << endl << endl;
                 novi_salter();
                 break;
        }
             
    }while(izbor!=9);
    
   
    system ("pause");
    return 0;
}
