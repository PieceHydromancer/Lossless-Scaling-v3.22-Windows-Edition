// This is the 1st implementation of n-queen problem and used for debugging purpose.

//program to find solution of n-queen problem:

//Here, row -> row value,   a[row] -> column value of that given row

#include<iostream>
#include<iomanip>
using namespace std;

void way(int a[], int n){

    //<!--
        cout<<"Inside way(a,n)\n";
        //-->

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

    //<!--
        cout<<"Inside attack function\n";
        cout<<"row:"<<row<<endl;
        //-->

    for(int i=1; i<row; i++){

        if( (a[row]==a[i]) || ( abs(row-i) ) == ( abs(a[row]-a[i]) ) ){
            return true;

            //<!--
        cout<<"Inside attack function's if condition\n";
        cout<<"row:"<<row<<endl;
        //-->
        }
    }

    return false;
}


int nQueen(int a[], int row, int n){
    //<!--
    cout<<"Inside nQueen function\n";
    cout<<"row:"<<row<<endl;
    //-->

    // for(int i=row+1; i<=n; i++){
    //     a[i]=0;

    // //<!--
    // cout<<a[i]<<endl;
    // //-->
    // }

    while(row<=n)
    {

        //<!--
        cout<<"Inside first while loop\n";
        cout<<"row:"<<row<<endl;
        //-->

        a[row]=1;

        while(a[row]<=n)
        {

            //<!--
        cout<<"Inside second while loop\n";
        cout<<"row:"<<row<<endl;
        //-->

            if(!attack(a,row,n))
            {

                //<!--
        cout<<"Inside attack if condition\n";
        cout<<"row:"<<row<<endl;
        //-->

                if(row==n)
                {

                    //<!--
        cout<<"Inside if condition for check way(a,n);\n";
        cout<<"row:"<<row<<endl;
        //-->

                    way(a,n);
                }

                nQueen(a,row+1,n);

            }

            a[row]=a[row]+1;

            //<!--
        cout<<"outside inner while loop\n";
        cout<<"a[row]:"<<a[row]<<endl;
        //-->
        }

        break;
    }

    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of queens:\n";
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        a[i]=0;

        //<!--
        cout<<a[i]<<endl;
        //-->
    }

    nQueen(a,1,n);

    return 0;
}