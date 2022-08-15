//
// Created by Key Cortés on 1/5/2022.
//

#include "BinaryFile.h"
#include "User.h"
#include "gtest/gtest.h"

TEST(BinaryFileTestSuite, DataReadingProcess){
    string filename = "D:/lab04-dataflow-AlphaK03/files/binary.dat";
    vector<User> userList;
    BinaryFile binaryFile;

    userList = binaryFile.dataReadingProcess(filename);

    EXPECT_EQ(userList[0].getEmail(), "laura@example.com");
    EXPECT_EQ(userList[1].getLastName(), "Johnson");
    EXPECT_EQ(userList[3].getId(), 5079);
    EXPECT_NO_THROW(binaryFile.dataReadingProcess(filename));
}

TEST(BinaryFileTestSuite, DataWritingProcess){
    string filename = "D:/lab04-dataflow-AlphaK03/files/binary.dat";
    vector<User> userList;
    BinaryFile binaryFile;
    userList = binaryFile.dataReadingProcess(filename);

    filename = "D:/lab04-dataflow-AlphaK03/files/binary2.dat";
    binaryFile.dataWritingProcess(filename, userList);

    vector<User> newUserList = binaryFile.dataReadingProcess(filename);

    EXPECT_NO_THROW(binaryFile.dataWritingProcess(filename, userList););
    EXPECT_EQ(newUserList[0].getEmail(), "laura@example.com");
    EXPECT_EQ(newUserList[1].getLastName(), "Johnson");
    EXPECT_EQ(newUserList[3].getId(), 5079);
}