#include<iostream>
using namespace std;
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
for (int i = 0; i <cap; i++)
{
    cin>>ptr[i];
}

   }




   void Array :: append(int data){
       if (lastIndex==capacity)
       {
           cout<<"Array is full!"<<endl;
       }
       
       if(lastIndex>=0 && lastIndex+1<capacity){
           ptr[lastIndex+1]=data;
       }
   }

void Array:: view(){
    for (int i = 0; i < capacity; i++)
    {
        cout<<ptr[i]<<" "<<endl;

    }
    
}
int main(int argc, char **argv){

Array obj =  Array();

cout<<"\nenter the capacity of your aray:";
int c;cin>>c;
obj.createArray(c);

obj.view();
cout<<"hii Array kya haal h";
return 0;

}
