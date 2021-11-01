#include <stdio.h>

#define DIA 1
#define MES 2
#define ANNIO 3

struct struct_fecha
{
    int dia;
    int mes;
    int annio;
};

typedef struct struct_fecha Fecha;
 
void capturaFecha(Fecha *fecha);
Fecha sumarFecha(Fecha fecha, int tipo, int cantidad);
Fecha restarFecha(Fecha fecha , int tipo, int cantidadRestar);
int compararFechas(Fecha fecha1, Fecha fecha2);
void imprimirFecha(Fecha fecha );

int main()
{
    int tipo, iguales;
    int cantidad, cantidadRestar;
    Fecha nuevaFecha;
    Fecha nuevafecha;
    Fecha fecha1;
    Fecha fecha2;
    Fecha fecha;


    capturaFecha(&fecha);
    nuevaFecha=sumarFecha(fecha,  tipo,  cantidad);
    nuevafecha=restarFecha( fecha , tipo,  cantidadRestar);
    iguales=compararFechas(fecha1,  fecha2);
    imprimirFecha(fecha );



    fflush(stdin);
    getchar();
    return 0;
}

void capturaFecha(Fecha *fecha)
{
    printf("dame el dia");
    scanf("%d", & fecha->dia);
    printf("dame el mes");
    scanf("%d",&fecha->mes);
    printf("dame el año");
    scanf("%d",fecha->annio);

}

void imprimirFecha(Fecha fecha )
{
    int i;
    printf("dia    mes    annio  \n");
    
        printf("%d\t",fecha.dia,"/");
        printf("%d\t",fecha.mes,"/");
        printf("%d\t",fecha.annio,"/");
        
}

/*int compararFechas(Fecha fecha1, Fecha fecha2)
{

    int iguales=0;
    if (Fecha.fecha1<Fecha.fecha2)
    {
        iguales=1;
    }
    else if (fecha1>fecha2)
    {
        iguales=-1;
    }
    return iguales;
}
*/

Fecha restarFecha(Fecha fecha , int tipo, int cantidadRestar)
{
    Fecha nuevafecha;
    if (tipo==ANNIO)
    {
        nuevafecha.dia=fecha.dia;
        nuevafecha.mes=fecha.mes;
        nuevafecha.annio=fecha.annio-cantidadRestar;
    }
    else if(tipo==MES)
    {
        nuevafecha.dia=fecha.dia;
        nuevafecha.mes=fecha.mes -cantidadRestar;
        while (nuevafecha.mes<0)
        {
            cantidadRestar=cantidadRestar+12;
            nuevafecha.annio=fecha.annio-1;

        }
        nuevafecha.annio=fecha.annio;
        
    }
    else if (tipo==DIA)
    {
        nuevafecha.dia=fecha.dia-cantidadRestar;
        while(nuevafecha.dia<0)
        {
            cantidadRestar=cantidadRestar+30;
            nuevafecha.mes=fecha.mes-1;
            while(nuevafecha.mes<0)
            {
                nuevafecha.mes=fecha.mes+12;
                nuevafecha.annio=fecha.annio-1;
            }

        }
        nuevafecha.annio=fecha.annio;         
    
    }

    return nuevafecha;

}

Fecha sumarFecha(Fecha fecha, int tipo, int cantidad)
{
    Fecha nuevaFecha;
    if (tipo==ANNIO)
    {
        nuevaFecha.dia=fecha.dia;
        nuevaFecha.mes=fecha.mes;
        nuevaFecha.annio=fecha.annio+cantidad;
    }
    else if(tipo==MES)
    {
        nuevaFecha.dia=fecha.dia;
        nuevaFecha.mes=fecha.mes +cantidad;
        while(nuevaFecha.mes>12)
        {
            cantidad=cantidad-12;
            nuevaFecha.annio=fecha.annio+1;

        }
        nuevaFecha.annio=fecha.annio;
        
    }
    else if (tipo==DIA)
    {
        nuevaFecha.dia=fecha.dia+cantidad;
        while(nuevaFecha.dia>30)
        {
            cantidad=cantidad-30;
            nuevaFecha.mes=fecha.mes+1;
            while(nuevaFecha.mes>12)
            {
                nuevaFecha.mes=fecha.mes-12;
                nuevaFecha.annio=fecha.annio+1;
            }

        }
        nuevaFecha.annio=fecha.annio;         
    
    }
    return nuevaFecha;
}