#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <vector>

int main() {
    std::cout<< "1. Your random digits:"<< std::endl;
    int s[9];
    std::srand(std::time(nullptr));
    for (int i=0; i<=9; i++){
        s[i] = (std::rand()%21-10);
    }
    std::cout<<s[0] << ' '<< s[3] << ' '<< s[8]<< ';' << std::endl;




    std::cout << "2. Input n = ";
    int n;
    std::cin >> n;
    for (int i = 0; i<=n-1; i++){
        std::cout<<"Input "<< i+1 << " element = ";
        std::cin>>s[i];
        if (s[i]%2 == 0){
            s[i] = s[i] * 7;
        }
    }
    for (int i = 0; i<=n-1; i++){
        std::cout << i+1 << " element is "<< s[i] << std::endl;
    }
    int k1,k2;
    std::cout << "Input k1 = ";
    std::cin >> k1;
    std::cout << "Input k2 = ";
    std::cin >> k2;
    int sum = 0;
    for (int i=k1; i<=k2; i++){
        sum = sum + s[i];
    }
    std::cout << "Sum from " << k1 << " to " << k2 << " is " << sum << std::endl;



    int m;
    std::cout << "Input m = ";
    std::cin >> m;
    std::vector<int> vec1(m);
    for (int i=0; i<=m-1; i++) {
        std::cout << "Input " << i + 1 << " element = ";
        std::cin >> vec1[i];
    }
    vec1.push_back(11);
    for (int i : vec1){
        std::cout << i << std::endl;
    }
    sum = 0;
    for (int i : vec1){
        sum += i*i;
    }
    std::cout << "Sum of element's squares is " << sum << std::endl;
    for(int i = 0; i<=vec1.size(); i++){
        if (vec1[i]<=6){

            vec1.erase(vec1.begin()+i);
            break;
        }
    }
    for (int i : vec1){
        std::cout << i << std::endl;
    }



    std::string sus = "";
    std::cout<< "Input your word: ";
    std::cin >> sus;
    int kol = 0;
    for (int i = 0; i <= sus.size()-1;i++){
        if (sus[i] == 's' ) {
            kol++;
        }
    }
    std::cout << "Length of string is " << sus.size() << " Proporsion of letter s is " << kol<<"/"<<sus.size() << std::endl;
    int l1,l2;
    std::cout << "Input l1 = ";
    std::cin >> l1;

    std::cout << "Input l2 = ";
    std::cin >> l2;

    std::cout << "Your past is " <<  sus.substr(l1,l2-l1+1) << std::endl;

    std::string sas = "";
    std::cout << "Input your word: ";
    std::cin >> sas;
    std::string sas1 = "Can you can a can as a canner can can a can?";
    for (int i = 0; i<=sas1.size()-1; i++){
        if ((sas1.substr(i,3) == "can") || (sas1.substr(i,3) == "Can")) {
            sas1.erase(i,3);
            sas1.insert(i, sas);
        }
    }
    std::cout << sas1 << std::endl;

    return 0;
}