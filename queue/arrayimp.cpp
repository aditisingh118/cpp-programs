#include<iostream>
using namespace std;
struct queue{
    int f,r,c;
    int* arr;
    queue(int k)
    {
        f=0,r=-1,c=k;
        arr=new int[c];
    }
    void enqueue(int x)
    {   if(r==c-1)
        cout<<"queue full";
        else{
        r++;
        arr[r]=x;
        
        }

    }
    int dequeue()
    {
        if(r==-1)
        return -1;
        else
        {int res=arr[r];
        r--;
        return res;
        }
    }
};
int main()
{
    queue q(5);
    q.enqueue(23);
     q.enqueue(23);
      q.enqueue(23);
       q.enqueue(23);
        q.enqueue(23);
        q. enqueue(23);
         cout<<q.dequeue();
         return 0;


}
