#include<stdio.h>
#include<string.h>

# define no_of_restaurants 10
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
struct food_ordered
{
    char food_item_ordered[50];
    int quantity_ordered;

};


struct userdetails{
    int order_time; 
    char username[50];
    char phone_number[10];
    char useraddress[100];
    int delivery_time;
    struct  food_ordered order[10];
};

void add_user(struct userdetails user[],int *count){
    printf("Enter the username : ");
    gets(user[*count].username);
    printf("Enter the user address : ");
    gets(user[*count].useraddress);
    printf("Enter the user phone number : ");
    gets(user[*count].phone_number);
    printf("User Registered Successfully.\n");
    *count=*count+1;

}

int main(){

    struct  Restaurants restaurants[no_of_restaurants];
    struct userdetails user[100];

    {// First Restaurant data
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
    // Fourth Restaurant

    strcpy(restaurants[3].name,"Food island");
    strcpy(restaurants[3].address,"Wardha Road");
    strcpy(restaurants[3].dayspecial,"Chocolate Sauce");

    restaurants[3].dayspecial_price=150;
    restaurants[3].dayspecial_time=20;
    restaurants[3].menusize=6;
    restaurants[3].specialitemsize=5;
    // MEal
    strcpy(restaurants[3].items[0].item_name,"Panner");
    strcpy(restaurants[3].items[1].item_name,"Chicken Curry");
    strcpy(restaurants[3].items[2].item_name,"Laccha Paratha");
    strcpy(restaurants[3].items[3].item_name,"Vegetable Biryani");
    strcpy(restaurants[3].items[4].item_name,"Manchurian");
    strcpy(restaurants[3].items[5].item_name,"Chocolate Shake");

    restaurants[3].items[0].item_price=350;
    restaurants[3].items[1].item_price=300;
    restaurants[3].items[2].item_price=50;
    restaurants[3].items[3].item_price=130;
    restaurants[3].items[4].item_price=100;
    restaurants[3].items[5].item_price=90;

    restaurants[3].items[0].servicetime=30;
    restaurants[3].items[1].servicetime=30;
    restaurants[3].items[2].servicetime=20;
    restaurants[3].items[3].servicetime=20;
    restaurants[3].items[4].servicetime=20;
    restaurants[3].items[5].servicetime=30;

    // special item
    strcpy(restaurants[3].specialmeal[0].special_item_name,"Pizza");
    strcpy(restaurants[3].specialmeal[1].special_item_name,"Chicken popcorn");
    strcpy(restaurants[3].specialmeal[2].special_item_name,"Chicken Roll");
    strcpy(restaurants[3].specialmeal[3].special_item_name,"Panner Roll");
    strcpy(restaurants[3].specialmeal[4].special_item_name,"French Fries");

    restaurants[3].specialmeal[0].special_item_prices=200;
    restaurants[3].specialmeal[1].special_item_prices=180;
    restaurants[3].specialmeal[2].special_item_prices=100;
    restaurants[3].specialmeal[3].special_item_prices=120;
    restaurants[3].specialmeal[4].special_item_prices=80;

    restaurants[3].specialmeal[0].servicetime=20;
    restaurants[3].specialmeal[1].servicetime=15;
    restaurants[3].specialmeal[2].servicetime=15;
    restaurants[3].specialmeal[3].servicetime=20;
    restaurants[3].specialmeal[4].servicetime=10;

                                           /**********************************************************************/

    // Fifth Restaurant
    strcpy(restaurants[4].name,"Grill Inn");
    strcpy(restaurants[4].address,"Dharampeth");
    strcpy(restaurants[4].dayspecial,"White Saus Pasta");

    restaurants[4].dayspecial_price=170;
    restaurants[4].dayspecial_time=20;
    restaurants[4].menusize=6;
    restaurants[4].specialitemsize=5;
    // MEal
    strcpy(restaurants[4].items[0].item_name,"Veg Grilled Sandwich");
    strcpy(restaurants[4].items[1].item_name,"Pizza");
    strcpy(restaurants[4].items[2].item_name,"Chicken hot burger");
    strcpy(restaurants[4].items[3].item_name,"Creamy White Pasta");
    strcpy(restaurants[4].items[4].item_name,"Crispy panner Wrap");
    strcpy(restaurants[4].items[5].item_name,"Crispy Chicken Wrap");

    restaurants[4].items[0].item_price=110;
    restaurants[4].items[1].item_price=150;
    restaurants[4].items[2].item_price=200;
    restaurants[4].items[3].item_price=180;
    restaurants[4].items[4].item_price=100;
    restaurants[4].items[5].item_price=120;

    restaurants[4].items[0].servicetime=30;
    restaurants[4].items[1].servicetime=20;
    restaurants[4].items[2].servicetime=30;
    restaurants[4].items[3].servicetime=20;
    restaurants[4].items[4].servicetime=15;
    restaurants[4].items[5].servicetime=30;

    // special item
    strcpy(restaurants[4].specialmeal[0].special_item_name,"Panner Biryani");
    strcpy(restaurants[4].specialmeal[1].special_item_name,"Chicken Biryani");
    strcpy(restaurants[4].specialmeal[2].special_item_name,"Panner Masala");
    strcpy(restaurants[4].specialmeal[3].special_item_name,"Mushroom Masala");
    strcpy(restaurants[4].specialmeal[4].special_item_name,"Kichdi");

    restaurants[4].specialmeal[0].special_item_prices=180;
    restaurants[4].specialmeal[1].special_item_prices=200;
    restaurants[4].specialmeal[2].special_item_prices=150;
    restaurants[4].specialmeal[3].special_item_prices=150;
    restaurants[4].specialmeal[4].special_item_prices=100;

    restaurants[4].specialmeal[0].servicetime=20;
    restaurants[4].specialmeal[1].servicetime=30;
    restaurants[4].specialmeal[2].servicetime=20;
    restaurants[4].specialmeal[3].servicetime=20;
    restaurants[4].specialmeal[4].servicetime=30;}
                                                                        /*********************************************************/
        // sixth Restaurant
    strcpy(restaurants[5].name,"food fusion");
    strcpy(restaurants[5].address,"bajaj nagar");
    strcpy(restaurants[5].dayspecial,"chicken burger");

    restaurants[5].dayspecial_price=150;
    restaurants[5].dayspecial_time=20;
    restaurants[5].menusize=6;
    restaurants[5].specialitemsize=3;
    // MEal
    strcpy(restaurants[5].items[0].item_name,"masala maggi");
    strcpy(restaurants[5].items[1].item_name,"veg burger");
    strcpy(restaurants[5].items[2].item_name,"Chicken nuggets");
    strcpy(restaurants[5].items[3].item_name,"veg roll");
    strcpy(restaurants[5].items[4].item_name,"plain maggi");
    strcpy(restaurants[5].items[5].item_name,"veg nuggets");

    restaurants[5].items[0].item_price=100;
    restaurants[5].items[1].item_price=200;
    restaurants[5].items[2].item_price=250;
    restaurants[5].items[3].item_price=100;
    restaurants[5].items[4].item_price=50;
    restaurants[5].items[5].item_price=200;

    restaurants[5].items[0].servicetime=20;
    restaurants[5].items[1].servicetime=30;
    restaurants[5].items[2].servicetime=20;
    restaurants[5].items[3].servicetime=15;
    restaurants[5].items[4].servicetime=10;
    restaurants[5].items[5].servicetime=20;
    // special item
    strcpy(restaurants[5].specialmeal[0].special_item_name,"peri peri maggi");
    strcpy(restaurants[5].specialmeal[1].special_item_name,"cheese maggi");
    strcpy(restaurants[5].specialmeal[2].special_item_name,"chicken roll");


    restaurants[5].specialmeal[0].special_item_prices=100;
    restaurants[5].specialmeal[1].special_item_prices=90;
    restaurants[5].specialmeal[2].special_item_prices=100;
    

    restaurants[5].specialmeal[0].servicetime=20;
    restaurants[5].specialmeal[1].servicetime=15;
    restaurants[5].specialmeal[2].servicetime=15;
    

                               /***************************************************************/
    // seventh Restaurant
    strcpy(restaurants[6].name,"Haldiram");
    strcpy(restaurants[6].address,"dharampeth");
    strcpy(restaurants[6].dayspecial,"masala dosa");

    restaurants[6].dayspecial_price=150;
    restaurants[6].dayspecial_time=20;
    restaurants[6].menusize=6;
    restaurants[6].specialitemsize=2;
    // MEal
    strcpy(restaurants[6].items[0].item_name,"paneer butter masala");
    strcpy(restaurants[6].items[1].item_name,"shahi paneer");
    strcpy(restaurants[6].items[2].item_name,"aloo mutter");
    strcpy(restaurants[6].items[3].item_name,"dal makhani");
    strcpy(restaurants[6].items[4].item_name,"garlic naan");
    strcpy(restaurants[6].items[5].item_name,"moong daal");

    restaurants[6].items[0].item_price=200;
    restaurants[6].items[1].item_price=200;
    restaurants[6].items[2].item_price=150;
    restaurants[6].items[3].item_price=200;
    restaurants[6].items[4].item_price=50;
    restaurants[6].items[5].item_price=100;

    restaurants[6].items[0].servicetime=20;
    restaurants[6].items[1].servicetime=30;
    restaurants[6].items[2].servicetime=20;
    restaurants[6].items[3].servicetime=15;
    restaurants[6].items[4].servicetime=10;
    restaurants[6].items[5].servicetime=20;
    // special item
    strcpy(restaurants[6].specialmeal[0].special_item_name,"kheer");
    strcpy(restaurants[6].specialmeal[1].special_item_name,"raita");
    


    restaurants[6].specialmeal[0].special_item_prices=100;
    restaurants[6].specialmeal[1].special_item_prices=90;
    
    

    restaurants[6].specialmeal[0].servicetime=20;
    restaurants[6].specialmeal[1].servicetime=15;
    
    

                               /***************************************************************/
     // eighth Restaurant
    strcpy(restaurants[7].name,"Haldiram");
    strcpy(restaurants[7].address,"sitabuldi");
    strcpy(restaurants[7].dayspecial,"masala dosa");

    restaurants[7].dayspecial_price=150;
    restaurants[7].dayspecial_time=20;
    restaurants[7].menusize=6;
    restaurants[7].specialitemsize=2;
    // MEal
    strcpy(restaurants[7].items[0].item_name,"paneer butter masala");
    strcpy(restaurants[7].items[1].item_name,"shahi paneer");
    strcpy(restaurants[7].items[2].item_name,"aloo mutter");
    strcpy(restaurants[7].items[3].item_name,"dal makhani");
    strcpy(restaurants[7].items[4].item_name,"garlic naan");
    strcpy(restaurants[7].items[5].item_name,"moong daal");

    restaurants[7].items[0].item_price=200;
    restaurants[7].items[1].item_price=200;
    restaurants[7].items[2].item_price=150;
    restaurants[7].items[3].item_price=200;
    restaurants[7].items[4].item_price=50;
    restaurants[7].items[5].item_price=100;

    restaurants[7].items[0].servicetime=15;
    restaurants[7].items[1].servicetime=20;
    restaurants[7].items[2].servicetime=20;
    restaurants[7].items[3].servicetime=15;
    restaurants[7].items[4].servicetime=10;
    restaurants[7].items[5].servicetime=20;
    // special item
    strcpy(restaurants[7].specialmeal[0].special_item_name,"kheer");
    strcpy(restaurants[7].specialmeal[1].special_item_name,"raita");
    
    restaurants[7].specialmeal[0].special_item_prices=100;
    restaurants[7].specialmeal[1].special_item_prices=90;

    restaurants[7].specialmeal[0].servicetime=20;
    restaurants[7].specialmeal[1].servicetime=20;
    
                                  /***************************************************************/
    
    // ninth restaurant data

    strcpy(restaurants[8].name,"navratna sagar");
    strcpy(restaurants[8].address,"pratap nagar");
    strcpy(restaurants[8].dayspecial,"daal bhatti");
    restaurants[8].dayspecial_price=100;
    restaurants[8].dayspecial_time=15;
    restaurants[8].menusize=5;
    restaurants[8].specialitemsize=3;
    // MEal
    strcpy(restaurants[8].items[0].item_name,"Paneer");
    strcpy(restaurants[8].items[1].item_name,"Chola");
    strcpy(restaurants[8].items[2].item_name,"aloo mutter");
    strcpy(restaurants[8].items[3].item_name,"papad");
    strcpy(restaurants[8].items[4].item_name,"roti");

    restaurants[8].items[0].item_price=300;
    restaurants[8].items[1].item_price=250;
    restaurants[8].items[2].item_price=200;
    restaurants[8].items[3].item_price=50;
    restaurants[8].items[4].item_price=100;

    restaurants[8].items[0].servicetime=10;
    restaurants[8].items[1].servicetime=15;
    restaurants[8].items[2].servicetime=10;
    restaurants[8].items[3].servicetime=5;
    restaurants[8].items[4].servicetime=5;
    // special item
    strcpy(restaurants[8].specialmeal[0].special_item_name,"kachori");
    strcpy(restaurants[8].specialmeal[1].special_item_name,"samosa");
    strcpy(restaurants[8].specialmeal[2].special_item_name,"pulao rice");

    restaurants[8].specialmeal[0].special_item_prices=60;
    restaurants[8].specialmeal[1].special_item_prices=80;
    restaurants[8].specialmeal[2].special_item_prices=100;

    restaurants[8].specialmeal[0].servicetime=10;
    restaurants[8].specialmeal[1].servicetime=10;
    restaurants[8].specialmeal[2].servicetime=15;

                                            /***************************************************************************************/

    // tenth restaurant data

    strcpy(restaurants[9].name,"lush house");
    strcpy(restaurants[9].address,"bajaj nagar");
    strcpy(restaurants[9].dayspecial,"pizza");

    restaurants[9].dayspecial_price=300;
    restaurants[9].dayspecial_time=15;
    restaurants[9].menusize=5;
    restaurants[9].specialitemsize=3;
    // MEal
    strcpy(restaurants[9].items[0].item_name,"Pasta");
    strcpy(restaurants[9].items[1].item_name,"burger");
    strcpy(restaurants[9].items[2].item_name,"sandwitch");
    strcpy(restaurants[9].items[3].item_name,"Cheese burger");
    strcpy(restaurants[9].items[4].item_name,"arabiata");
    restaurants[9].items[0].item_price=300;
    restaurants[9].items[1].item_price=250;
    restaurants[9].items[2].item_price=150;
    restaurants[9].items[3].item_price=350;
    restaurants[9].items[4].item_price=400;

    restaurants[9].items[0].servicetime=10;
    restaurants[9].items[1].servicetime=15;
    restaurants[9].items[2].servicetime=10;
    restaurants[9].items[3].servicetime=20;
    restaurants[9].items[4].servicetime=30;
    // special item
    strcpy(restaurants[9].specialmeal[0].special_item_name,"pesto pasta");
    strcpy(restaurants[9].specialmeal[1].special_item_name,"garlic bread");
    strcpy(restaurants[9].specialmeal[2].special_item_name,"mini burger");

    restaurants[9].specialmeal[0].special_item_prices=250;
    restaurants[9].specialmeal[1].special_item_prices=150;
    restaurants[9].specialmeal[2].special_item_prices=200;

    restaurants[9].specialmeal[0].servicetime=20;
    restaurants[9].specialmeal[1].servicetime=10;
    restaurants[9].specialmeal[2].servicetime=10;

                                            /***************************************************************************************/
    printf("*****  Welcome *****\n");
    printf("First try to Login with your name,phone no and address\n");
    int usercount=0;
    add_user(user,&usercount);
    







    









    return 0;
}
