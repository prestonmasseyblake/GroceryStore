//Author: Preston Massey-Blake
#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main()
{
        vector<string> list; //array of 5 strings
        char input;
        string item;
        int counter=0;
        do 
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input == 'a' || input =='A') {
                        cout<<"What is the item?\n";
                        cin>>item;
                        list.push_back (item);
                              
                      }
                
        }
        while(input != 'q' &&  input != 'Q');
        if(list.size() == 0){
cout<<"No items to buy!"<<endl; }

        else {
        cout<<"==ITEMS TO BUY=="<<endl;
        for(int i=0; i < list.size(); i++) {
        cout<<counter+1<<" "<<list.at(i)<<endl;
        counter++; 
        }
        }  return 0;
}
