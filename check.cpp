#include <bits/stdc++.h>
using namespace std;
//--------------------------------------------------
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
   void delt(int index);
   int search(int data);
   int getData(int index);
   int count();
   void edit(int index, int newdata);
   void view();
   //~Array();
   };

   Array :: Array(){
capacity = 0;
lastIndex=-1;
ptr = NULL;

   }

 void  Array :: createArray(int cap){
capacity = cap;
lastIndex =-1;
ptr = new int[cap];
int v;
//cout<<"how much value u enter:";
cin>> v;
for ( lastIndex ; lastIndex < v; lastIndex++)
{   if (lastIndex==-1)
{
  lastIndex=0;

}
    cin>>ptr[lastIndex];
}

   }




   void Array :: append(int data){
       if (lastIndex==capacity)
       {
           cout<<"Array is full!"<<endl;
       }
       
       else{
        //(lastIndex>=0 && lastIndex+1<capacity){
        lastIndex;
           ptr[lastIndex]=data;
           view();
       }
   }

void Array:: view(){
    for (int i = 0; i <lastIndex+1; i++)
    {
        cout<<ptr[i]<<" ";

    }
    
}



// classes end here
//--------------------------------------------------

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
Array obj =  Array();

//cout<<"\nenter the capacity of your aray:";
int c;cin>>c;
obj.createArray(c);

obj.view();
cout<<endl;
int app;
//cout<<"\napppend :";
cin>>app;
obj.append(app);
//obj.view();
//cout<<"hii Amrresh ";






//--------------------------------------------
	return 0;

}