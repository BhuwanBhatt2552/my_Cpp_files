#include<iostream>
using namespace std;

void tprintf(const char* format){
    cout<<format<<endl;
}

template<typename T, typename... Targs>
void tprintf(const char* format, T value, Targs... Fargs){
    for(; *format != '\0'; format++){
        if(*format == '%'){
            cout<<value;
            tprintf(format+1, Fargs...);
            return;
        }
    cout<<*format;    
    }
}

int main(){
    tprintf("% Programming % %","C++","!","123");
    return 0;
}