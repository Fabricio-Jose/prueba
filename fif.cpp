#include <iostream>

using namespace std;

void insertar(int datos[],int tiempo[],int l){
    for(int i = 0; i < (l); i++){
        cout << "inserte el tiempo en el proceso [" << datos[i] << "]: ";
        cin >> tiempo[i];

    }
}
void fifo(int datos[],int tiempo[], int l,int hllegada[]){
    int tiempoTotal = 0;
    float tiempoReturn = 0;
    insertar(datos,tiempo, l);
    for(int j = 0;j < l; j++){
        tiempoTotal += tiempo[j];
        tiempoReturn += tiempoTotal;
        cout <<"\n""tiempo TF de["<<datos[j]<<"]: "<<tiempoTotal<<"\t";
    	cout<<"su tiempo TR es: "<<tiempoTotal-hllegada[j] <<endl;
    }
    tiempoReturn = tiempoReturn / l;
    cout<<"\nEl tiempo de las entradas son: "<<tiempoReturn;
    
}

void fifospn(int datos[],int tiempo[], int l,int hllegada[]){
    int tiempoTotal = 0;
    float tiempoReturn = 0;
    insertar(datos,tiempo, l);
    for(int j = 0;j < l; j++){
       tiempoTotal += tiempo[j];
        tiempoReturn += tiempoTotal;
        cout <<"\n""tiempo TF de["<<datos[j]<<"]: "<<tiempoTotal<<"\t";
    	cout<<"su tiempo TR es: "<<tiempoTotal-hllegada[j] <<endl;
	for(int a=2;a<l;a++){
		int aux=0;
			if(tiempo[a]<tiempo[a-1]){
				aux=tiempo[a-1];
				tiempo[a-1]=tiempo[a];
				tiempo[a]=aux;
				aux=hllegada[a-1];
				hllegada[a-1]=hllegada[a];
				hllegada[a]=aux;
				aux=datos[a-1];
				datos[a-1]=datos[a];
				datos[a]=aux;
				int j=a-1;
				int k=a-2;
				while (k>=1){
					if(tiempo[j]<tiempo[k]){
						aux=tiempo[k];
						tiempo[k]=tiempo[j];
						tiempo[j]=aux;
						aux=hllegada[k];
						hllegada[k]=tiempo[j];
						hllegada[j]=aux;
						aux=datos[a-1];
						datos[a-1]=datos[a];
						datos[a]=aux;			
					}
						j--;
						k--;		
				}}
	
	}}
	for (int a=0;a<l;a++){
		int aux=0;
		if(datos[a]<datos[a-1]){
			aux=datos[a-1];
			datos[a-1]=datos[a];
			datos[a]=aux;
			aux=tiempo[a-1];
			tiempo[a-1]=tiempo[a];
			tiempo[a]=aux;
			aux=hllegada[a-1];
			hllegada[a-1]=hllegada[a];
			hllegada[a]=aux;
			int j=a-1;
			int k=a-2;
			while (k>=1){
				if(datos[j]<datos[k]){
					aux=datos[k];
					datos[k]=datos[j];
					datos[j]=aux;				
					aux=tiempo[k];
					tiempo[k]=tiempo[j];
					tiempo[j]=aux;
					aux=hllegada[k];
					hllegada[k]=tiempo[j];
					hllegada[j]=aux;
					}
						j--;
						k--;		
					}}}	
	
    tiempoReturn = tiempoReturn / l;
    cout<<"\nEl tiempo de las entradas son: "<<tiempoReturn;
    
}




int main(){
//    int datos[3] = {1,2,3}; int tiempo[3];   int tiempo2[3] = {0,3,6};
          
//  fifo(datos,tiempo,3,tiempo2); fifospn(datos,tiempo,3,tiempo2);

    char orden[5] = {'a','b','c','d','e'};
    int hllegada[5] = {0,2,5,7,10};
    int tservicio[5] = {3,6,4,5,2};
	int q=1;
	int seg=0;
	int contador=0;
	int i=0;
	int p=0;
	int pos=0;
	//for(int i=0;i<5;i++){
	//suma del tiempo de serivicio total = total
	while(seg<=20){
		pos=contador;
		if(hllegada[pos]==seg){
			contador=pos+1;
			while(pos>=0){
				if(tservicio[pos]>0){
					tservicio[pos]=tservicio[pos]-1;
					std::cout<<"segundo: "<<seg<<" : ";
					std::cout<<" "<<orden[pos] <<" "<<std::endl;
					seg++;
					}
					pos--;
			}
		
		}else{
			pos--;
			while(pos>=0){
				if(tservicio[pos]>0){
					tservicio[pos]=tservicio[pos]-1;
					std::cout<<"segundo: "<<seg<<" : ";
					std::cout<<" "<<orden[pos] <<" "<<std::endl;
					seg++;
					pos--;
					}
				
				
			} contador++;
	}
	}
    cin.get();
    cin.get();

    return 0;
}

