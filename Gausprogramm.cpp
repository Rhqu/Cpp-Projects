#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    
    int ordnung;
    cout << "geben sie die Anzahl an Gleichungen an (Beachten sie: Anzahl Gleichungen = Anzahl gesuchten Variablen)";
    cin >> ordnung;
    

    vector<vector<int>> matrix(ordnung,vector<int>(ordnung+1)); 

    for(int i = 0;i<ordnung;i++)
    {
        for(int j = 0; j<ordnung+1;j++)
        {
            cout << "gib die "<< j+1 << ". Zahl der " << i+1 << ". Gleichung an"<< endl;
            cin >> matrix[i][j];
        }
    }  
    for (int i = 0; i < ordnung-1; i++)
    {
        for (int k = 1; k < ordnung-i; k++)
        {
            int firstline = matrix[i][i];
            int secondline = matrix[k+i][i];
            for(int j = 0+i; j < ordnung+1; j++)
            {
                matrix[k+i][j] = firstline*matrix[k+i][j] - secondline*matrix[i][j];
            }
        }
        
    }
    
      
for(int i=0;i<ordnung;++i)
{

    for(int k=0;k<ordnung+1;++k)
    {
        cout << matrix[i][k] << " ";
    }
    cout << endl;
}

}
