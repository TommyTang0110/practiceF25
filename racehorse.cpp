#include<iostream>
#include<string>
#include<random>
using namespace std;

const int raceLong=15;
const int horsenumber=5;

void printlane(int hn,const int * horses){
        for (int pos=0 ; pos<raceLong;++pos){
                if
                        (horses[hn]== pos) cout << hn;
                else
                        cout << ".";
        }
	cout << "\n";
}
void advance(int hn, int*horses){
        horses[hn] +=rand()%2;
        if (horses[hn] >= raceLong -1)
                horses[hn] = raceLong-1;
}


bool isWinner(int hn, const int * horses){
        return horses[hn] >= raceLong-1;
        }

int main(){
        int horses[horsenumber]={0};
        string enter;

        while(true){
                for(int i =0; i< horsenumber;++i)
                        printlane(i,horses);
                for(int i =0; i < horsenumber;++i){
                        if (isWinner(i,horses)){
                                cout << "Winner: Horse" << i << "!\n";
                                return 0;
                        }
                }
                cout << "Press Enter for next trun";
               getline(cin,enter);
       for (int i = 0 ; i < horsenumber;++i)
                advance(i,horses);
       cout << "\n";
        }
}
