#include <iostream>

using namespace std;
void inicializar_registros(int consumos[1000], int propinas[1000]){
    for (int i=0; i<1000; i++){
        consumos[i]=0;
        propinas[i]=0;
    }
    return;
}

void agregar_atencion(int consumos[1000], int propinas[1000],int consumo, int propina){
    for (int i=0; i<1000; i++){
        if(consumos[i]==0){
            consumos[i]=consumo;
            propinas[i]=propina;
            break;
        }
    }
    
    return;
}

int monto_comision(int consumos[1000], int propinas[1000]){
    int total=0;
    int eh;
    for (int i=0; i<1000; i++){
        eh=consumos[i]*(propinas[i]/100.0);
        total=total+eh;
        if(consumos[i]==0){
            break;
        }
    }
    
    return total;
}

int main()
{
    int consumo, propina;
    int consumos[1000];
    int propinas[1000];
    int menu, res;
    
    inicializar_registros(consumos, propinas);
    
    cin>>menu;
    
    while (menu!=3){
   
    while (menu==1){
        cin>>consumo;
        cin>>propina;
        agregar_atencion(consumos, propinas, consumo, propina);
        cin>>menu;
    }
    while(menu==2){
        res=monto_comision(consumos, propinas);
        cout<<res<<endl;
        break;
    }
    cin>>menu;
    }  
    return 0;
}
