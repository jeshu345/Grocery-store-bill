//program of course code(kirana and general store bill)
//Author:N.Jeshwanth kumar
//Date:24-05-2023
#include<stdio.h>
#include<stdlib.h>
void gropro(int *grandTotal);
void stpro(int *grandTotal);
void codrin(int *grandTotal);
struct details{
	char cname[50],address[50];
	int phoneno;
};

int main()
{
struct details cust;
FILE *fp;
fp=fopen("D:\\1.MY PROJECTS\\cource txt.txt","wb");
if (fp==NULL){
  	printf("file doesnt exists");
   	return 1;
}else
printf("\n-------WELCOME TO KIRANA & GENERAL STORE---------\n");
printf("Enter customer name:");
scanf("%s",cust.cname);
printf("Enter customer address:");
scanf("%s",cust.address);
printf("Enter customer phone number:");
scanf("%d",&cust.phoneno);
printf("\n_______________________________________________________________________\n");
printf("\nWhat do you want...?");
int a = 0;
int grandTotal = 0; 
do {
    printf("\n\n1.grocery products:");
    printf("\n2.stationary products:");
    printf("\n3.cool drinks");
    printf("\n4.exit");
    printf("\nchoose your choice:");
    scanf("%d", &a);
    switch (a) {
    case 1: {
        gropro(&grandTotal);
    break;
    }
    case 2: {
        stpro(&grandTotal);
    break;
    }
    case 3: {
        codrin(&grandTotal);
    break;
    }
    case 4: {
    	printf("\nGrand Total: %d\n", grandTotal);
        printf("Exiting..Thank you visit again.");
    break;
    }
    default: {
    printf("Invalid choice");
    }
    }
    } while (a!= 4);
    fwrite(&cust ,sizeof(cust),1,fp);
    fclose(fp);
    
    return (0);

}

