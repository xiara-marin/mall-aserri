#include <iostream>

using namespace std;
//----------Panaderia----------

void Panaderia(){
  int numero;
  int num_rest;
  
  cout<<"Panaderia Aserr\xA1";
  cout<<"####Elija una Opcion#####\n";
  cout<<"Opcion 1-Baguette\n";
  cout<<"Opcion 2-Reposteria\n";
  cout<<"Opcion 3-Cafe\n";
  cout<<"Elija una opcion: "; cin>>numero;
  
  while( numero != 0 ){
   
    switch(numero){
    case 1:cout <<"Baguette \n";
    	 cout<<"Opcion 1-Con Queso\n";
       	cout<<"Opcion 2-Sin Queso\n";
  		cout<<"Opcion 3-Partido\n";
  		cout<<"Opcion 4-Entero\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;    
    case 2:cout <<"Reposteria \n";
    	cout<<"Opcion 1-Cachos\n";
       	cout<<"Opcion 2-Cangrejos\n";
  		cout<<"Opcion 3-Pasteles\n";
  		cout<<"Opcion 4-Prusiano\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;  
	case 3:cout <<"Cafe \n";
    	cout<<"Opcion 1-Mocha\n";
       	cout<<"Opcion 2-Late\n";
  		cout<<"Opcion 3-Cappuchino\n";
      cout<<"Opcion 4-Negro\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;  
    default: cout<<"No esta en el rango de 1-4 \n";
}

   }
}

//--------------Optica-------------

void Optica(){
  int numero;
  int num_Opti;
  
  cout<<"Optica Aserr\xA1";
  cout<<"####Elija una Opcion#####\n";
  cout<<"Opcion 1-Lentes\n";
  cout<<"Opcion 2-Aros\n";
  cout<<"Opcion 3-Peliculas\n";
  cout<<"Elija una opcion: "; cin>>numero;
  
  while( numero != 0 ){
   
    switch(numero){
    case 1:cout <<"Lentesn";
    	 cout<<"Opcion 1-Acero\n";
       	cout<<"Opcion 2-Plastico\n";
  		cout<<"Opcion 3-Metal\n"; 
      cout<<"Elija una opcion: "; cin>>num_rest;break;  
    case 2:cout <<"Aros \n";
    	cout<<"Opcion 1-Vifocal\n";
       	cout<<"Opcion 2-Planocovexas\n";
  		cout<<"Opcion 3-Biconvexas\n";
      cout<<"Elija una opcion: "; cin>>num_rest;break;  
	case 3:cout <<"Peliculas \n";
    	cout<<"Opcion 1-Pantalla Azul\n";
       	cout<<"Opcion 2-Sol\n";
         cout<<"Elija una opcion: "; cin>>num_rest;break;  
    default: cout<<"No esta en el rango de 1-4 \n";
}

   }
}


//---------------Reposteria-----------------

int Reposteria(){
   
  int opcion;
  int opc;
  
  cout<<"*****Welcome to Sweet Surprises Cake Shop*****\n\n";
  cout<<"\t1. Cupcakes\n";
  cout<<"\t2. Ice Cream\n";
  cout<<"\t3. Desserts\n";
  cout<<"\t4. Donuts\n";
  cout<<"\t5. Cakes\n";
  cout<<"\t0. Exit\n";
  cout<<"\nPick an option: "; cin>>opcion;
  
  while( opcion != 0 ){
  
   
    switch(opcion){
    	
    case 1:cout <<"You picked the Cupcakes option\n\n";
    	cout<<"1. Chocolate\n";
       	cout<<"2. Berry\n";
  		cout<<"3. Nuts\n";
        cout<<"\nPress any key, then ENTER to go back: ";
        cin>>opc;return 1;
		    
    case 2:cout <<"You picked the Ice Cream option\n\n";
    	cout<<"1. Pistachio\n";
       	cout<<"2. Vanilla\n";
  		cout<<"3. Chocolate\n";
        cout<<"\nPress any key, then ENTER to go back: ";
        cin>>opc;return 1;
		   
    case 3:cout <<"You picked the Desserts option\n";
    	cout<<"1. Cherry\n";
       	cout<<"2. Milk Choco\n";
  		cout<<"3. Chocolate\n";
        cout<<"\nPress any key, then ENTER to go back: ";
        cin>>opc;return 1;
		  
    case 4:cout <<"You picked the Donuts option\n";
    	cout<<"1. Chocolate\n";
       	cout<<"2. Vanilla\n";
  		cout<<"3. Berry\n";
        cin>>opc;return 1;
        
    case 5:cout <<"You picked the Cakes option\n";
    	cout<<"1. Apple\n";
       	cout<<"2. Carrot\n";
  		cout<<"3. Lemon\n";
  		cout<<"\nPress any key, then ENTER to go back: ";
        cin>>opc;return 1;

   default: cout<<"You must pick an option between 0 and 5 \n";
   return 0;
}

}

}

