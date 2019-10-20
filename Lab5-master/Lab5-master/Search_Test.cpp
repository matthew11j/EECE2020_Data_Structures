#include <iostream>
#include "searchAlg.cpp"
#include <math.h>

using namespace std;

int main(){
    int answer;
    int arrint[] = {4, 6, 2, 8, 9};
    int len = 5;
    searchAlg<int> search;
    
    //Test  Search algorithms using integers
    cout<<"Test Linear Search using integers"<<endl;
    answer = search.linearSearch(arrint, 2, len);
    cout<<answer<<endl;
    answer = search.linearSearch(arrint, 10, len);
    cout<<answer<<endl;
    
    cout<<"Test Binary Search using integers"<<endl;
    answer = search.binarySearch(arrint, 2, len);
    cout<<answer<<endl;
    answer = search.binarySearch(arrint, 10, len);
    cout<<answer<<endl;
    
    //Test search algorithms using character
    char arrch[] = {'a','h','t','g','s'};
    searchAlg<char> searchch;
    
    cout<<"Test Linear Search using characters"<<endl;
    answer = searchch.linearSearch(arrch, 's', 5);
    cout<<answer<<endl;
    answer = searchch.linearSearch(arrch, 'n', 5);
    cout<<answer<<endl;
    
    cout<<"Test Binary Search using characters"<<endl;
    answer = searchch.binarySearch(arrch, 's', 5);
    cout<<answer<<endl;
    answer = searchch.binarySearch(arrch, 'n', 5);
    cout<<answer<<endl;
    
    //Test search algorithms using float
    float arrf[] = {1.3, 8.6, 3.4, 0.7, 2.8};
    searchAlg<float> searchf;
    
    cout<<"Test Linear Search using float"<<endl;
    answer = searchf.linearSearch(arrf, 2.8, len);
    cout<<answer<<endl;
    answer = searchf.linearSearch(arrf, 12, len);
    cout<<answer<<endl;
    
     cout<<"Test Binary Search using float"<<endl;
    answer = searchf.binarySearch(arrf, 2.8, len);
    cout<<answer<<endl;
    answer = searchf.binarySearch(arrf, 12, len);
    cout<<answer<<endl;
          
    //Test search algorithms using double
    double arrd[] = {5, 2, 7, 3, 9};
    searchAlg<double> searchd;
    
    cout<<"Test Linear Search using double"<<endl;
    answer = searchd.linearSearch(arrd, 5, len);
    cout<<answer<<endl;
    answer = searchd.linearSearch(arrd, 15, len);
    cout<<answer<<endl;
    
    cout<<"Test Binary Search using double"<<endl;
    answer = searchd.binarySearch(arrd, 5, len);
    cout<<answer<<endl;
    answer = searchd.binarySearch(arrd, 15, len);
    cout<<answer<<endl;
    

    return 0;
}