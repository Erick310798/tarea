#ifndef RUSA_H_INCLUDED
#define RUSA_H_INCLUDED

class Rusa{

private:
    int num1;
    int num2;
    int result;
    void procesar(){
     int a,b;
        a = this->num1;
        b = this->num2;
        while (a > 0){
            if (a%2!=0){
                this -> result += b;
            }
            a = a  /2;
            b = b *2;
        }
    }


public:
    Rusa(int n1, int n2){
    this->num1 = n1;
    this->num2 = n2;
    this->result = 0;
    this->procesar();
    }

    int getResultado(){
     return this->result;
    }



};


#endif // RUSA_H_INCLUDED