//---------------Ferretria-----------------

void Ferreteria(){
 int op;
  
  cout<<"Ferreteria \n";
  cout<<"1. Herramientas\n";
  cout<<"2. Pinturas\n";
  cout<<"3. Acabados\n";
  cout<<"4. Jardineria\n";
  cout<<"5. Construccion\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
 
 }
  
  cout<<"Ferreteria \n";
  cout<<"1. Herramientas\n";
  cout<<"2. Pinturas\n";
  cout<<"3. Acabados\n";
  cout<<"4. Jardineria\n";
  cout<<"5. Construccion\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
}

//--------------------Sport-------------------

void Sport() {
 int op;
  
  cout<<"Sport \n";
  cout<<"1. Balones\n";
  cout<<"2. Canchas\n";
  cout<<"3. Aros\n";
  cout<<"4. Raquetas\n";
  cout<<"5. Patines\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
 
 }
  
  cout<<"Sport \n";
  cout<<"1. Balones\n";
  cout<<"2. Canchas\n";
  cout<<"3. Aros\n";
  cout<<"4. Raquetas\n";
  cout<<"5. Patines\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
}

//------------------Tecnologia-----------------

void Tecnologia() {
 int op;
  
  cout<<"Tecnologia \n";
  cout<<"1. Telefonos\n";
  cout<<"2. Computadoras\n";
  cout<<"3. Tables\n";
  cout<<"4. Teclados\n";
  cout<<"5. Mouses\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
 
 }
  cout<<"Tecnologia \n";
  cout<<"1. Telefonos\n";
  cout<<"2. Computadoras\n";
  cout<<"3. Tables\n";
  cout<<"4. Teclados\n";
  cout<<"5. Mouses\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
}

//-----------------Zapateria---------------

void Zapateria() {
 int op;
  
  cout<<"Zapateria \n";
  cout<<"1. Hombre\n";
  cout<<"2. Mujer\n";
  cout<<"3. Chiquito\n";
  cout<<"4. Chiquita\n";
  cout<<"5. Adulto mayor\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
 
 }
  cout<<"Zapateria \n";
  cout<<"1. Hombre\n";
  cout<<"2. Mujer\n";
  cout<<"3. Chiquito\n";
  cout<<"4. Chiquita\n";
  cout<<"5. Adulto mayor\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
}

//---------------Heladeria------------------

void Heladeria() {
 int op;
  
  cout<<"Heladeria \n";
  cout<<"1. Cono sencillo\n";
  cout<<"2. Banana split\n";
  cout<<"3. Sunday\n";
  cout<<"4. Frozen capuchino\n";
  cout<<"5. Cono con dos bolas\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
 
 }
 cout<<"Heladeria \n";
  cout<<"1. Cono sencillo\n";
  cout<<"2. Banana split\n";
  cout<<"3. Sunday\n";
  cout<<"4. Frozen capuchino\n";
  cout<<"5. Cono con dos bolas\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
}


//---------------------Libreria---------------------
void Libreria() {
 int op;
  
  cout<<"Libreria \n";
  cout<<"1. Accion\n";
  cout<<"2. Romance\n";
  cout<<"3. Comedia\n";
  cout<<"4. Terror\n";
  cout<<"5. manga\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
  
  while( op != 0 ){
  
   
    switch(op){
    case 1:cout<<"Accion \n";
  	cout<<"Padre: del seminario al narcotráfico\n";
  	cout<<"UN MAR DE HISTORIAS PARA OLVIDAR EL TEMPORAL\n";
  	cout<<"Odisea\n";
  	cout<<"HACIA UN MUNDO NUEVO\n";
  	cout<<"Chapiadoras Chapiadas\n";break;
  	
  	
    case 2:cout<<"Romance \n";
  	cout<<"Orgullo y prejuicio, de Jane Austen\n";
  	cout<<"El ruiseñor, de Kristin Hannah\n";
  	cout<<"Edenbrooke, de Julianne Donaldson\n";
  	cout<<"Tú y yo, invencibles, de Alice Kellen\n";
  	cout<<"El jinete de bronce, de Paullina Simons\n";break;
  	
    case 3:cout<<"Comedia \n";
  	cout<<"Maldito karma\n";
  	cout<<"Sin noticias de Gurbo\n";
  	cout<<" Reír es la única salida\n";
  	cout<<"La conjura de los necios\n";
  	cout<<"Memorias de un amante sarnoso\n";break;
  	
    case 4:cout<<"Terror \n";
  	cout<<"'La invitada' de Jennifer McMahon\n";
  	cout<<"La señora March' de Virginia Feito\n";
  	cout<<"Historia de fantasmas' de Laura Freudenthaler\n";
  	cout<<"El Gran Libro de Satan' de VV. AA. (Edicion de Jorge de Cascante)\n";
  	cout<<"El hombre perdido' de Jane Harper\n";break;
    
	case 5:cout<<"Manga \n";
  	cout<<"Akira\n";
  	cout<<"Last Order\n";
  	cout<<"Ghost in the Shell\n";
  	cout<<"One Piece\n";
  	cout<<"Berserk\n";break;

    default: cout<<"No esta en el rango de 1-5 \n";
 
 }
   cout<<"Libreria \n";
  cout<<"1. Accion\n";
  cout<<"2. Romance\n";
  cout<<"3. Comedia\n";
  cout<<"4. Terror\n";
  cout<<"5. manga\n";
  cout<<"Opcion 0 salir\n";
  cout<<"Elija una opcion: "; cin>>op;
 
}
}

