#include <stdio.h>
#include <stdlib.h>
#include <string.h>
class String{
    protected :
        
    public :
        char value[4096]="";
        String(const char *obj){
            strcpy(value,obj);
        };
        String(String *obj){
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            
            strcpy(value,obj); 
            
            
        };

        String operator=(String *obj){
            String ress("");
            strcpy(ress.value,obj->value); 
            return ress;
            
        };
         
        String operator+(String& obj){
            String ress(value);
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+(const char *obj){
            String ress(value);
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        String operator+=(String& obj){
            String ress(value);
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+=(const char *obj){
            String ress(value);
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;

        }; 
};

class string{
    protected :
        char value[4096]="";
    public :
        string(const char *obj){
            strcpy(value,obj);
        };
        string(string *obj){
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            
            strcpy(value,obj); 
            
            
        };

        string operator=(string *obj){
            string ress("");
            strcpy(ress.value,obj->value); 
            return ress;
            
        };
         
        string operator+(string& obj){
            string ress(value);
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+(const char *obj){
            string ress(value);
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        string operator+=(string& obj){
            string ress(value);
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+=(const char *obj){
            string ress(value);
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;
        }; 
};
class Integer{
    protected :
        
     public :
        int value=0;
        Integer(int v){
            value=v;
        };
        Integer(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Integer(char *v){
            value=atoi(v);
        };
        Integer operator=(int& obj){
            Integer ii(value);
            return ii;
            
            
        };
        Integer operator=(Integer& obj){
            Integer ii(obj.value);
            ii.value=obj.value;
            return ii;
            
            
        };


        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};
class Consoles{
    protected :
        char c[4096];
    public : 
        void WriteLine(const char *c){
            puts(c);
        };
        void WriteLine(String c){
            puts(c.ToString());
        };
        void WriteLine(string c){
            puts(c.ToString());
        };
        void WriteLine(Integer c){
            puts(c.ToString());
        };




};
Consoles Console;