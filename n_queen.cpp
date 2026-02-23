//program to find solution of n-queen problem:

//Here, row -> row value,   a[row] -> column value of that given row

#include<iostream>
#include<iomanip>
using namespace std;

void way(int a[], int n){

    static int count = 0;
    count++;

    cout<<"Goal-"<<count<<": ";

    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<setw(3);
    }
    cout<<endl;

}

bool attack(int a[], int row, int n){

    for(int i=1; i<row; i++){

        if( (a[row]==a[i]) || ( abs(row-i) ) == ( abs(a[row]-a[i]) ) ){
            return true;
        }
    }

    return false;
}


int nQueen(int a[], int row, int n, int &isGoal){

    while(row<=n)
    {
        a[row]=1;

        while(a[row]<=n)
        {
            if(!attack(a,row,n))
            {
                if(row==n)
                {
                    way(a,n);

                    isGoal++;
                }

                nQueen(a,row+1,n,isGoal);

            }

            a[row]=a[row]+1;
        }

        break;
    }

    return 0;
}

int main()
{
    int n, isGoal=0;
    cout<<"Enter the size of queens:\n";
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        a[i]=0;
    }

    nQueen(a,1,n,isGoal);

    if(isGoal==0){
        cout<<"Goal not found\n";
    }

    return 0;
}