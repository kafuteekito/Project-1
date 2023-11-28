#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdlib>

using namespace std;

void waitForEnter() {
    cout << "Press Enter to continue...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    cin.get();  
    system("cls");
}

int main()
{
    int arr[100];
    int n, n1, n2, game=0, finded=0, mn=1, attempt=0;
    int finded1=0, finded2=0, finded3=0, finded4=0, finded5=0, finded6=0, finded7=0, finded8=0, finded9=0;
    cout<<"Welcome to the memory game!"<<endl;
    cout<<"Enter the size of an array (6-20): ";
    cin >> n;
    if(n%2==0)
    {
        srand(time(0));
        for (int i=1; i<n; i+=2) {
            arr[i]=mn;
            arr[i-1]=mn;
            mn++;
        }
        for(int i=0; i<n; i++)
        {
            int k=1+rand()%n-1;
            swap(arr[i],arr[k]);
        }
        
        while(game!=n/2)
        {
            cout<<"\nHere is the array: ";
            for(int i=0; i<n; i++)
            {
                if(arr[i]==finded || arr[i]==finded1 || arr[i]==finded2 || arr[i]==finded3 || arr[i]==finded4 || arr[i]==finded5 || arr[i]==finded6 || arr[i]==finded7 || arr[i]==finded8 || arr[i]==finded9)
                {
                    cout<<arr[i]<<" ";    
                }
                else
                {
                    cout<<"? ";
                }
            }
            cout<< "\n\nEnter the index to show: ";
            cin>>n1;
            cout<<"The card in index "<<n1<<" is: "<<arr[n1]<<endl;
            cout<< "\nEnter the second index to show: ";
            cin>>n2;
            cout<<"The card in index "<<n2<<" is: "<<arr[n2]<<endl;
            if(arr[n1]==arr[n2])
            {
                if(n1!=n2)
                {
                    game++;
                    cout<<"\nGreat! The cards are matched. Continue..."<<endl;
                    if(game==1)
                        finded=arr[n1];
                    else if(game==2)
                        finded1=arr[n1];
                    else if(game==3)
                        finded2=arr[n1];
                    else if(game==4)
                        finded3=arr[n1];
                    else if(game==5)
                        finded4=arr[n1];
                    else if(game==6)
                        finded5=arr[n1];
                    else if(game==7)
                        finded6=arr[n1];
                    else if(game==8)
                        finded7=arr[n1];
                    else if(game==9)
                        finded8=arr[n1];
                    if(game==10)
                        finded9=arr[n1];
                }
                else
                {
                    cout<<"Do not write same index"<<endl;
                }
            }
            else
            {
                cout<<"\nThe cards do not match. Try again!"<<endl;
            }
            waitForEnter();
            attempt++;
        }
        cout<<"Well Played! You won the game!"<<endl;
        cout<<attempt<<" attempts were made"<<endl;
    }
    else
    {
        cout<<"Please write right number (even number between 6-20)"<<endl;
    }
    return 0;
}
