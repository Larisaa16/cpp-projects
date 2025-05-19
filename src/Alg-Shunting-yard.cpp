#include <iostream>
#include <stack>
#include <string.h>
#include <string>

char s0[20],s[20],fp[20],stiva[20];
int varf,n,i;

int Pri(char c){
    switch(c) {
        case'*':
            case'/': return 2;
        case'+':
            case'-': return 1;
        case '(':
            case ')': return 0;
    }
    return -1;
}

int main(){
  std::cout<<"Introduceti expresia aritmetica: "; std::cin>>s0;
    for (int i=0;i<strlen(s0);i++) {
        if ((!isdigit(s0[i])) && (!isalpha (s0[i]))) {
            if (strchr("()+=*/",s0[i]==NULL)) {
                std::cout<<"Eroare";exit(1);
            }
        }
    }

    strcpy(s,"("); strcat(s,s0); strcat(s,")");
    for (int i=0;i<strlen(s);i++) {
        switch (s[i]) {
            case'(':stiva[++varf]='('; break;
            case')':while (stiva[varf]!='(') {
                fp[++n]=stiva[varf--];
            } varf--; break;
            case "+":
            case'-':
            case'*':
            case'/': if (Pri(stiva[varf])>=Pri(s[i])) {
                while (Pri(stiva[varf])>=Pri(s[i])) {
                    fp[++n]=stiva[varf];
                    varf--;
                }
                stiva[++varf]=s[i];break;
                default:fp[++n]=s[i];
            }
        }
        std::cout<<std::endl<<"Forma poloneza este: ";
        for (i=1;i<=n;i++) std::cout<<fp[i];
        return 0;
    }
}