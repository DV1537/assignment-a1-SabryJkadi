#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/**
 * The program reads numbers from a file and prints the sum of them
 * Example: main.exe ./tests/input.in
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, const char * argv[])
{
    string input;
  
    double *Nums=new double[10];
    double Readnumbers=0;
    
    int Count=0;
    double sum = 0;

    
    
    
    std::ifstream myReadFile;
    myReadFile.open(argv[1]);



    while(myReadFile>>Readnumbers){

Readnumbers=(int)(Readnumbers*1000);
Readnumbers/=1000;  //deciamal precision.



Nums[Count]=Readnumbers;
Count++;
}
    



int *copy=new int[Count];

for(int a=0;a<Count;a++){

    copy[a]=Nums[a];
    sum=sum+copy[a];

}


delete [] Nums;
Nums=nullptr;

cout<<sum<<endl;

for(int a=0; a<Count; a++)
cout<<copy[a]<<endl;



cout<<endl;
cout<<endl;




double avg=sum/Count;

cout<<avg<<"  This is avg"<<endl;
for(int a=0;a<Count;a++){

    if(copy[a]>avg)
cout<<"bigger then avg :  "<<copy[a]<<endl;
}


delete[]copy;



return 0;
}
   

