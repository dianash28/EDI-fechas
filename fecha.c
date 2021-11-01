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

int capturaFecha(Fecha *fecha);
Fecha sumarFecha(Fecha fecha, int tipo, int cantidad);
Fecha restarFecha(Fecha fecha , int tipo, int cantidadRestar);
int compararFechas(Fecha fecha1, Fecha fecha2);
void imprimirFecha(Fecha fecha );


int main()
{
   

    fflush(stdin);
    getchar();
    return 0;
}

int capturaFecha(Fecha *fecha)
{
    printf("dame el dia")
    scanf("%d", & Fecha→)
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
        if (nuevaFecha.mes>12)
        {
            nuevaFecha.mes=(fecha.mes +cantidad)%12;
            nuevaFecha.annio=fecha.annio+1;

        }
        else 
        {
            nuevaFecha.annio=fecha.annio;
        }
    }
    else if (tipo==DIA)
    {
        if (nuevaFecha.dia>30)
        {
            nuevaFecha.dia=(fecha.dia+cantidad)%30;
            nuevaFecha.mes=fecha.mes+1;
            if ((fecha.mes+1)>12)
            {
                nuevaFecha.mes=(fecha.mes+1)%12;
                nuevaFecha.annio=fecha.annio+1;
            }
            else 
            {
                nuevaFecha.mes=fecha.mes+1;
                nuevaFecha.annio=fecha.annio;
            }
        }
        else 
        {
            nuevaFecha.dia=fecha.dia+cantidad;
            nuevaFecha.mes=fecha.mes;
            nuevaFecha.annio=fecha.annio;
        }
    }
    
    
    return nuevaFecha;
}


else
            {
                nuevaFecha.mes=fecha.mes;
                nuevaFecha.annio=fecha.annio;
            } 