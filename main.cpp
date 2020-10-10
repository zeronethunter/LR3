#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <vector>

int main() {
    std::cout<< "1. Your random digits:"<< std::endl;
    int s[10];
    std::srand(std::time(nullptr));
    for (int i=0; i<=9; i++){
        s[i] = (std::rand()%21-10);
    }
    std::cout<<s[0] << ' '<< s[3] << ' '<< s[8]<< ';' << std::endl;
    int sum = s[0]*s[0] + s[3]*s[3] + s[8]*s[8];
    std::cout << "Sum of squares is " << sum << std::endl;



    std::cout << "2. Input n = ";
    int n;
    std::cin >> n;
    int *arr = new int [n];
    for (int i = 0; i<=n-1; i++){
        std::cout<<"Input "<< i+1 << " element = ";
        std::cin>>arr[i];
        if (arr[i]%2 == 0){
            arr[i] = arr[i] * 7;
        }
    }
    for (int i = 0; i<=n-1; i++){
        std::cout << i+1 << " element is "<< arr[i] << std::endl;
    }
    int k1,k2;
    std::cout << "Input k1 = ";
    std::cin >> k1;
    std::cout << "Input k2 = ";
    std::cin >> k2;
    sum = 0;
    for (int i=k1; i<=k2; i++){
        sum = sum + arr[i];
    }
    std::cout << "Sum from " << k1 << " to " << k2 << " is " << sum << std::endl;
    delete [] arr;


    int m;
    std::cout << "3. Input m = ";
    std::cin >> m;
    std::vector<int> vec1(m);
    for (int i=0; i<=m-1; i++) {
        std::cout << "Input " << i + 1 << " element = ";
        std::cin >> vec1[i];
    }
    vec1.push_back(11);
    for (int i : vec1){
        std::cout << i << ' ';
    }
    std::cout << std::endl;
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
        std::cout << i << ' ';
    }
    std::cout << std::endl;



    std::string sus;
    std::cout<< "4. Input your text: ";
    std::cin.ignore();
    std::getline(std::cin, sus);
    int kol = 0;
    for (int i = 0; i <= sus.length()-1; i++){
        if (sus[i] == 's' ) {
            ++kol;
        }
    }
    std::cout << "Length of string is " << sus.length() << "; Proporsion of letter s is " << kol << "/" << sus.size() << std::endl;
    int l1 = 0;
    std::cout << "Input l1 = ";
    std::cin >> l1;

    int l2 = 0;
    std::cout << "Input l2 = ";
    std::cin >> l2;

    std::cout << "Your past is " <<  sus.substr(l1, l2-l1+1) << std::endl;

    std::string word;
    std::cout << "Input your word: ";
    std::cin >> word;
    std::string s1 = "Can you can a can as a canner can can a can ? ";
    std::cout << "Your text: Can you can a can as a canner can can a can?" << std::endl;
    std::string s2;
    std::string help_s;
    while(s1 != ""){
        help_s = s1.substr(0, s1.find(' '));
        if((help_s == "can") || (help_s == "Can")){
            s2+= word + ' ';
        } else {
            s2+= help_s + ' ';
        }
        s1.erase(0, s1.find(' ')+1);
    }
    std::cout << "Your new text: ";
    int len = s2.length();
    s2.erase(len - 1 ,1);
    s2.erase(len - 3, 1);
    std::cout << s2 << std::endl;

    return 0;
}
