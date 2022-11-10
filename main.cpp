#include <iostream>

int main() {
    //inizializzo le variabili di input
   float a=0;
   float b=0;
   float c=0;
   //fornisco i valori alle relative variabili
    std::cout<<"valore di a: ";std::cin>>a;
    std::cout<<"valore di b: ";std::cin>>b;
    std::cout<<"valore di c: ";std::cin>>c;
    //inizializzo le variabili di output
    float ATriangolo=0;
    float AQuadrato=0;
    float ARettangolo=0;
    float ATrapezio=0;
   //assegno ad ogni variabile l'operazione necessaria per ottenere il risultato chiesto
   ATriangolo=(a*b)/2;
   AQuadrato=a*a;
   ARettangolo=a*b;
   ATrapezio=((a+b)*c)/2;
   //stampo a video i risultati delle varie operazioni
   std::cout<<"Area del triangolo: "<<ATriangolo<<std::endl;
   std::cout<<"Area del quadrato: "<<AQuadrato<<std::endl;
   std::cout<<"Area del rettangolo: "<<ARettangolo<<std::endl;
   std::cout<<"Area del trapezio: "<<ATrapezio<<std::endl;

    return 0;
}
