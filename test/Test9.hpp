#include<gtest/gtest.h>
#include<strstream>
bool isPalindrome(int x) {
    if(x<0) return false;
    std::stringstream stream;
    stream<<x;
    auto str = stream.str();
    stream.str()="";
    std::cout<<str<<"\n\n";
    for(auto it = str.rbegin();it!=str.rend();it++){
        stream<<*it;
    }

    std::cout<<stream.str()<<"\n";
    return str == stream.str();
}

TEST(Test9,test1){
    std::cout<<isPalindrome(121);
}