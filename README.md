
# FourDis_SevenSeg

## English

FourDis_SevenSeg helps you print numbers on a 4-digit, 7-segment display.

After install the library  you need to call  FourDis_SevenSeg in your code.

    #include <FourDis_SevenSeg.h>

Then you need instace an object, passing two parameters to constructor, an arry of bytes with the Display Pins (D1, D2, D3, D4) connected in you Arduino and another array with the segments pins connected. 

    byte DISPLAY_PIN[] = {2, 3, 4, 5};
    byte SEGMENT_INT[] = {6, 7, 8, 9, 10, 11, 12, 13};
    FourDis_SevenSeg fdss(DISPLAY_PIN, SEGMENT_INT);
    
Then can call the method showNumber passing a number with 4 digit Max. 

      fdss.showNumber(2022);
For more you can see more code in Example paste.

## Português - BR

FourDis_SevenSeg ajuda você a printar números em um display de 4 dígitos e 7 segmentos.

Depois de instalar a biblioteca em seu Arduino você precisa inserir a mesma no cabeçalho do seu código.

    #include <FourDis_SevenSeg.h>

Em seguida você precisar instanciar um objeto da classe FourDis_SevenSeg , em seu construtor você deve passar dois parâmetros: um array de byte contendo os pins dos Display(D1, D2, D3, D4) e outro contendo os pins dos segmentos.

    byte DISPLAY_PIN[] = {2, 3, 4, 5};
    byte SEGMENT_INT[] = {6, 7, 8, 9, 10, 11, 12, 13};
    FourDis_SevenSeg fdss(DISPLAY_PIN, SEGMENT_INT);
    
Então você pode chamar o método showNumber e passar um número com 4 dígitos e o mesmo será impresso em seu display.

      fdss.showNumber(2022);
      
Para mais informações e códigos você pode consultar a pasta Example.
