#pragma once
#include <iostream>
#include <string>
#include <vector>

//#include "Client.h"

using namespace std;




class DebitAccount {                                                            //��������� ���� ������� �����

private:
    int     DebitAccountID;                                                     //ID ���������� ����� ������� �����
    //int     ClientID;                                                           //ID ��������� ��������� �����
    string  Currency;                                                           //������, � ������� �������� ���������� ������� �����
    double  Balance;                                                            //������� ������ ����� ������� �����

public:
    static int DA_count;
    DebitAccount();
    DebitAccount(string curr, double bal);
    ~DebitAccount();
    void Replenishment(int add, string curr = "RUB");
    void Debting(int dec, string curr = "RUB");
    struct Currency_struct;
};

typedef vector <DebitAccount> DEBIT_ACCOUNT_DATABASE;
