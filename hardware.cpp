
/*Create a class called Invoice to represent an item sold at a hardware store. The class includes four data members: partNumber, partDescription (both strings), quantity (int), and price_per_item (double). The class has a constructor to initialize these variables and provides getter and setter methods for each. It also includes a getInvoiceAmount() method to calculate the invoice total by multiplying the quantity by the price per item, setting quantity to 0 if it's not positive, and price to 0.0 if it's negative. A test class, InvoiceTest, demonstrates the functionality of the Invoice class.*/

#include <iostream>
using namespace std;

class Invoice{

string partNumber;
string partDescription;
int quantity;
double price_per_item;

public:
//constructor 
Invoice(string partNumber,string partDescription , int quantity , double price_per_items){
    this->partNumber = partNumber;
    this->partDescription = partDescription;
    this->quantity = quantity;
    this->price_per_item = price_per_item;
}

// Setter


void setPartNumber(string partNumber){
this->partNumber = partNumber;
}
void setDescription(string partDescription){
this->partDescription = partDescription;
}
void setQuantity(int quantity){
    if(quantity < 0) this->quantity = 0;
    else this->quantity = quantity;

}
void setPricePerItem(int price_per_item){
    if(price_per_item < 0) this->price_per_item = 0;
    else this->price_per_item = price_per_item;

}

// Getter

string getPartNumber(){
return partNumber;
}
string getDescription(){
return partDescription;
}
int getQuantity(){
return quantity;
}
double getPricePerItem(){
return price_per_item;
}


// Calculation Function

double getInvoiceAmount(){
    return price_per_item*quantity;
}


};


int main(){
string number,description;
int quant;
double pricePeritem;

cout<<"Enter the PartNumber : ";
cin>>number;

cout<<"Enter the PartDescription : ";
cin>>description;

cout<<"Enter the Quantity : ";
cin>>quant;

cout<<"Enter the pricePeritem : ";
cin>>pricePeritem;

Invoice d1(" "," ",0,0.0);

d1.setPartNumber(number);
d1.setDescription(description);
d1.setQuantity(quant);
d1.setPricePerItem(pricePeritem);

cout<<endl;

cout<<"PartNumber: "<<d1.getPartNumber()<<endl;
cout<<"Description: "<<d1.getDescription()<<endl;
cout<<"quantity: "<<d1.getQuantity()<<endl;
cout<<"PricePeritem: "<<d1.getPricePerItem()<<endl;
cout<<"Final Amount : "<<d1.getInvoiceAmount()<<endl;




}