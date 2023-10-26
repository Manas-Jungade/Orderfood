#include<stdio.h>
#include<string.h>

# define no_of_restaurants 5
# define no_of_fooditems 10
# define no_of_specialitems 10

struct Menuitems
{
    char item_name[50];
    int item_price;
    int quantity; // Taken from user
    int servicetime; // in minutes

};

struct specialitems
{
    char special_item_name[50];
    int special_item_prices;
    int quantity; // Taken from user
    int servicetime; // in minutes

};

struct Restaurants
{
  char name[50];
  char address[100];
  char dayspecial[50];
  int dayspecial_price;
  int dayspecial_time; // in minutes
  struct Menuitems items[no_of_fooditems];
  struct specialitems specialmeal[no_of_specialitems];
  int menusize;
  int specialitemsize;
};

int main(){

    struct  Restaurants restaurants[no_of_restaurants];

    // First Restaurant data
    strcpy(restaurants[0].name,"Little");
    strcpy(restaurants[0].address,"Ram nagar");
    strcpy(restaurants[0].dayspecial,"Special Burger");

    restaurants[0].dayspecial_price=150;
    restaurants[0].dayspecial_time=15;
    restaurants[0].menusize=4;
    restaurants[0].specialitemsize=3;
    // MEal
    strcpy(restaurants[0].items[0].item_name,"Burger");
    strcpy(restaurants[0].items[1].item_name,"pizza");
    strcpy(restaurants[0].items[2].item_name,"sandwitch");
    strcpy(restaurants[0].items[3].item_name,"Noodles");

    restaurants[0].items[0].item_price=100;
    restaurants[0].items[1].item_price=200;
    restaurants[0].items[2].item_price=50;
    restaurants[0].items[3].item_price=80;

    restaurants[0].items[0].servicetime=10;
    restaurants[0].items[1].servicetime=15;
    restaurants[0].items[2].servicetime=10;
    restaurants[0].items[3].servicetime=20;
    // special item
    strcpy(restaurants[0].specialmeal[0].special_item_name,"Paneer");
    strcpy(restaurants[0].specialmeal[1].special_item_name,"Manchurian");
    strcpy(restaurants[0].specialmeal[2].special_item_name,"Kofta");

    restaurants[0].specialmeal[0].special_item_prices=150;
    restaurants[0].specialmeal[1].special_item_prices=200;
    restaurants[0].specialmeal[2].special_item_prices=90;

    restaurants[0].specialmeal[0].servicetime=10;
    restaurants[0].specialmeal[1].servicetime=15;
    restaurants[0].specialmeal[2].servicetime=20;

                                             /***************************************************************************************/

    // Second restaurant data

    strcpy(restaurants[1].name,"Food island");
    strcpy(restaurants[1].address,"Gandhi chowk");
    strcpy(restaurants[1].dayspecial,"Dosa");

    restaurants[1].dayspecial_price=100;
    restaurants[1].dayspecial_time=15;
    restaurants[1].menusize=5;
    restaurants[1].specialitemsize=3;
    // MEal
    strcpy(restaurants[1].items[0].item_name,"Panner");
    strcpy(restaurants[1].items[1].item_name,"Chola");
    strcpy(restaurants[1].items[2].item_name,"sandwitch");
    strcpy(restaurants[1].items[3].item_name,"Cheese Panner");
    strcpy(restaurants[1].items[4].item_name,"Chilly Panner");

    restaurants[1].items[0].item_price=300;
    restaurants[1].items[1].item_price=250;
    restaurants[1].items[2].item_price=50;
    restaurants[1].items[3].item_price=350;
    restaurants[1].items[4].item_price=400;

    restaurants[1].items[0].servicetime=10;
    restaurants[1].items[1].servicetime=15;
    restaurants[1].items[2].servicetime=10;
    restaurants[1].items[3].servicetime=20;
    restaurants[1].items[4].servicetime=30;
    // special item
    strcpy(restaurants[1].specialmeal[0].special_item_name,"Idle");
    strcpy(restaurants[1].specialmeal[1].special_item_name,"Pav Bhaji");
    strcpy(restaurants[1].specialmeal[2].special_item_name,"Poha");

    restaurants[1].specialmeal[0].special_item_prices=60;
    restaurants[1].specialmeal[1].special_item_prices=80;
    restaurants[1].specialmeal[2].special_item_prices=30;

    restaurants[1].specialmeal[0].servicetime=10;
    restaurants[1].specialmeal[1].servicetime=10;
    restaurants[1].specialmeal[2].servicetime=10;

                                            /***************************************************************************************/

    // Third Restaurant
    strcpy(restaurants[2].name,"Chat Center");
    strcpy(restaurants[2].address,"Ramdaspeth");
    strcpy(restaurants[2].dayspecial,"Bhindi Masala");

    restaurants[2].dayspecial_price=100;
    restaurants[2].dayspecial_time=20;
    restaurants[2].menusize=5;
    restaurants[2].specialitemsize=4;
    // MEal
    strcpy(restaurants[2].items[0].item_name,"Mix Veg");
    strcpy(restaurants[2].items[1].item_name,"Paneer");
    strcpy(restaurants[2].items[2].item_name,"Chicken Masala");
    strcpy(restaurants[2].items[3].item_name,"Dal Tadka");
    strcpy(restaurants[2].items[4].item_name,"Rice");

    restaurants[2].items[0].item_price=150;
    restaurants[2].items[1].item_price=250;
    restaurants[2].items[2].item_price=300;
    restaurants[2].items[3].item_price=250;
    restaurants[2].items[4].item_price=100;

    restaurants[2].items[0].servicetime=20;
    restaurants[2].items[1].servicetime=20;
    restaurants[2].items[2].servicetime=30;
    restaurants[2].items[3].servicetime=10;
    restaurants[2].items[4].servicetime=20;
    // special item
    strcpy(restaurants[2].specialmeal[0].special_item_name,"Delhi Grill");
    strcpy(restaurants[2].specialmeal[1].special_item_name,"Pav Bhaji");
    strcpy(restaurants[2].specialmeal[2].special_item_name,"chicken roll");
    strcpy(restaurants[2].specialmeal[3].special_item_name,"Panner roll");

    restaurants[2].specialmeal[0].special_item_prices=100;
    restaurants[2].specialmeal[1].special_item_prices=90;
    restaurants[2].specialmeal[2].special_item_prices=100;
    restaurants[2].specialmeal[3].special_item_prices=120;

    restaurants[2].specialmeal[0].servicetime=20;
    restaurants[2].specialmeal[1].servicetime=15;
    restaurants[2].specialmeal[2].servicetime=15;
    restaurants[2].specialmeal[3].servicetime=20;

                               /***************************************************************/
    printf("hello");

    









    return 0;
}