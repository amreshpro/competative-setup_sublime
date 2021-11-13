#include <bits/stdc++.h>
using namespace std;

//--------------------------------------
//classes makes here


class Array{
 private:
  int capacity;
  int lastIndex;
  int *ptr;
public:
  Array();
  void createArray(int cap);
  void append(int data);
  void insert(int index, int data);
  void del(int index);
  int search(int data);
  int getData(int index);
  int count();
  void edit(int index,int newdata);
  void view();
  ~Array();


};


Array :: Array(){
  capacity =0;
  lastIndex = -1;
  ptr = NULL;
}
 

void Array :: createArray( int cap)
{

  capacity =cap;
  lastIndex = -1;
  ptr = new int[cap];

}
void Array :: append(int data){
if (lastIndex+1==capacity)
{
  cout<<"\nArray is full(Overflow) ";
}
else{
    
    ++lastIndex;

ptr[lastIndex] = data;


}
}
void Array :: insert(int index,int data){

if (index>0 || index>lastIndex+1)
{
  /* code */ cout<<"\ninvalid Index";
}

else if(lastIndex+1 == capacity){
  cout<<"\nOverflow";
}
else{


  for (int i =lastIndex; i>=index; i--)
       ptr[i+1]=ptr[i];
     ptr[index]=data;
     lastIndex++;
  
}
}

//classes end here
//--------------------------------------

int main()
{
//---------------------------------------------
  //code for sublime online coding
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);

  freopen("output.txt","w",stdout);
 #endif
//online editior setup end here


  //You can Start code from here
  //------------------------------------------






//--------------------------------------------
  return 0;

}