#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <string>
//using namespace std;
class String{
    protected :
        char value[4096]="";
    public :
        String(const char *obj){
            strcpy(value,obj);
        };
        String(String *obj){
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            
            strcpy(value,obj); 
            
            
        };

        
        
    

        String operator=(String& obj){
            String ress("");
            strcpy(value,obj.value); 
            return ress;
            
        };
        String operator+(const char *obj){
            String ress(value);
            strcat(ress.value,obj); 
            return ress;
            
        };

        
        
    

        String operator+(String *obj){
            String ress(value);
            strcat(ress.value,obj->value); 
            return ress;

            
        };

        char *ToString(){
            return value;
        }; 
};

class Consoles{
    protected :
        char c[4096];
    public : 
        void WriteLine(const char *c){
            printf(c);
        };
        void WriteLine(String c){
            printf(c.ToString());
        };

};
Consoles Console;