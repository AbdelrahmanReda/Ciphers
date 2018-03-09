#include <iostream>
#include <vector>
using namespace std;
int main()
{
    while (true)
    {


    vector <char> state2 ;
    cout<<"WELCOME TO CIPHER AND DECIPHER CLUB"<<endl;
    string detector ;
    string key ;
    string gett;



    cout<<"PLEASE ENTER 1 TO CIPHER OR INPUT 0 TO DESIPGHER :" ;
    getline(cin , detector) ;
    cout<<"please enter the key you want to use : "<<
    getline(cin , key) ;
   // cout<<"please enter the message to use it  : "<<
    getline(cin , gett) ;



    char state[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;
    for (int i = 0 ; i<key.size() ; i=i+1)
    {
        state2.push_back(key[i]);

    }

    for(int i =0 ; i<26 ; i=i+1)
    {
        if(state[i]!= key[0] &&state[i]!= key[1] &&state[i]!= key[2] &&state[i]!= key[3] &&state[i]!= key[4] )

        {
            state2.push_back(state[i]);
        }
    }



if (detector=="1")
{
    //=============================================== DECRYPTION =======================
        for (int i = 0 ;  i < gett.length() ; i=i+1 )

        {
            if(isspace(gett[i]))
            {
                cout<<" ";

            }

            else
            {
                for (int k = 0 ; k<27 ; k++)

                if(gett[i]==state[k])
            {
                cout<<state2[k] ;
            }

            }

        }
}

else
{
    //=============================================== INCRYPTION =======================


           for (int i = 0 ;  i < gett.length() ; i=i+1 )

        {
            if(isspace(gett[i]))
            {
                cout<<" ";

            }

            else
            {
                for (int k = 0 ; k<27 ; k++)

                if(gett[i]==state2[k])
            {
                cout<<state[k] ;
            }

            }

        }
}
cout<<" "<<endl;
    }
 }

