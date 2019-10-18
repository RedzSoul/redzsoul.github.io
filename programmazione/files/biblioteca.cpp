#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
	
    int codice,anno;
	
    string nome, cognome;
	
    in.open("in.txt");
	
    bool errore=false;
	
    if (in.is_open()){		//va bene anche if(in)
        cout<<"apertura avvenuta con successo"<<endl;

        while (!in.eof()&& !errore){		//finche non ho raggiunto la fine del file, e non ho trovato errori
            in>>codice;
            if(in.eof())		//se raggiungo subito la fine del file dopo aver preso il codice, sicuramente non ci sono i dati del libro
                errore=true;
            else {
                in>>nome;
                if(in.eof())		//se raggiungo subito la fine del file dopo aver preso il nome, sicuramente non ci sono i dati dell'autore
                    errore=true;
                else {
                    in>>cognome;
                    if(in.eof())		//se raggiungo subito la fine del file dopo aver preso il cognome dell'autore, sicuramente non ci sono i dati dell'anno
                        errore=true;
                    else {
                        in>>anno;
                        
                        cout<<codice<<"  ";
                        cout<<nome<<"  ";
                        cout<<cognome<<"  ";
                        cout<<anno<<endl;
                        
                    }
                }
            }


        }

    } else {

        cout<<"errore nell'apertura"<<endl;
    }
    return 0;
}