//-----------------------Jugueteria---------------------
void Jugueteria (){
int num_juguete;
	cout<<"###########Bienvenido en la Verduleria##########"<<endl;
	cout<<"Opcion 1-Papas\n";
    cout<<"Opcion 2-Ayotes\n";
  	cout<<"Opcion 3-Camotes\n";
  	cout<<"Opcion 4-Chayotes\n";
  	cout<<"Opcion 5-Vainicas\n";
    cout<<"Elija una opcion: ";
	cin>>num_juguete;
	
}

//-----------------------Verduleria---------------------
void Verduleria (){
int num_verdu;
	cout<<"###########Bienvenido en la Verduleria##########"<<endl;
	cout<<"Opcion 1-Papas\n";
    cout<<"Opcion 2-Ayotes\n";
  	cout<<"Opcion 3-Camotes\n";
  	cout<<"Opcion 4-Chayotes\n";
  	cout<<"Opcion 5-Vainicas\n";
    cout<<"Elija una opcion: ";
	cin>>num_verdu;
	
}

//---------------------VideoJuegos-------------------------
void VideoJuegos (){
int num_juego;
	cout<<"###########Bienvenido en la Video Juegos ASserri##########"<<endl;
	cout<<"Opcion 1-Juegos PS4\n";
    cout<<"Opcion 2-Juegos Xbox\n";
  	cout<<"Opcion 3-Juegos Nintendo Switch\n";
  	cout<<"Opcion 4-Juegos PS5\n";
  	cout<<"Opcion 5-Juegos Xbox series-X\n";
    cout<<"Elija una opcion: ";
	cin>>num_juego;
	
}
//----------------Joyeria-------------------
void Joyeria(){
	
int number;
int num_joy;	

	cout<<"Joyeria";
  	cout<<"####Elija uno de los servicios#####\n";
  	cout<<"Opcion 1-Collares\n";
  	cout<<"Opcion 2-Anillos\n";
  	cout<<"Opcion 3-Aretes\n";
  	cout<<"Opcion 4-Pulseras\n";
  	cout<<"Opcion 5-Material\n";
  	cout<<"Opcion 0 Salir\n";
  	cout<<"Elija una opcion: "; cin>>number;
  
  while( number != 0 ){
  
   
    switch(number){
    case 1:cout <<"Collares \n";
    	cout<<"Opcion 1-Gargantillas\n";
       	cout<<"Opcion 2-Cadenas\n";
  		cout<<"Opcion 3-Princesa\n";
  		cout<<"Opcion 4-Matin\x82\n";
  		cout<<"Opcion 5-\xA2pera\n";
        cout<<"Elija una opcion: "; cin>>num_joy;break;    
    case 2:cout <<"Anillos\n";
    	cout<<"Opcion 1-Promesa\n";
       	cout<<"Opcion 2-Compromiso\n";
  		cout<<"Opcion 3-Matrimonio\n";
  		cout<<"Opcion 4-Goals\n";
        cout<<"Elija una opcion: "; cin>>num_joy;break;   
    case 3:cout <<"Aretes \n";
    	cout<<"Opcion 1-Aros\n";
       	cout<<"Opcion 2-Candelabro\n";
  		cout<<"Opcion 3-Largos\n";
  		cout<<"Opcion 4-Perlas\n";
        cout<<"Elija una opcion: "; cin>>num_joy;break;  
    case 4:cout <<"Pulseras\n";
    	cout<<"Opcion 1-Tejida\n";
    	cout<<"Opcion 2-Rigida\n";
    	cout<<"Opcion 3-Cadena\n";
    	cout<<"Opcion 4-Cuero sintetico-\n";
        cout<<"Elija una opcion: "; cin>>num_joy;break;
    default: cout<<"No esta en el rango de 1-4 \n";
    case 5:cout<<"Material\n";
	cout<<"####Elija uno de los servicios#####\n";
  	cout<<"Opcion 1-Oro\n";
  	cout<<"Opcion 2-Plata 925\n";
  	cout<<"Opcion 3-Oro rosa\n";
  	cout<<"Opcion 4-Ba�o de oro\n";
  	cout<<"Opcion 0 salir\n";
  	cout<<"Elija una opcion: "; cin>>number;
 
 }
  
}
}
//----------------------Restaurante---------------------
void Restaurante(){
int numero;
int num_rest;
  cout<<"Restaraunte Mall Aserr\xA1";
  cout<<"####Elija una Opcion#####\n";
  cout<<"Opcion 1-Desayuno\n";
  cout<<"Opcion 2-Almuerzo\n";
  cout<<"Opcion 3-Cena\n";
  cout<<"Opcion 4-Caf\x82\n";
  cout<<"Opcion 0 Salir\n";
  cout<<"Elija una opcion: "; cin>>numero;
  
  while( numero != 0 ){
   
    switch(numero){
    case 1:cout <<"Desayuno \n";
    	 cout<<"Opcion 1-Frutas con granola\n";
       	cout<<"Opcion 2-Gallo Pinto\n";
  		cout<<"Opcion 3-Hot cakes\n";
  		cout<<"Opcion 4-Omelett\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;    
    case 2:cout <<"Almuerzo \n";
    	cout<<"Opcion 1-Casado\n";
       	cout<<"Opcion 2-Spaguetti carbonara\n";
  		cout<<"Opcion 3-Calzone\n";
  		cout<<"Opcion 4-Milanesa a la carbonara\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;   
    case 3:cout <<"Cena\n";
    	cout<<"Opcion 1-Sopa negra\n";
       	cout<<"Opcion 2-Alitas \n";
  		cout<<"Opcion 3-Hamburguesa\n";
  		cout<<"Opcion 4-Pizza\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;  
    case 4:cout <<"Cafe \n";
    	cout<<"Opcion 1-Cachos\n";
       	cout<<"Opcion 2-Pa\xA4uelos\n";
  		cout<<"Opcion 3-Donas\n";
  		cout<<"Opcion 4-Alfajores\n";
        cout<<"Elija una opcion: "; cin>>num_rest;break;
    default: cout<<"No esta en el rango de 1-4 \n";
}

   }
}
//----------------Boutique----------------
void Boutique(){
	cout<<"###########Bienvenido en la Boutique##########"<<endl;
	cout<<"Opcion 1-Zona de Pantalones\n";
    cout<<"Opcion 2-Zona de Blusas\n";
  	cout<<"Opcion 3-Zona de Collares\n";
  	cout<<"Opcion 4-Zona de Maquillaje\n";
  	cout<<"Opcion 5-Zona de Perfumes\n";
    cout<<"Elija una opcion: ";
	
}
//Funcion principal
int main(){
int num_principal;
cout<<"$----------Bienvenid@ al Mall Aserr\xA1----------$"<<endl;
cout<<"Ingrese 1 para Boutique"<<endl;
cout<<"Ingrese 2 para Restaurante "<<endl;
cout<<"Ingrese 3 para Joyeria"<<endl;
cout<<"Ingrese 4 para VideoJuegos "<<endl;
cout<<"Ingrese 5 para Verduleria "<<endl;
cout<<"Ingrese 6 para Jugueteria "<<endl;
cout<<"Ingrese 7 para Libreria"<<endl;
cout<<"Ingrese 8 para Heladeria "<<endl;
cout<<"Ingrese 9 para Zapateria "<<endl;
cout<<"Ingrese 10 para Tecnologia  "<<endl;
cout<<"Ingrese 11 para Sport "<<endl;
cout<<"Ingrese 12 para Ferreteria  "<<endl;
cout<<"Ingrese 13 para Reposteria  "<<endl;
cout<<"Ingrese 14 para Optica  "<<endl;
cout<<"Ingrese 15 para Panaderia  "<<endl;
cout<<"Elija una opcion: ";
	cin>>num_principal;

switch(num_principal){
	case 1:
		Boutique();
	case 2:
		Restaurante();
	case 3:
		Joyeria();
	case 4:
		VideoJuegos();

	case 5:
		Verduleria();
	case 6:
		Jugueteria();
	case 7:
		Libreria();
	case 8:
		Heladeria();
	case 9:
		Zapateria();
	case 10:
		Tecnologia();
	case 11:
		Sport();
	case 12:
		Ferreteria();
	case 13:
		Reposteria();
	case 14:
		Optica();
	case 15:
		Panaderia();
}

}
