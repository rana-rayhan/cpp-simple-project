#include <iostream>
using namespace std;

int main()
{
    // int arry [3][4]={
    //     {20,30,40,50},
    //     {77,11,45,55},
    //     {20,30,40,50}
    // };
    int rows, cols;
    cout<<"Enter Rows : ";
    cin>>rows;
    cout<<"Enter Colums : ";
    cin>>cols;

    int arry [rows][cols];

    for(int i=0; i<rows;i++){
        for(int j=0; j<cols; j++){
            cout<<"Enter Matrix for = ["<<i<<"]["<<j<<"]";
            cin>>arry[i][j];
        }
            cout<<endl;
    }


    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<arry[i][j]<<" ";
        }
        cout<<endl;
    }


//----------------3D arry code---------------//

    // int rows, cols, box;
    // cout<<"Enter Box range : ";
    // cin>>box;
    // cout<<"Enter Rows : ";
    // cin>>rows;
    // cout<<"Enter Colums : ";
    // cin>>cols;

    // int arr [box][rows][cols];

    //     for(int i=0; i<box;i++){
    //         for(int j=0;j<rows;j++){
    //             for(int k=0; k<cols;k++){         
    //             cout<<"Enter mtrix for ["<<i<<"]["<<j<<"]["<<k<<"] =";
    //             cin>>arr[i][j][k];
    //             }
    //             cout<<endl;
    //         }
    //             cout<<endl;
    //             cout<<endl;
    //     }

    //     for(int i=0; i<box;i++){
    //         for(int j=0;j<rows;j++){
    //             for(int k=0; k<cols;k++){         
    //             //cout<<"Enter mtrix for ["<<i<<"]["<<j<<"]["<<k<<"] =";
    //             cout<<arr[i][j][k]<<" ";
    //             }
    //             cout<<endl;
    //         }
    //             cout<<endl;
    //             cout<<endl;
    //     }




    return 0;
}