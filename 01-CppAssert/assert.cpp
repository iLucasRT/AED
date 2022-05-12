#include<cassert>
//#include<iostream>
//#include<iomanip>
#include<string>
#include <cstring>


using namespace std::literals;
int main (){

    /*
    TIPO DE DATO: DOUBLE
    Conjunto de valores: representado matematicamente por los reales. (R)
    */

   //No es recomendable utilizar la comparacion mediante igualdad con tipo double
    assert(0.0 - 1.0 == -1.0);      // El resto de la izq es binario mientras que el de la derecha solo va con el de la derecha
    assert(5.0 == 1.5 + 3.5);       //Suma y comparacion
    assert(4.9 != 3.2 - 1.8);       //Diferencia y resta
    assert(170.1 <= 199.78);        //Menor o igual
    assert(13.5 >= 6.7);            //Mayor o igual
    assert(4.5 == 1.5 * 3.0 );      //comparacion y multiplicación
    assert(6.8 == 17 / 2.5);        //comparacion y división    //Promocion de tipo de dato: para poder operarlos, promociona al 17 y lo toma como double. (de INT --> DOUBLE)
    assert(0.1 == 1.0 / 10.0);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);  //f = float 

    assert(0.9 != 0.3 + 0.3 + 0.3);
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); /*
     Assertion failed (==). 1/10 (0.1) no puede ser respresentado con presicion en double ya que no puede ser representado en base 2 (da periodico) */
    
    

//-------------------------------------------------------------------------------------------------------------------------------------------------------

    /*
    TIPO DE DATO: INT
    Conjunto de valores: representado matematicamente por los enteros. (Z) 
    */

    assert(0 == -1 + 1);          //Suma y comparacion
    assert(6 != 7 - 2);           //Diferencia y resta
    assert(1 >= -2);              //Menor o igual
    assert(-10 <= 9);             //Mayor o igual
    assert(9== 3 * 3 );           //comparacion y multiplicación
    assert(-5 == 15 / -3 );       //comparacion y división              
    assert(1 == 11 % 2 );         //comparacion y resto 
  



//-------------------------------------------------------------------------------------------------------------------------------------------------------

    /*
    TIPO DE DATO: unsigned
    Conjunto de valores: representado matematicamente por los naturales. (N) 
    4 bytes. 2^32 combinaciones diferentes. 
    */

    //u para unsigned
   assert(0u==0u);
   assert(0u==15u%3u);
   assert(5u==3u+2u);
   assert(9999999999 == 9999999998 + 1);
   assert(1000000000000000000000000001u == 1000000000000000000000000000u + 1u);  //warning, constante entera demsiado grande para su tipo //x cout no saca bien
   assert(1400 <= 1500);
   assert(8000 >= 1000);


//-------------------------------------------------------------------------------------------------------------------------------------------------------

    /*
    TIPO DE DATO: BOOL
    Conjunto de valores: representado matematicamente por dos valores; verdaero o falso.
    */
   
    assert(true);                                 
    assert(false or true);                        
    assert(true and true);                   
    assert(not false);                       
    assert(false != true and true or false);
    assert(false != (5+5.0==10));                             
    assert(true == true);
    assert(true == (true and true) and false or true );


//-------------------------------------------------------------------------------------------------------------------------------------------------------

    /*
    TIPO DE DATO: CHAR
    Conjunto de valores: todos los caracteres disponibles en la tabla ASCII extendido. (2^8 = 255 + 00 (256 posibles carateres))
    */

    assert('A' != 'B');  
    assert('A' <= 'B');            // A=65 < B=66 en ASCII
    assert('A'== 65);
    assert('B'== 'A' + 1);
    assert(131 == 'A' + 'B');      //Combinacion de tipos de datos
    assert(1 == 'B' % 'A');                     
    assert('8' != '1' + '7');      //Assertion failed (==); falla debido a que son tratados como CHAR ---> (8=56) != (1=49) + (7=55)  ; (49 + 55 = 104)
    assert( 1 == 'B' - 'A');
    assert( 'a'!= 'A');
    assert('a'- 32 == 'A');
    

    //-------------------------------------------------------------------------------------------------------------------------------------------------------

    /*
    TIPO DE DATO: STRING
    Tipo de dato compuesto, formado por caracteres. 
    A diferencia de el tipo CHAR, se expresa entre comillas.
    */
  
    assert("A"s == "A"s);
    assert("lucas"s == "lu"s + "cas"s);
    assert(5 == "lucas"s.length());             //funcion miembro. length()
    assert("aaa"s >= "aa"s);
    assert("1" <= "2");
    assert("AA"s < "AB"s);
    assert("hola"s == "hola"s);
    assert("hola"  == "hola");   //PUEDE FALLAR..

    {
      {
        char s []= "hola";
        char t []= "hola";
        assert(s != t);
        assert(0==strcmp(s,t));

        
        //s = "chau"; 
        /*
        assert(s=="chau");
        */
      }

      {
        std::string s {"hola"s};
        std::string t {"hola"s};
        assert (s == t);

        s = "chau";
        assert(s=="chau");
      }
    }
}