

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{

   int hospital=0,c=0,asiento=0,m=0,hospital1[49],hospital2[49],hospital3[49],i;
   char opcion;
   for (i=0;i<49;i++)
   hospital1[i]=0;
   for (i=0;i<49;i++)
   hospital2[i]=0;
   for (i=0;i<49;i++)
   hospital3[i]=0;
   cout<<"TODOS LOS LUGARES DE VACUNA ESTAN DISPONIBLES....";
   getch();
    do
     {  system("cls");
         cout<<"\n\n\t Seleccione Una Opcion Del Menu\n";
         cout<<"\n\n\t 1. Reservar\n";
         cout<<"\n\n\t 2. Confirmar Reserva\n";
         cout<<"\n\n\t 3. Cancelar Reserva\n";
         cout<<"\n\n\t 4. Estado de vacunas\n";
         cout<<"\n\n\t 5. Salir\n";
         cout<<"\nIntroduzca el Numero de la Opcion:";
         cin>>opcion;
         switch(opcion)
         {
         case '1':
              cout<<"\nDesea vacunarse En:""\n""san pedro sula opcion 1:""\n""choloma opcion 2:""\n""tegucigalpa opcion 3:""\n""eliga la opcion que desea: ";
              cin>>hospital;
              cout<<"\npor cual vacuna va usted: ""\n""primera vacuna""\n""segunda vacuna\n";
              cin>>c;
              if (c==1)
              {
                do {
                cout<<"\nIntodusca numero de asiento a reservar: ";
                cin>>asiento;
                if ((asiento<0)||(asiento>14))
                cout<<"\n Dato De vacuna No Valido....";
                } while ((asiento<0)||(asiento>14));
                    }
                    else
              {cout<<"Elija Un asiento Entre 15 y 49:";
               do {
                cout<<"\nIntroduzca El numero de asiento: ";
                cin>>asiento;
                if ((asiento<15)||(asiento>49))
                cout<<"\nDato De Asiento No Valido....";
                } while ((asiento<15)||(asiento>49));
                }
                if (hospital==1)
              { if (hospital1[asiento]==0)
                    {hospital1[asiento]=1;
                    cout<<"su operacion se realizo con exito...";
                    }
                 else
                cout<<"la vacuna No Esta Disponible....";
               }
              if(hospital==2)
              { if (hospital2[hospital==2]==0)
                    {hospital2[asiento]=1;
                     cout<<"su operacion se realizo con exito...";
                    }
                else
                cout<<"El Asiento No Esta Disponible....";
              }
                if(hospital==3)
                { if (hospital3[hospital==3]==0)
                      {hospital3[asiento]=1;
                       cout<<"su operacion se realizo con exito...";
                      }
                      else
                cout<<"la vacuna No Esta Disponible....";
                }

              break;
         case '2':
              cout<<"\nPara Confirmar Su Reserva:""\n""Ingrese el numero de vacuna que reservo:";
              cin>>hospital;
              cout<<"\nIngrese El Numero de asiento es:";
              cin>>asiento;
              if (hospital==1)
              { if (hospital1[asiento]==1)
                    {hospital1[asiento]=2;
                    cout<<"su confirmacion se realizo con exito...";
                    }
                 else
                cout<<"la vacuna No Ha Sido Reservado Aun Por Fhospitalor Reservelo Antes....";
               }
              if(hospital==2)
              { if (hospital2[hospital==2]==1)
                    {hospital2[asiento]=2;
                     cout<<"su confirmacion se realizo con exito...";
                    }
                else
                cout<<"la vacuna No Ha Sido Reservado Aun por Fhospitalor Reservelo Antes....";
               }
                if(hospital==3)
                { if (hospital3[hospital==3]==1)
                      {hospital3[asiento]=2;
                        cout<<"su confirmacion se realizo con exito...";
                      }
                      else
                cout<<"El Asiento No Ha Sido Reservado Aun por Fhospitalor Reservelo Antes....";
                }


              break;
         case '3':
              cout<<"\nPara Cancelar Su Reserva:""\n""Ingrese el numero de vacuna que reservo:";
              cin>>hospital;
              cout<<"\nIngrese El Numero de vacuna:";
              cin>>asiento;
              if (hospital==1)
              {if (hospital1[asiento]==0)
                   cout<<"\nla vacuna No Ha Sido Reservado Aun Por Fhospitalor Reservelo Antes....";
                        {if (hospital1[asiento]==2)
                         cout<<"la vacuna Ya No Se Puede Cancelar Gracias....";
                         else
                         {if (hospital1[asiento]==1)
                              hospital1[asiento]=0;
                              cout<<"\nsu numero de fila Ha Sido Cancelada.";
                         }
                         }
            }
              if(hospital==2)
              { if (hospital2[hospital==2]==2)
                    hospital2[asiento]=0;
                else
                cout<<"el numero de fila Ya No Se Puede Cancelar Gracias....";
               }
                if(hospital==3)
                { if (hospital3[hospital==3]==2)
                      hospital3[asiento]=0;
                      else
                cout<<"la fila Ya No Se Puede Cancelar Gracias....";
                }

              break;
        case '4':
              cout<<"\nque sitio Desea Verificar san pedro sula opcion 1,choloma 2 o tegucigalpa opcion 3:";
              cin>>hospital;
             cout<< "\nQue Desea Veriaficar:""\n""1-Reservas""\n""2-Reservas Confirmadas""\n""3-hospitales Vacios""\n""Eliga La Opcion a Verificaar: ";
              cin>>m;
              if ((hospital==1)&&(m==1))
              { cout<<"el numero de fila Reservadas Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital1[i]==1)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==1)&&(m==2))
              { cout<<"el numero de fila Confirmados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital1[i]==2)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==1)&&(m==3))
              { cout<<"el numero de asientos a esperar Vacios Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital1[i]==0)
                     cout<<i<<"-"; }
              }
                if ((hospital==2)&&(m==1))
              { cout<<"Los Asientos Reservados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital2[i]==1)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==2)&&(m==2))
              { cout<<"Los Asientos Confirmados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital2[i]==2)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==2)&&(m==3))
              { cout<<"Los Asientos Vacios Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital2[i]==0)
                     cout<<i<<"-"; }
              }

               if ((hospital==3)&&(m==1))
              { cout<<"Los Asientos Reservados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital3[i]==1)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==3)&&(m==2))
              { cout<<"Los Asientos Confirmados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital3[i]==2)
                     cout<<i<<"-"; }
              }
                 else
               if ((hospital==3)&&(m==3))
              { cout<<"Los Asientos Vacios Son: \n";
                  for (i=0;i<=49;i++)
                  { if(hospital3[i]==0)
                     cout<<i<<"-"; }
              }
               break;
         case '5':
              break;
         default:
                 cout<<"\n  ";
         }
         getch();
   } while (opcion != '5');
         cout<<"\nHa Decidido Salir Del Menu...";
         getch();
         return 0;
}


