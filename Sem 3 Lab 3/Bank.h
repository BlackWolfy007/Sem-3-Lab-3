//#pragma once
//#include <iostream>
//#include <string>
//#include <vector>
//
//#include "DebitAccount.h"
//
//class Bank {                                                                    //���� �� ����� ������� �� ��������� �������� �����
//
//private:
//    int BankID;
//    string BankName;
//    CLIENT_DATABASE Database;                                                   //���� ������ �������� �����
//    DEBIT_ACCOUNT_DATABASE  DbtAcc;                                             //��������� ����� �������� �����
//public:
//    static int count;
//    Bank(string BN);
//    ~Bank();
//    CLIENT_DATABASE GetClientDatabase() {                                       //��������� ���� ������ �������� �����
//        return Database;
//    }
//    DEBIT_ACCOUNT_DATABASE GetDebitAccountDatabase() {
//        return DbtAcc;
//    }
//    void     Greeting();                                                        //����������� �� �����
//    void     Login(Bank& bnk);
//    void     CreateAccount(Bank& bnk);                                          //�������� ������ �������� ������� �����
//    void     UserGIU(Client& C);
//};