#include<iostream>

using namespace std;

int Divider(int Block[], int Start, int End){

    int Pivot=Block[End];
    int SmallestIndex=(Start-1);

    for(int j=Start; j<=End-1; j++){

        if(Block[j]<=Pivot){
            SmallestIndex++;
            swap(Block[SmallestIndex],Block[j]);
        }
    }
    swap(Block[SmallestIndex+1],Block[End]);
    return (SmallestIndex+1);



}

void QuickSort(int Block[], int Start, int End){

    if(Start<End-1){

        int PivotIndex=Divider(Block,Start,End);

        QuickSort(Block,Start,PivotIndex-1);
        QuickSort(Block,PivotIndex+1,End);


    }

}

int main(){

    int MaxSize;

    cout<<"Enter MaxSize: "<<endl;
    cin>>MaxSize;

    int Start=0;
    int End=MaxSize-1;

    int Block[MaxSize];

    for(int i=0; i<MaxSize; i++){
        cout<<"Enter number at Block["<<i+1<<"]: ";
        cin>>Block[i];
    }

    QuickSort(Block,Start,End);

    for(int i=0; i<MaxSize; i++){
        cout<<"["<<Block[i]<<"]";

    }


return 0;
}
