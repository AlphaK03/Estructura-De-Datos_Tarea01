//
// Created by Key Cortés on 1/5/2022.
//
#include "TxtFile.h"
#include "User.h"
#include "gtest/gtest.h"

TEST(CsvFileTestSuite, DataReadingProcess){
    string filename = "D:/lab04-dataflow-AlphaK03/files/email.csv";
    vector<User> userList;
    TxtFile csvFile;

    userList = csvFile.dataReadingProcess(filename);

    EXPECT_EQ(userList[0].getEmail(), "laura@example.com");
    EXPECT_EQ(userList[1].getLastName(), "Johnson");
    EXPECT_EQ(userList[3].getId(), 5079);
    EXPECT_NO_THROW(csvFile.dataReadingProcess(filename));
}

TEST(CsvFileTestSuite, DataWritingProcess){
    string filename = "D:/lab04-dataflow-AlphaK03/files/email.csv";
    vector<User> userList;
    TxtFile csvFile;
    userList = csvFile.dataReadingProcess(filename);

    filename = "D:/lab04-dataflow-AlphaK03/files/email2.csv";
    csvFile.dataWritingProcess(filename, userList);

    vector<User> newUserList = csvFile.dataReadingProcess(filename);


    EXPECT_NO_THROW(csvFile.dataWritingProcess(filename, userList););

    EXPECT_EQ(newUserList[0].getEmail(), "laura@example.com");
    EXPECT_EQ(newUserList[1].getLastName(), "Johnson");
    EXPECT_EQ(newUserList[3].getId(), 5079);
}
