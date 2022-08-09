// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int n,t,s,r;
    std::cin>>t;
    while(t--) {
        std::cin>>n;
        if(n==1) std::cout<<2<<std::endl;
        else if(n==2) std::cout<<1<<std::endl;
        else {
             s = n/3;
             r=n%3;
             if(r==2) std::cout<<(n/3)+1<<std::endl;
             else 
                 std::cout<<(n/3)+(n%3)<<std::endl;
             
    }
    }

    return 0;
}