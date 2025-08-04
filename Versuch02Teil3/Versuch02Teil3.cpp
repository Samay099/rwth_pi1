#include<iostream>
#include<algorithm>

std::string sVerschluesselung(std::string sWort, char cEncryptLookup[2][26])
{   
    int i = 0;
    int iIndex = 0;

    std::string EncryptWort = sWort;

    for(i = 0; i < sWort.length(); i++)
    {
        if((sWort[i]>='A') && (sWort[i]<= 'Z'))
        {   

            iIndex = sWort[i]-'A';

            if((iIndex>=0) && (iIndex<26))
            {
                EncryptWort[i] = cEncryptLookup[1][iIndex];
            }
        }
        
    }

    return EncryptWort;
}

std::string sEntschluesselung(std::string sEncryptWort, char cDecryptLookup[2][26])
{
    int i = 0;
    int j = 0;

    std::string sDecryptWort = sEncryptWort;

    for(i = 0; i < sEncryptWort.length(); i++)
    {
        if((sEncryptWort[i]>='A') && (sEncryptWort[i]<= 'Z'))
        {
            for(j = 0; j < 26; j++)
            {
                if(sDecryptWort[i] == cDecryptLookup[1][j])
                {
                    sDecryptWort[i] = cDecryptLookup[0][j];
                    break;
                }
            }
        }
    }

    return sDecryptWort;
}


int main()
{
    char cEncryptLookup[2][26];
    char cDecryptLookup[2][26];

    int iRandom_Index[26];

    std::string sOutput;
    
    int iCnt = 0;
    while(iCnt < 26)
    {
        iRandom_Index[iCnt] = iCnt;
        
        iCnt++;
    }

    std::random_shuffle(std::begin(iRandom_Index), std::end(iRandom_Index));

    
    int j = 0;
    int i = 0;

    for(i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            for(j = 0; j < 26; j++)
            {
                cEncryptLookup[i][j] = 'A'+j;
            }
        }
        else if(i == 1)
        {
            for(j = 0; j < 26; j++)
            {
                cEncryptLookup[i][j] = 'A'+iRandom_Index[j];  
            }    
        }
    }

    for(iCnt = 0; iCnt < 26; iCnt++)
    {
        cDecryptLookup[0][iCnt] = cEncryptLookup[0][iCnt];
        cDecryptLookup[1][iCnt] = cEncryptLookup[1][iCnt];        
    }

    std::string sOriginalText = "\0";
    std::cout<<"Geben Sie ein Wort in Großbuchstaben an: ";
    std::cin>>sOriginalText;

    std::string encrypted = sVerschluesselung(sOriginalText, cEncryptLookup);;
    std::string decrypted = sEntschluesselung(encrypted, cDecryptLookup);


    std::cout << "Original:  " << sOriginalText << std::endl;
    std::cout << "Encrypted: " << encrypted << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;
}
