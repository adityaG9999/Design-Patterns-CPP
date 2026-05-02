#include<iostream>
using namespace std;
// Abstract base class representing a prototype for products
class Productprototype{
    public:
    virtual Productprototype*clone()=0 ; 
    virtual void display()=0  ; 

    virtual ~Productprototype()=default;
};
// Concrete prototype class representing a product
class Product : public Productprototype{
    private : 
    string name ; 
    double price ; 

    public: 
    Product(const string& name, double price )
        :name(name), price(price){}
    
    Productprototype*clone(){
        return new Product(*this);// Copy constructor used for cloning
    }

    void display(){
        cout << "Name :"<<name <<endl ;
        cout <<"Price :"<<price<< endl ;
    }
};
int main()
{ //Create products 
    Productprototype*Product1 = new Product("apple",5);
    Productprototype*Product2= new Product("banana",2);
//Create Cloneproducts
    Productprototype*newproduct1= Product1->clone();
    Productprototype*newproduct2=Product2->clone();
//display
    cout << "Product 1 : "<<endl ;
    Product1->display();
    cout<<"Product 2 :"<<endl ;
    Product2->display();
    cout<<"Clone product 1 "<<endl ;
    newproduct1->display();
    cout<<"Clone product 2 "<<endl ;
    newproduct2->display();

    delete Product1;
    delete Product2;
    delete newproduct1;
    delete newproduct2;
return 0;
}
