int main(int argc, char *argv[])

{

   string nomi[10];

   int eta[10],i,max=0,indice=0;

   for (i=0; i<10; i++){

       cout<<"inserire nome"<<endl;

       cin>>nomi[i];

       cout<<"Inserire eta'"<<endl;

       cin>>eta[i];

       if (eta[i]<0){

              cout<<"ERRORE"<<endl;

               }



       if (i==1){

              max=eta[0];

           indice=i;

              }



       if (max<eta[i]){

           max=eta[i];

           indice=i;

                       }

}

cout<<endl<<"L'alunno "<<nomi[indice]<<" ha l'eta massima fra tutte:"<<max<<endl;

return 0;

}