void gropro(int *grandTotal) {
    int x, y, z, prlis, quan;
    printf("\n1.Soaps");
    printf("\n2.grams & flours");
    printf("\n3.Food");
    printf("\nchoose your choice:");
    scanf("%d", &x);
    switch (x) {
        case 1: {
            printf("\n1.body soaps:");
            printf("\n2.washing soaps:");
            printf("\n3.dish soaps:");
            printf("\nchoose your choice:");
            scanf("%d", &y);
            switch (y) {
                case 1: {
                    printf("\n1.Lifebuoy:");
                    printf("\n2.Lux");
                    printf("\n3.Santoor");
                    printf("\nchoose your choice:");
                    scanf("%d", &z);
                    switch (z) {
                        case 1: {
                            printf("Lifebuoy");
                            printf("\n1.10rs");
                            printf("\n2.24rs");
                            printf("\n3.54rs");
                            printf("\nChoose at which cost you want:");
                            scanf("%d", &prlis);
                            printf("\nEnter the quantity:");
                            scanf("%d", &quan);
                            int price;
                            if (prlis == 1) 
				            {
                               price = 10;
                            } 
				            else if (prlis == 2) 
				            {
                              price = 24;
                            }
				            else if (prlis == 3)
				            {
                             price = 54;
                            }
				            else
				             {
                                printf("Invalid choice");
                             return;
                             }
                            printf("\nSoap price is: %d", price);
                            printf("\nQuantity is: %d", quan);
                            int total = price * quan;
                            printf("\nTotal price is: %d",total);
                            *grandTotal+= total;
                            break;
                        }
                        case 2: {
                            printf("LUX");
                            printf("\n1.10rs");
                            printf("\n2.28rs");
                            printf("\n3.45rs");
                            printf("\nChoose at which cost you want:");
                            scanf("%d", &prlis);
                            printf("\nEnter the quantity:");
                            scanf("%d", &quan);
                            int price;
                            if (prlis == 1) 
				            {
                                price = 10;
                            }
				            else if (prlis == 2)
				            {
                              price = 28;
                            }
				            else if (prlis == 3)
			             	{
                                 price = 45;
                            }
				             else
				            {
                            printf("Invalid choice");
                            return;
                              }
                            printf("\nSoap price is: %d", price);
                            printf("\nQuantity is: %d", quan);
                            int total = price * quan;
                            printf("\nTotal price is: %d",total);
                            *grandTotal+= total;
                            break;
                        }
                        case 3: {
                            printf("Santoor");
                            printf("\n1.10rs");
                            printf("\n2.24rs");
                            printf("\n3.50rs");
                            printf("\nChoose at which cost u want:");
                            scanf("%d", &prlis);
                            printf("Enter the quantity:");
                            scanf("%d", &quan);
                             int price;
                             if (prlis == 1) 
			               	{
                               price = 10;
                            }
			            	else if (prlis == 2) 
			               	{
                              price = 24;
                            } 
			               	else if(prlis == 3)
				            {
                                price = 50;
                             } 
				               else
			               	{
                             printf("Invalid choice");
                            return;
                            }
                            printf("\nSoap price is: %d", price);
                            printf("\nQuantity is: %d", quan);
                            int total = price * quan;
                            printf("\nTotal price is: %d",total);
                            *grandTotal+= total;
                            break;
                           }
                            default: {
                            printf("\nInvalid choice");
                            break;
                        }
                    }
                    break;
                }
                case 2: {
                    printf("\n1.Rin");
                    printf("\n2.Tide");
                    printf("\n3.Surf Excel");
                    printf("\nchoose your choice:");
                    scanf("%d", &z);
                    switch (z) {
                        case 1: {
                        	 printf("RIN");
                printf("\n1.10rs");
                printf("\n2.22rs");
                printf("\n3.36rs");
                printf("\nChoose at which cost you want:");
                scanf("%d", &prlis);
                printf("\nEnter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                } 
				else if (prlis == 2) 
				{
                    price = 22;
                }
				 else if (prlis == 3)
				{
                    price = 36;
                }
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                printf("\nQuantity is: %d", quan);
                int total = price * quan;
                printf("\nTotal price is: %d",total);
                *grandTotal+= total;
                break;
                            
                        }
                        case 2: {
                            printf("TIDE");
                printf("\n1.10rs");
                printf("\n2.20rs");
                printf("\n3.30rs");
                printf("\nChoose at which cost you want:");
                scanf("%d", &prlis);
                printf("\nEnter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                }
				else if (prlis == 2)
				{
                    price = 20;
                }
				else if (prlis == 3)
				{
                    price = 30;
                }
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                printf("\nQuantity is: %d", quan);
                int total = price * quan;
                printf("\nTotal price is: %d",total);
                *grandTotal+= total;
                break;
                        }
                        case 3: {
                            printf("SURF EXCEL");
                printf("\n1.10rs");
                printf("\n2.24rs");
                printf("\n3.34rs");
                printf("\nChoose at which cost u want:");
                scanf("%d", &prlis);
                printf("Enter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                }
				else if (prlis == 2) 
				{
                    price = 24;
                } 
				else if(prlis == 3)
				{
                    price = 34;
                } 
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                            printf("\nQuantity is: %d", quan);
                            int total = price * quan;
                            printf("\nTotal price is: %d",total);
                            *grandTotal+= total;
                            break;
                        }
                        default: {
                            printf("\nInvalid choice");
                            break;
                        }
                    }
                    break;
                }
                case 3: {
                   
			printf("DISH WASHES:");
            printf("\n1.VIM:");
            printf("\n2.EXO");
            printf("\n3.NIRMA");
            printf("\nchoose your choice:");
            scanf("%d", &z);
            switch (z) {
            case 1: {
                printf("VIM");
                printf("\n1.10rs");
                printf("\n2.20rs");
                printf("\n3.30rs");
                printf("\nChoose at which cost you want:");
                scanf("%d", &prlis);
                printf("\nEnter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                } 
				else if (prlis == 2) 
				{
                    price = 20;
                }
				 else if (prlis == 3)
				{
                    price = 30;
                }
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                printf("\nQuantity is: %d", quan);
                int total = price * quan;
                printf("\nTotal price is: %d",total);
                *grandTotal+= total;
                return;
                break;
            }
            case 2:{
                printf("EXO");
                printf("\n1.10rs");
                printf("\n2.20rs");
                printf("\n3.30rs");
                printf("\nChoose at which cost you want:");
                scanf("%d", &prlis);
                printf("\nEnter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                }
				else if (prlis == 2)
				{
                    price = 20;
                }
				else if (prlis == 3)
				{
                    price = 30;
                }
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                printf("\nQuantity is: %d", quan);
                int total = price * quan;
                printf("\nTotal price is: %d",total);
                *grandTotal+= total;
                return;
                break;
            }
            case 3:{
                printf("NIRMA");
                printf("\n1.10rs");
                printf("\n2.20rs");
                printf("\n3.34rs");
                printf("\nChoose at which cost u want:");
                scanf("%d", &prlis);
                printf("Enter the quantity:");
                scanf("%d", &quan);
                int price;
                if (prlis == 1) 
				{
                    price = 10;
                }
				else if (prlis == 2) 
				{
                    price = 20;
                } 
				else if(prlis == 3)
				{
                    price = 34;
                } 
				else
				{
                    printf("Invalid choice");
                    return;
                }
                printf("\nSoap price is: %d", price);
                printf("\nQuantity is: %d", quan);
                int total = price * quan;
                printf("\nTotal price is: %d",total);
                *grandTotal= total;
                return;
                break;
            }
			}
		    break;
			}
		}
		break;}
	case 2:{
		
        	printf("GRAMS & FLOURS");
            printf("\n1.MAIDA(enter in grams)");
            printf("\n2.R-ATTA(enter in grams)");
            printf("\nchoose your choice:");
            scanf("%d", &y);
            switch (y) {
                case 1:{
                	printf("CHOOSEN MAIDA");
                	printf("\nEnter the quantity(in grams):");
                    scanf("%d", &quan);
                    int total = 0.5*quan;
                    printf("\nMaida bill is:%.f rs",0.5*quan);
                    *grandTotal += total;                    
					break;
					}
                case 2:{
                	printf("CHOOSEN R-ATTA");
                	printf("\nEnter the quantity(in grams):");
                	scanf("%d",&quan);
                	int total = 0.6*quan;
                	printf("R-ATTA bill is:%.frs", 0.6*quan);
                	*grandTotal += total;
					break;
				}
				default:
            printf("Invalid choice");
        }
		break;
	}
	case 3:{
		printf("FOOD");
            printf("\n1.RICE(enter in grams)");
            printf("\n2.PASTA(enter in grams)");
            printf("\nchoose your choice:");
            scanf("%d", &y);
            switch (y) {
                case 1:{
                	printf("Enter the quantity:");
                    scanf("%d", &quan);
                    int total=(2*quan);
                    printf("Rice bill is:%d",(2*quan));
                    *grandTotal += total;
                    return;
					break;
					}
                case 2:{
                	printf("Enter the quantity:");
                	scanf("%d",&quan);
                	int total=(3*quan);
                	printf("Pasta bill is:%d",(3*quan));
                	*grandTotal += total;
                	return;
					break;
				}
				default:
            printf("Invalid choice");
            return;
	            }
		break;
	}
}
}
void stpro(int *grandTotal) {
    int a, b, c, d, price, quan;
    printf("\n1.Pens");
    printf("\n2.Notebooks");
    printf("\n3.Files");
    printf("\nChoose your choice:");
    scanf("%d", &a);
    switch (a) {
    case 1: {
        printf("\n1.Ball pen:");
        printf("\n2.Gel pen:");
        printf("\nChoose your choice:");
        scanf("%d", &b);
        switch (b) {
        case 1: {
            printf("Ball pen");
            printf("\n1.10rs");
            printf("\n2.15rs");
            printf("\nChoose at which cost u want:");
            scanf("%d", &c);
            printf("Enter the quantity:");
            scanf("%d", &quan);
            if (c == 1) {
                price = 10;
            } else if (c == 2) {
                price = 15;
            } else {
                printf("Invalid choice");
                return;
            }                            
            printf("Pen price is: %d\n", price);
            printf("Quantity is: %d\n", quan);
            int total = price * quan;            
            printf("Total price is: %d\n",total);
            *grandTotal += total;
            return;
            break;
        }
        case 2: {
            printf("Gel pen");
            printf("\n1.15rs");
            printf("\n2.25rs");
            printf("\nChoose at which cost u want:");
            scanf("%d", &c);
            printf("Enter the quantity:");
            scanf("%d", &quan);
            if (c == 1) {
                price = 15;
            } else if (c == 2) {
                price = 25;
            } else {
                printf("Invalid choice");
                return;
            }
            printf("Pen price is: %d\n", price);
            printf("Quantity is: %d\n", quan);
            int total = price * quan;            
            printf("Total price is: %d\n",total);
            *grandTotal += total;
            return;
            break;
        }
        default:
            printf("Invalid choice");
            return;
        }
        break;
    }
    case 2: {
        printf("Notebooks");
        printf("\n1.50rs");
        printf("\n2.100rs");
        printf("\nChoose at which cost u want:");
        scanf("%d", &d);
        printf("Enter the quantity:");
        scanf("%d", &quan);
        if (d == 1) {
            price = 50;
        } else if (d == 2) {
            price = 100;
        } else {
            printf("Invalid choice");
            return;
        }
        printf("Note book price is: %d\n", price);
            printf("Quantity is: %d\n", quan);
            int total = price * quan;            
            printf("Total price is: %d\n",total);
            *grandTotal += total;
            return;
        break;
    }
    case 3: {
        printf("Files");
        printf("\n1.15rs");
        printf("\n2.30rs");
        printf("\nChoose at which cost u want:");
        scanf("%d", &d);
        printf("Enter the quantity:");
        scanf("%d", &quan);
        if (d == 1) {
            price = 15;
        }else if (d == 2) {
            price = 30;
        }else {
            printf("Invalid choice");
            return;
        }
       printf("file price is: %d\n", price);
            printf("Quantity is: %d\n", quan);
            int total = price * quan;            
            printf("Total price is: %d\n",total);
            *grandTotal += total;
            return;
		break;
		}
	}
}
		
void codrin(int *grandTotal) {
    int x, y, prlis, quan;
    printf("\n1.Coke");
    printf("\n2.Sprite");
    printf("\n3.Pepsi");
    printf("\nchoose your choice:");
    scanf("%d", &x);
    switch (x) {
    case 1: {
        printf("Coke");
        printf("\n1.30rs");
        printf("\n2.60rs");
        printf("\n3.120rs");
        printf("\nChoose at which cost u want:");
        scanf("%d", &prlis);
        printf("Enter the quantity:");
        scanf("%d", &quan);
        int price;
        if (prlis == 1) {
            price = 30;
        }else if (prlis == 2) {
            price = 60;
        }else if (prlis == 3) {
            price = 120;
        }else {
            printf("Invalid choice");
            return;
        }
        printf("Drink price is: %d\n", price);
        printf("Quantity is: %d\n", quan);
        int total = price * quan;
        printf("Total price is: %d\n", total);
        *grandTotal += total; 
        return;
        break;
    }
    case 2:{
        printf("Sprite");
        printf("\n1.20rs");
        printf("\n2.45rs");
        printf("\n3.90rs");
        printf("\nChoose at which cost u want:");
        scanf("%d", &prlis);
        printf("Enter the quantity:");
        scanf("%d", &quan);
        int price;
        if (prlis == 1) {
            price = 20;
        }else if (prlis == 2) {
            price = 45;
        }else if (prlis == 3) {
            price = 90;
        }else {
            printf("Invalid choice");
            return;
        }
         printf("Drink price is: %d\n", price);
        printf("Quantity is: %d\n", quan);
        int total = price * quan;
        printf("Total price is: %d\n", total);
        *grandTotal += total; 
        return;
        break;
    }
    case 3:{
        printf("Pepsi");
        printf("\n1.25rs");
        printf("\n2.50rs");
        printf("\n3.100rs");
        printf("\nChoose at which cost u want:");
        scanf("%d", &prlis);
        printf("Enter the quantity:");
        scanf("%d", &quan);
        int price;
        if (prlis == 1) {
            price = 25;
        } else if (prlis == 2) {
            price = 50;
        } else if (prlis == 3) {
            price = 100;
        } else {
            printf("Invalid choice");
            return;
        }
         printf("Drink price is: %d\n", price);
        printf("Quantity is: %d\n", quan);
        int total = price * quan;
        printf("Total price is: %d\n", total);
        *grandTotal += total; 
        return;
        break;
    }
    default: {
        printf("Invalid choice");
    }
    }
}

