#include<iostream>
#include<string>

using namespace std;

int main()
{
    string text;
    string pattern;
    cout<<"Enter text: ";
    cin>>text;

    cout<<"Enter pattern: ";
    cin>>pattern;

    int T=text.length();
    int P=pattern.length();

    for(int i=0; i<T-P; i++)
    {
        int j;
        for (j=0; j<P; j++)
        {
            if(text[i+j]!=pattern[j])
                break;
        }

        if(j==P)
            cout<<"Pattern found in index: "<<i<<endl;

    }
}
