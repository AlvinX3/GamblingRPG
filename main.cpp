#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;


#define times 50

int coin=0,ticket=0,lucky=0;

int main();
void cls();
void Cgambling(int ch);
void save(int coins,int tk ,int lu);

//   _         ____     _____    ____  
//  | |       / __ \   / ____|  / __ \ 
//  | |      | |  | | | |  __  | |  | |
//  | |      | |  | | | | |_ | | |  | |
//  | |____  | |__| | | |__| | | |__| |
//  |______|  \____/   \_____|  \____/ 


class Art
{
public:

    void Logo(int io){
        switch (io)
        {
        case 1:
            cout << R"(

        )" << endl;
            break;
        case 2:
            cout << R"(

        )" << endl;
            break;
        
        default:
            break;
        }
    }

void DieLogo(){
    cout << R"(
                              .___.
          /)               ,-^     ^-.
         //               /           \
.-------| |--------------/  __     __  \-------------------.__
|WMWMWMW| |>>>>>>>>>>>>> | />>\   />>\ |>>>>>>>>>>>>>>>>>>>>>>:>
`-------| |--------------| \__/   \__/ |-------------------'^^
         \\               \    /|\    /
          \)               \   \_/   /
                            |       |
                            |+H+H+H+|
                            \       /
                             ^-----^
    )" << endl;
    cout << R"(
 __     __   ____    _    _     _____    ______              _____  
 \ \   / /  / __ \  | |  | |   |  __ \  |  ____|     /\     |  __ \ 
  \ \_/ /  | |  | | | |  | |   | |  | | | |__       /  \    | |  | |
   \   /   | |  | | | |  | |   | |  | | |  __|     / /\ \   | |  | |
    | |    | |__| | | |__| |   | |__| | | |____   / ____ \  | |__| |
    |_|     \____/   \____/    |_____/  |______| /_/    \_\ |_____/    

)" << endl;
}

void WolfLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
            *
         |\/ \/|
       |\|__O__|/|
       {   '"'   }
       \ 、 Y ˊ /
        {_     _}
         |\ o / \             
         |-       ''--_______--'''-_     
         \ - ~  ~      ~   ~        -
          | ~ '  ~ ''    '  -/     ---
           \   -  '   /  - /  "" /----
            \ - \   / ~ ~_-| ""  | ----
             \  -\  |-''    \ " | \ ----
             / / | /        \  \   \ ---
             / / | |        / /   _/ / --
           _/ /_/ /       _/ /    vv/
           vv/ vv/        vv/
    )" << endl;
        break;
    case 2:
        cout << R"(
         )      (\_
        ((    _/{  "-;
         )).-' {{ ;'`
         ( (  ;._ \\
    )" << endl;
        break;
    
    default:
        break;
    }
}

void GhostLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
            _______
         ---       ---
       /=             =\
      |                 |
      |    []    []     |
      |                 |
      |     \/\/\/      |
      |                 |
      |                 |
      \   |\   |\   |\  \
       \__\ \__\ \__\ \__\
    )" << endl;
        break;
    case 2:
        cout << R"(
            _______
         ---       ---
       /=             =\
      |                 |
      |    x    x       |
      |                 |
      |    ------       |
      |                 |
      |                 |
      \   |\   |\   |\  \
       \__\ \__\ \__\ \__\
    )" << endl;
        break;
    
    default:
        break;
    }
}

void GoblinLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
             ________
        /|  /   ==   \  /|
       / |\/  \    /  \/ |
       \ | \ []    [] / |
       | |\-\   \/   /-/
       \ |   \  JU  /
       | |   _\____/_
       \ |  /        \  _____
       | | /  _ || _  \/  _  \
      =====  /      \  | { } |
       []  _//__*___\--\_____/ 
             [______]
            /        \
           /____/\____\
             ||    ||
             ||    ||
    )" << endl;
        break;
    case 2:
        cout << R"(
             ________
        |\  /   ==   \  /|
        | \/  \    /  \/ |
         | \  x    x  / |
          \-\        /-/
             \      /
             _\____/_

    )" << endl;
        break;
    
    default:
        break;
    }
}

void ElfLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(

                       *
                    |\/ \/|
                    |__O__|                   
                  / /__\ \ \                 
\\\\\\           / /[ ] ] }\ \           //////
\\****\\\    ____||  _   _  ||____ ^  ///****//    
 \\******\\\ '---||         ||---< 0 >******//    
   \\*******\\\  | |   ^   | |  ///v******//       
     \\********\/ /|\_____/|\ \/***|****//      
      \\********| ||__|  |_|| |****|***//    
        \\*****/   \\ \--/ //  \***|*//   
          \\**/     \\____//    \*[ ]
            |/ \__/          \__/\/|/
            / /****| 。  。 |***\/ /
            \ \****|        |***\_/\
           //\ \**/|        |\*****\\
         //***[ ]/|          |\\\****\\
        //**///  |            |  \\\**\\
      //***//   /_--__--__--__-\   \\***\\
      ////         | |    | |         \\\\
                   | |    | |
                  | |    | |

    )" << endl;
        break;
    case 2:
        cout << R"(

                       *
                    |\/ \/|
                    |__O__|                   
                  / /__\ \ \                 
                 / /[ ] ] }\ \   
             ____||  X   X  ||____   
             '---||         ||---'   
                 | |   -   | |    
                / /|\_____/|\ \     
                | ||       || |   

    )" << endl;
        break;
    
    default:
        break;
    }
}

void SlimeLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
                         
                       /\  
                    _-"  "-_
               _--""        ""--_
             -"                  "-
            /     ___      ___     \
           /     "_+_"    "_+_"     \
           |         ______         |
           \         \____/         /
            ""----____    ____----""
                      """"

    )" << endl;
        break;
    case 2:
        cout << R"(
                         
                       /\  
                    _-"  "-_
               _--""        ""--_
             -"                  "-
            /                      \
           /       x         x      \
           |         ______         |
           \                        /
            ""----____    ____----""
                      """"

    )" << endl;
        break;
    
    default:
        break;
    }
}

void MushroomLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
                      _______
                 _-"""@@@@@@@"""=_
                /@@@@( )@@@@@@@( ) \
               /)@@@@@@@@@@@@@@@@@@"
              /@@@@@@@@( )@@@@@@@@@@@"
            /"@@( )@@____@@@@@( )@@@@""-
            \( )/ -""    """---___--( )@@\
             "-@\_   (O)     (O)      \ @@|
               \@/                    |@@/  
                /  @     UU     @     \ 
               |                       \
               \                       / 
                "-_                 _-"
                   ""--__      __--"
                         """""" 
    )" << endl;
        break;
    case 2:
        cout << R"(
                      _______
                 _-"""@@@@@@@"""=_
                /@@@@( )@@@@@@@( ) \
               /)@@@@@@@@@@@@@@@@@@"
              /@@@@@@@@( )@@@@@@@@@@@"
            /"@@( )@@____@@@@@( )@@@@""-
            \( )/ -""    """---___--( )@@\
             "-@\_    x      x      \ @@|
               \@/                    |@@/  
                /        ----         \ 
               |                       \
               \                       / 
                "-_                 _-"
                   ""--__      __--"
                         """""" 
    )" << endl;
        break;
    
    default:
        break;
    }
}

void YetiLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
                   _--"--__--""--^
               _--"   <      J    "--_
              "--_    __      _      _--"
                -"  -"  \  -"|/"-  -"
            __-"   /  。 |/  。  \  "-__ 
           "-_     |  _________  |    _-"
              /    \  V       V  /    \
             <  /(   "- ______ -"   Y  >
           -"        u                 "-
       __-<    <  \       |       "      "-__ 
       )     v  -" ) /\   /  -=""/--        (_
      "   |)   /   /"  \ Y  -"    /  \   <    "
     -"\     -"     V    \ {    V   ) "-       /"-      
    /] /]|-"\ | \| |   - " \    \    | | /"-|[\ [\ 
      /] |]  [|     \ /  )  V  (     / |]  [| [\
      "  \]    "-_   "-       (    -"      [/  " 
                / ""--___)_v___--""\      
              ( )( )( )      ( )( )( )
    )" << endl;
        break;
    case 2:
        cout << R"(
                   _--"--__--""--^
               _--"   <      J    "--_
              "--_    __      _      _--"
                -"  -"  \  -"|/"-  -"
            __-"   /  x |/  x  \  "-__ 
           "-_     |   ______   |    _-"
              /    \             /    \
             <  /(   "- ______ -"   Y  >
           -"        u                 "-
       __-<    <  \       |       "      "-__ 
       )     v  -" ) /\   /  -=""/--        (_
      "   |)   /   /"  \ Y  -"    /  \   <    "
     -"\     -"     V    \ {    V   ) "-       /"-      
    /] /]|-"\ | \| |   - " \    \    | | /"-|[\ [\ 
      /] |]  [|     \ /  )  V  (     / |]  [| [\
      "  \]    "-_   "-       (    -"      [/  " 
                / ""--___)_v___--""\      
              ( )( )( )      ( )( )( )
    )" << endl;
        break;
    
    default:
        break;
    }
}

void BoneLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
|f-"Y\|
\()7L/
 cgD                            __ _
 |\(                          .'  Y '>,
  \ \                        / _   _   \
   \\\                       )(_) (_)(|}
    \\\                      {  4A   } /
     \\\                      \uLuJJ/\l
      \\\                     |3    p)/
       \\\___ __________      /nnm_n//
       c7___-__,__-)\,__)(".  \_>-<_/D
                  //V     \_"-._.__G G_c__.-__<"/ ( \
                         <"-._>__-,G_.___)\   \7\
                        ("-.__.| \"<.__.-" )   \ \
                        |"-.__"\  |"-.__.-".\   \ \
                        ("-.__"". \"-.__.-".|    \_\
                        \"-.__""|!|"-.__.-".)     \ \
                         "-.__""\_|"-.__.-"./      \ l
                          ".__""">G>-.__.-">       .--,_
                              ""  G
    )" << endl;
        break;
    case 2:
        cout << R"(
                           ,--.
                          {    }
                          K,   }
                         /  `Y`
                    _   /   /
                   {_'-K.__/
                     `/-.__L._
                     /  ' /`\_}
                    /  ' /     
            ____   /  ' /
     ,-'~~~~    ~~/  ' /_
   ,'             ``~~~%%',
  (                     %  Y
 {                      %% I
{      -                 %  `.
|       ',                %  )
|        |   ,..__      __. Y
|    .,_./  Y ' / ^Y   J   )|
\           |' /   |   |   ||
 \          L_/    . _ (_,.'(
  \,   ,      ^^""' / |      )
    \_  \          /,L]     /
      '-_`-,       ` `   ./`
         `-(_            )
             ^^\..___,.--`
    )" << endl;
        break;
    
    default:
        break;
    }
}

void VampireLogo(int io){
    switch (io)
    {
    case 1:
        cout << R"(
              __.......__
            .-:::::::::::::-.
          .:::''':::::::''':::.
        .:::'     `:::'     `:::. 
   .'\  ::'   ^^^  `:'  ^^^   '::  /`.
  :   \ ::   _.__       __._   :: /   ;
 :     \`: .' ___\     /___ `. :'/     ; 
:       /\   (_|_)\   /(_|_)   /\       ;
:      / .\   __.' ) ( `.__   /. \      ;
:      \ (        {   }        ) /      ; 
 :      `-(     .  ^"^  .     )-'      ;
  `.       \  .'<`-._.-'>'.  /       .'
    `.      \    \;`.';/    /      .'
      `._    `-._       _.-'    _.'
       .'`-.__ .'`-._.-'`. __.-'`.
     .'       `.         .'       `.
   .'           `-.   .-'           `.
    )" << endl;
        break;
    case 2:
        cout << R"(
    =/\                 /\=
    / \'._   (\_/)   _.'/ \
   / .''._'--(x.x)--'_.''. \
  /.' _/ |`'=/ " \='`| \_ `.\
 /` .' `\;-,'\___/',-;/` '. '\
/.-'       `\(-V-)/`       `-.\
`            "   "            `
    )" << endl;
        break;
    
    default:
        break;
    }
}

    void ShowDice(int DiceFace){

        switch (DiceFace)
        {
        case 1:{
            cout << "┌─────────┐ \n";  
            cout << "│         │ \n";  
            cout << "│    ●    │ \n";  
            cout << "│         │ \n";  
            cout << "└─────────┘ \n";  
            break;
        }
        case 2:{
            cout << "┌─────────┐ \n";  
            cout << "│  ●      │ \n";  
            cout << "│         │ \n";  
            cout << "│      ●  │ \n";  
            cout << "└─────────┘ \n";  
            break;        
        }
        case 3:{
            cout << "┌─────────┐ \n";  
            cout << "│  ●      │ \n";  
            cout << "│    ●    │ \n";  
            cout << "│      ●  │ \n";  
            cout << "└─────────┘ \n";  
            break;        
        }
        case 4:{
            cout << "┌─────────┐ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "│         │ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "└─────────┘ \n";  
            break;        
        }
        case 5:{
            cout << "┌─────────┐ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "│    ●    │ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "└─────────┘ \n";  
            break;        
        }
        case 6:{
            cout << "┌─────────┐ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "│ ●     ● │ \n";  
            cout << "└─────────┘ \n";  
            break;        
        }
        default:
            break;
        }
        cout << " \n";
    }

    void BlackJactArt(){
        cout << R"(
    ┌------┐   
    |A  ┌-------┐
    |   |J      |
    |   |       |
    |   |       |
    |   |       |
    └---|      J|
        └-------┘

    
        )" << endl;

    }
    void portal(){
        cout << R"(
             .,-:;//;:=,
         . :H@@@MM@M#H/.,+%;,
      ,/X+ +M@@M@MM%=,-%HMMM@X/,
     -+@MM; $M@@MH+-,;XMMMM@MMMM@+-
    ;@M@@M- XM@X;. -+XXXXXHHH@M@M#@/.
  ,%MM@@MH ,@%=            .---=-=:=,.
  -@#@@@MX .,              -%HX$$%%%+;
 =-./@M@M$                  .;@MMMM@MM:
 X@/ -$MM/                    .+MM@@@M$
,@M@H: :@:                    . -X#@@@@-
,@@@MMX, .                    /H- ;@M@M=
.H@@@@M@+,                    %MM+..%#$.
 /MMMM@MMH/.                  XM@MH; -;
  /%+%$XHH@$=              , .H@@@@MX,
   .=--------.           -%H.,@@@@@MX,
   .%MM@@@HHHXX$$$%+- .:$MMX -M@@MM%.
     =XMMM@MM@MM#H;,-+HMM@M+ /MMMX=
       =%@M@M#@$-.=$@MM@@@M; %M%=
         ,:+$+-,/H#MMMMMMM@- -,
               =++%%%%+/:-.

        )" << endl;
    }

    void tk(){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⢹⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⡟⠹⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⡈⠻⣿⣦⣨⣿⣿⣶⣤⣤⣴⣦⡀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣦⡈⠻⣿⣯⡈⠻⢿⣿⣿⣿⣿⠆⠀
⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣦⡈⠻⣿⣶⣿⠿⢿⠟⠁⠀⠀
⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠆⢈⣿⣿⠆⠀⠀⠀⠀⠀
⠀⠀⢀⣴⣿⣟⠁⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀
⠀⠰⣿⣿⣿⣿⣷⣦⡈⠻⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠈⠻⠟⠛⠛⠿⣿⣦⡈⠻⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣆⠈⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣷⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀

        )" << endl;

    }

    void RevolverArt(){
        cout << R"(
  (                                 _
   )                               /=>
  (  +____________________/\/\___ / /|
   .''._____________'._____      / /|/\
  : () :              :\ ----\|    \ )
   '..'______________.'0|----|      \
                    0_0/____/        \
                        |----    /----\
                       || -\\ --|      \
                       ||   || ||\      \
                        \\____// '|      \
                                .'/       |
                               .:/        |
                               :/_________|
 

        )" << endl;
    }

    void DiceArt(){
        cout << R"(
               (( _______
     _______     /\O    O\
    /O     /\   /  \      \
   /   O  /O \ / O  \O____O\ ))
((/_____O/    \\    /O     /
  \O    O\    / \  /   O  /
   \O    O\ O/   \/_____O/
    \O____O\/ ))          ))
  ((
 
        )" << endl;
    }

    void RpsArt(){
        cout << R"(
    _______                _______
---'   ____)          ____(____   '---
      (_____)        (______
      (_____)       (__________
      (____)              (____)
---.__(___)                (___)__.---

        )" << endl;
    } 

    void BJArt(){
        cout << R"(
                            _____ 
                    _____  |K  WW|
            _____  |Q  ww| | /\{)|
     _____ |J  ww| | /\{(| | \/%%| _____
    |10 o || /\{)| | \/%%| |  %%%||A ^  |
    |o o o|| \/% | |  %%%| |_%%%>|| / \ |
    |o o o||   % | |_%%%O|        | \ / |
    |o o o||__%%[|                |  .  |
    |___0I|                       |____V|
        )" << endl;
    }

    void cash(){
        cout << R"(
                                                                                            
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣀⣀⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⡀⢀⣀⣤⣥⡴⣶⡶⣶⣶⣽⣿⣿⡟⠃⠄⢀⣄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣴⣼⣿⣿⣿⣿⣗⢿⠻⣿⣻⣿⣿⣿⣿⣿⠄⠄⠄⣸⣿⣿⡷⡆⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣠⠄⠄⠉⢻⣿⡿⣿⣿⣾⣿⣗⣾⣯⣿⣿⣿⣿⣿⣿⣶⣾⣿⣿⣿⣿⣿⣶⣄⢀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢠⣼⣿⣄⡀⢀⣬⣿⣿⣿⣿⣿⠿⠟⠚⠛⠛⠛⠛⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⣿⣻⣿⣿⣟⢿⣽⡿⠟⢉⠄⠄⠄⣀⠄⡀⠄⢀⡀⠄⠄⠄⠉⠻⢿⣿⣿⣿⣿⣿⣿⡿⣧⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⢬⣼⣿⣿⣿⣿⣿⡿⠋⠄⠄⢠⠠⠰⠣⠈⠂⠓⠃⠘⠄⠢⢀⣦⢀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣏⣽⡄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿⠟⠄⠄⠐⢼⠒⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠑⠥⡠⢄⠄⠄⢻⣿⣿⣿⣿⣿⣿⣿⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣻⣿⣿⣿⣶⣽⡟⠄⠄⠄⠄⡀⠄⠄⢀⠄⠄⠄⠄⠄⠄⠄⡀⠄⠄⠄⠉⠁⠄⠄⠄⢻⣿⣿⣾⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⡘⣻⣿⣿⣿⣷⣿⠁⠄⠄⠠⣇⡇⠃⠂⣿⠄⣾⢸⡆⢴⠉⡇⣰⢉⡆⣰⠉⣧⠄⠄⠄⠸⣿⣽⣿⣤⣤⣤⣾⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⣶⣶⣿⣿⣿⣿⠄⠄⠄⢀⠙⣿⡆⠄⡯⠂⣿⢼⡇⣿⠄⣯⣿⢁⡇⣿⠄⣿⠄⠄⠄⠄⣿⣻⣿⣿⣿⡿⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠟⠉⠙⢻⣿⣿⣿⠄⠄⠄⠘⢢⡗⠃⢼⠧⠠⠻⠜⠄⠹⠼⠃⠻⠼⠣⠻⠸⠇⠄⠄⠄⢸⡿⣿⣿⣿⣻⣿⡎⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⠄⢀⣠⣿⣿⣿⣧⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣷⣿⣧⣿⠃⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⣿⣿⣿⣿⢿⣿⣿⣦⠄⠄⠄⠔⢅⢄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠔⢔⠄⠄⠄⢀⣾⣿⣟⣭⠿⡽⡻⡟⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⢿⣿⣿⣿⣿⢿⢽⣳⣄⠄⠄⠄⠈⠾⢀⢖⠠⡄⠄⢠⣐⠣⠌⠊⠄⠄⢀⣴⣿⣿⣿⣿⣷⣿⣿⡛⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⢿⣿⣷⣻⣿⣿⣿⣿⣷⣦⣀⠄⠄⠄⠄⠈⠄⠄⠄⠄⠄⠄⢀⣠⣶⣿⣿⣿⢿⣿⣿⣿⣾⠟⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠙⢿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣷⣶⣦⣤⣤⣤⣤⣶⣶⣿⣿⣿⣿⣿⣿⠁⠄⠄⢹⠟⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠙⣿⣿⣿⣿⣿⣿⠟⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠁⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠛⠿⣿⡇⠄⠄⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄ ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⠶⠷⢶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄

        )" << endl;
    }
};

class Hunter: public Art
{
public:
    void win_or_lose(int pa){
        Art logo;
        srand(time(NULL));
        int win_or_lose = rand()%100 + 1;

        if (win_or_lose < pa){
            logo.DieLogo();
            cout << "\n但你輸了\n\n你輸了你的一切\n\n你死了";
            save(0,0,0);
            exit(1);
        }
    }

    int hunt(int coins){
        Art logo;
        srand(time(NULL));
        int ch =rand()%4 + 1;
        int getcoin =rand()%100 + 1;
        
        switch (ch)
        {
            case 1: logo.WolfLogo(1); cout << "你遇到了 狼王 \n"; break;
            case 2: logo.VampireLogo(1); cout << "你遇到了 吸血鬼 \n"; break;
            case 3: logo.YetiLogo(1); cout << "你遇到了 雪怪 \n"; break;
            case 4: logo.ElfLogo(1); cout << "你遇到了 妖精王 \n";break;
            default:break;
        }
        win_or_lose(5);

        cout << "你擊敗了他並獲得" << getcoin << "金幣" << endl;

        switch (ch)
        {
            case 1: logo.WolfLogo(2); break;
            case 2: logo.VampireLogo(2); break;
            case 3: logo.YetiLogo(2); break;
            case 4: logo.ElfLogo(2); break;
            default:break;
        }


        int tk =rand()%10000 + 1;
        if (tk < 5){
            ticket = ticket +1;
            logo.tk();
            cout << "\n是...是票欸\n";
        }
        

        coin = coins + getcoin;

        return coin,ticket; 
        
    }

    int adventure(int coins){
        Art logo;
        srand(time(NULL));
        int ch =rand()%4 + 1;
        int getcoin =rand()%10000 + 1;
        
        switch (ch)
        {
            case 1: logo.SlimeLogo(1); cout << "你遇到了 史萊姆 \n"; break;
            case 2: logo.MushroomLogo(1); cout << "你遇到了 蘑菇怪\n"; break;
            case 3: logo.GoblinLogo(1); cout << "你遇到了 哥布林 \n"; break;
            case 4: logo.BoneLogo(1); cout << "你遇到了 骷嚕 \n";break;
            default:break;
        }
        win_or_lose(67);

        cout << "你擊敗了他並獲得" << getcoin << "金幣" << endl;
        coin = coins + getcoin;

        switch (ch)
        {
            case 1: logo.SlimeLogo(2); break;
            case 2: logo.MushroomLogo(2); break;
            case 3: logo.GoblinLogo(2); break;
            case 4: logo.BoneLogo(2); break;
            default:break;
        }

        
        int tk =rand()%10000 + 1;
        if (tk < 15){
            ticket = ticket +1;
            logo.tk();
            cout << "\n是...是票欸\n";
        }
        

        return coin,ticket; 
        
    }
};

class play: public Hunter
{
public:

    void bust(int coins){
        if (coins < 0 ){
            cout << ":賭到破產還敢來(#`Д´)ﾉ\n";
            cout << " (抓去打怪)\n";
            //adventure(coins);
        }
    }

    int PlayDice(int coins){
    rs:
        bust(coins);
        cls();
        Art logo;
        logo.DiceArt();
        srand(time(NULL));

        int ur_st_dice =rand()%6 + 1;
        int ur_nd_dice =rand()%6 + 1;
        int bot_st_dice =rand()%6 + 1;
        int bot_nd_dice =rand()%6 + 1;
        int ur_point,bot_point=0;


        cout << "coins: " << coin << endl;

        int bet;
        cout << "bet: ";
        cin >> bet ;

        if (bet > coin){
            cout << "你沒那麼多 == \n\n";
            goto rs;
        } else if (bet < 0){
            cout << "想鑽漏洞 == \n\n";
            goto rs;
        }
        else{
        
        ur_point = ur_st_dice + ur_nd_dice;
        bot_point = bot_st_dice + bot_nd_dice;

        if ((ur_st_dice == 6 && ur_nd_dice == 6)){
            ShowDice(6);
            ShowDice(6);
            cout << " 骰出了兩個6! 對手害怕並且放棄了。\n" ;
            coin = coins + (bet)*3;
            
            return coin ;
        } else {
            ShowDice(ur_nd_dice);
            ShowDice(ur_st_dice);
            
            cout << " 您骰出了"  << ur_st_dice << " " << ur_nd_dice << endl;
            ShowDice(bot_st_dice);
            ShowDice(bot_nd_dice);
            cout << " 對手骰出了"  << bot_st_dice << " " << bot_nd_dice << endl;
            if (ur_point > bot_point){
                cout << "你贏了" << bet << "金幣\n" << endl;
                coin = coins + bet;
                return coin;
            } else if (ur_point == bot_point){
                cout << "平手" << endl;
                coin = coins + 0;
                return coin;
            } else {
                cout << "你輸了" << bet << "金幣\n" << endl;
                coin = coins - bet;
                return coin;
            }
        }
    }
    }

    int PlayRps(int coins){
    rs:
        bust(coins);
        cls();
        Art logo;
        logo.RpsArt();

        int bot;   
        int player;      
        int bet;

        cout << "coins: " << coin << endl;
        
        cout << "bet: ";
        cin >> bet;

        if (bet > coin){
            cout << "你沒那麼多 == \n\n";
            goto rs;
        } else if (bet < 0){
            cout << "想鑽漏洞 == \n\n";
            goto rs;
        }
        else{

        srand(time(NULL));   
        bot=rand()%3+1;
    start:
        cout<<"請輸入你要出的拳 [1]剪刀 [2]石頭 [3]布"<<endl;
        cin>>player;
        if(bot==1){
            if(player==1){
                cout << "\n///////////////////\n";
                cout<<"你出剪刀, 電腦也出剪刀!"<<endl<<"平手!";
                cout << "\n///////////////////\n\n";
                return coin;
            } else if(player==2){
                cout << "\n///////////////////\n";
                cout<<"你出石頭, 電腦出剪刀!"<<endl<<"你贏了" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins + bet;
                return coin;
            } else if(player==3){
                cout << "\n///////////////////\n";
                cout<<"你出布, 電腦出剪刀!"<<endl<<"你輸了" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins - bet;
                return coin;
            } else{
                cout << "\n///////\n";
                cout<<    "到底賭不賭!\n";
                cout << "///////\nn";
                goto start;   
            }
        }
        if(bot==2){
            if(player==1){
                cout << "\n///////////////////\n";
                cout<<"你出剪刀, 電腦出石頭!"<<endl<<"你輸了" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins - bet;
                return coin;
            } else if(player==2){
                cout << "\n///////////////////\n";
                cout<<"你出石頭, 電腦也出石頭!"<<endl<<"平手!";
                cout << "\n///////////////////\n\n";
                return coin;            
            } else if(player==3){
                cout << "\n///////////////////\n";
                cout<<"你出布, 電腦出石頭!"<<endl<<"你贏了" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins + bet;
                return coin;
            } else{
                cout << "\n///////\n";
                cout<<    "到底賭不賭!\n";
                cout << "///////\nn";
                goto start;    
            }
        }
        if(bot==3){
            if(player==1){
                cout << "\n///////////////////\n";
                cout<<"你出剪刀, 電腦出布!"<<endl<<"你贏了" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins + bet;
                return coin;
            } else if(player==2){
                cout << "\n///////////////////\n";
                cout<<"你出石頭, 電腦出布!"<<endl<<"你輸了!" << bet << "金幣\n";
                cout << "\n///////////////////\n\n";
                coin = coins - bet;
                return coin;
            } else if(player==3){
                cout << "\n///////////////////\n";
                cout<<"你出布, 電腦也出布!"<< endl <<"平手!";
                cout << "\n///////////////////\n\n";
                return coin;
            } else{
                cout << "\n///////\n";
                cout<<    "到底賭不賭!\n";
                cout << "///////\nn";
                goto start;   
            }
        }
        return coin;
    }
    }

    void ShowBJ(int player, int bot){
        cout << "\n///////////////////////////////////\n";
        cout << "     player:     " << player ;
        cout << "\n     bot:        " << bot ;
        cout << "\n///////////////////////////////////\n\n";
    }

    int PlayBlackJack(int coins){

    rs:

        bust(coins);
        
        int bot=0;
        int player=0;
        int GetCard,Card;
        int bet,temp,tmp,STCard,NDCard,ChOne,BotGotOne = 0;
        int i=1;

        cls();
        Art logo;
        logo.BJArt();

        cout << "coins: " << coin << endl;

        cout << "bet: ";
        cin >> bet;
        
        if (bet > coin){
            cout << "你沒那麼多 == \n\n";
            goto rs;
        } else if (bet < 0){
            cout << "想鑽漏洞 == \n\n";
            goto rs;
        }
        else{

        /////////////////////////////////////////////////

        srand(time(NULL)); 
        Card = rand()%13+1;
    //    Card = 1;
        if (Card>10){
            Card = 10;
            bot = bot + Card;
        }else if (Card == 1){
            cout << "莊家牌 '1' 保險? y/n [1]/[0] ";
            cin >> BotGotOne;
            cout << endl;
            bot = bot + Card;
        } else 
            bot = bot + Card;

        
        srand(time(NULL)); 
        STCard = rand()%13+1;
        srand(time(NULL)); 
        NDCard = rand()%13+1;

        if (STCard>10){
            STCard = 10;
        }
        if (STCard == 1){
            cout << "第二張是" << NDCard << "要換牌成 '11' 嗎 y/n [1]/[0] ";
            cin >> ChOne;
            cout << endl;
            if (ChOne == 1){
                player = player + 11;
            } else player = player + 1;
        } else
            player = player + STCard;
        ////
        if (NDCard>10){
            NDCard = 10;
        }
        if (NDCard == 1){
            cout << "第一張是" << STCard << "要換成 '11' 嗎 y/n [1]/[0] ";
            cin >> ChOne;
            cout << endl;
            if (ChOne == 1){
                player = player + 11;
            } else player = player + 1;
        } else
            player = player + NDCard;
        //player = 21;
        if (player == 21){
            BlackJactArt();
            ShowBJ(player,bot);
            cout << " 21點 閒家勝\n";
            coin = coins + bet*1.5;
            return coin;
        }
        
        ShowBJ(player,bot);
//// double bet
        if (player != 21){
            cout << "雙倍下注? y/n [1]/[0] ";
            cin >> ChOne;
            switch (ChOne)
            {
            case 0: break;
            case 1:{ 
                bet = bet + bet; 

                if (GetCard == 0){
                    goto BotGetCard;
                } else {
                    srand(time(NULL)); 
                    Card = rand()%13+1;

                    if (Card>10){
                        Card = 10;
                    }
                    if (Card == 1){
                        cout << "要換牌成 '11' 嗎 y/n [1]/[0] ";
                        cout << endl;
                        cin >> ChOne;
                        if (ChOne == 1){
                            player = player + 11;
                        } else player = player + 1;
                    } else 
                        player = player + Card;
                    ShowBJ(player,bot);
                    if (player == 21){
                        ShowBJ(player,bot);
                        cout << " 21點 閒家勝\n";
                        coin = coins + bet;
                        return coin;
                    }
                    if (player > 21){
                        cout << "閒家爆牌，莊家勝\n";
                        coin = coins - bet;
                        return coin;
                    }
                    
                }
                goto BotGetCard;
                break;
            }
            default:
                break;
            }
            
        }
        

        while (1){/////player getcard
            cout << "\n要牌? y/n [1]/[0] ";
            cin >> GetCard;
            cout << endl;

            i++;

            if (GetCard == 0){
                break;
            } else {
                    srand(time(NULL)); 
                    Card = rand()%13+1;

                    if (Card>10){
                        Card = 10;
                    }
                    if (Card == 1){
                        cout << "要換牌成 '11' 嗎 y/n [1]/[0] ";
                        cout << endl;
                        cin >> ChOne;
                        if (ChOne == 1){
                            player = player + 11;
                        } else player = player + 1;
                    } else 
                        player = player + Card;

                    if (player == 21){
                        ShowBJ(player,bot);
                        cout << " 21點 閒家勝\n";
                        coin = coins + bet;
                        return coin;
                    }
                    
            }

            ShowBJ(player,bot);

            if (player > 21){
                cout << "閒家爆牌，莊家勝\n";
                coin = coins - bet;
                return coin;
            }
            if (i == 5 && player < 22){
                cout << "過五關 閒家勝\n";
                coin = coins + bet*3;
                return coin;
            }
            
        }
BotGetCard:
        while (1){/////bot getcard

            if (bot > 16){
                break;
            } else{
                srand(time(NULL)); 
                Card = rand()%13+1;

                if (Card>10){
                    Card = 10;
                }
                if (BotGotOne == 1 && Card > 10){
                    cout << "莊家21點";
                    coin = coins - bet + bet *1.5;
                    return coin;
                }
                if (Card == 1){
            
                    tmp = bot + 1;
                    temp = bot +11;
                    if (temp > tmp && temp < 22){
                        bot = bot + 11;
                    } else bot = bot + 1;
                } else 
                    bot = bot + Card;
            }
            ShowBJ(player,bot);

            if (bot == 21){
                cout << " 21點 莊家贏\n";
                coin = coins - bet;
                return coin;
            }
            if (bot > 21){
                cout << "莊家爆牌，閒家贏\n";
                coin = coins + bet;
                return coin;
            }
        }

        ShowBJ(player,bot);

        if (player > bot){
            
            cout << "閒家贏\n";
            coin = coins + bet;
            return coin;
        } else if(bot > player){
            cout << "莊家勝\n";
            coin = coins - bet;
            return coin;
        } else if (bot == player){
            cout << "平手\n";
            coin = coins - 0;
            return coin;        
        }
    }
    }

int PlayRussianRoulette(int coins){
    rs: 
        bust(coins);
        cls();
        Art logo;
        logo.RevolverArt();
        
        
        srand(time(NULL));
        int shot =rand()%6 + 1;
        int i=0;

        cout << "coins: " << coin << endl;

        int bet;
        cout << "bet: ";
        cin >> bet ;

        if (bet > coin){
            cout << "你沒那麼多 == \n\n";
            goto rs;
        } else if (bet < 0){
            cout << "想鑽漏洞 == \n\n";
            goto rs;
        }
        else{
        
        i++;
        if (i == shot){
            win_or_lose(100);
        }
        else cout << "你開了第'" << i << "'發,很幸運的你活下來了\n ";

        int ch;
        while (1){
            if(i == 5){
                cout <<"你贏了\n";
                coin = coins + bet*50;
                return coin;
            }
            i++;
            cout << "繼續 y/n [1]/[0]";
            cin >> ch;
            switch (ch)
            {
            case 1:{
                if (i == shot){
                    win_or_lose(100);
                }
                else cout << "你開了第'" << i << "'發,很幸運的你活下來了\n ";

                break;
            }
            case 0:{
                cout << "你放下了手槍\n";
                coin = coins + bet*i*2;
                
                return coin;
                break;
            }
            default:
                break;
            }
        }
    }
}
};

class gamblingCH:public play
{
public:


    int dice(int coins){
        if (coins < 0){
            cout << "\n/////////////\n";
            cout << "負載還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        } else if (coins == 0) {
            cout << "\n///////////////\n";
            cout << "沒錢還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        }

        int ch;
        PlayDice(coin);
        while (1)
        {
            cout << "play? 0/1  [結束]/[繼續]";
            cin >> ch;
        
            if (ch == 0){
                break;
            } else 
                PlayDice(coin);   
        }
        return coin;
    }

    int BlackJack(int coins){
        if (coins < 0){
            cout << "\n/////////////\n";
            cout << "負載還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        } else if (coins == 0) {
            cout << "\n///////////////\n";
            cout << "沒錢還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        }
        int ch;

        PlayBlackJack(coin);
        while (1)
        {
            cout << "\nplay? 0/1  [結束]/[繼續]";
            cin >> ch;
            cout << endl << endl;
        
            if (ch == 0){
                break;
            } else 
                PlayBlackJack(coin);   
        }
        return coin;
    }



    int rps(int coins){
        if (coins < 0){
            cout << "\n/////////////\n";
            cout << "負載還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        } else if (coins == 0) {
            cout << "\n///////////////\n";
            cout << "沒錢還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        }
        int ch;

        PlayRps(coin);
        while (1)
        {
            cout << "play? 0/1  [結束]/[繼續]";
            cin >> ch;
        
            if (ch == 0){
                break;
            } else 
                PlayRps(coin);
        }
        return coin;
    }

    int RussianRoulette(int coins){
        if (coins < 0){
            cout << "\n/////////////\n";
            cout << "負載還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        } else if (coins == 0) {
            cout << "\n///////////////\n";
            cout << "沒錢還敢來 ==\n";
            cout << "///////////////\n\n";
            return coin;
        }
        int ch;

        PlayRussianRoulette(coin);
        while (1)
        {   

            cout << "play? 0/1  [結束]/[繼續]";
            cin >> ch;
        
            if (ch == 0){
                break;
            } else 
                PlayRussianRoulette(coin);
        }
        return coin;
    }
};

class ShowChoose
{
public:
    int GoWhere(){
        int choose;
        cout << "[1]主城" << endl;
        cout << "[2]野外冒險" << endl;
        cout << "[3]菁英怪" << endl;
        cout << "[4]賭博" << endl;
        cout << "[5]存檔" << endl;
        cout << "[0]登出" << endl;
        cin >> choose ;
        cls();

        return choose;
    }

    void gambling(){
        int choose;
        Art logo;
        cls();

        while (1){
            logo.cash();
            cout << "[1]骰子比大小 \n";
            cout << "[2]21點 \n";
            cout << "[3]猜拳 \n";
            cout << "[4]俄羅斯輪盤 \n";
            cout << "[5]錢包 \n";
            cout << "[0]離開 \n";
        
            cin >> choose ; 

            if (choose == 0){
                break;
            } else {Cgambling(choose);}
        }
    }
};

void cls(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
           cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void welcome(){
	int i;
	char c[]="在充滿機率世界不務正業的冒險者!";
	for ( i = 0; c[i]!='\0'; i++){
		cout << c[i] ;
		Sleep(times);
	}
	cout << endl;

    char cb[]="\n你在一次意外中不小心被傳送到另一個世界,本以為沒有機會回家了,不過聽當地居民說【在當地的商店是可以買到傳送們的票的,不過相當的貴】,但為了回到原本的世界,你決定想辦法賺錢買票。\n\n";
	for ( i = 0; cb[i]!='\0'; i++){
        if (cb[i-1]== ','){
            Sleep(times*10);
        }
        
		cout << cb[i] ;
		Sleep(times*0.25);
	}
	cout << endl;
    //system("pause");
}

int shop(int coins){
    Art logo;
    int ch;
    while (1)
    {
    
    cout << "[1]錢包\n[2]票 $1000000 \n[3]離開\n";
    cin >> ch;
    switch (ch)
    {
    case 1: cout << coins << endl; break;
    case 2:{
        if (coins > 1000000){
            cls();
            logo.tk();
            cout << "終於可以回家啦\n\n";
            ticket = ticket + 1;
            coin = coins - 1000000;
            return coin,ticket;
        } else {
            cls();
            cout << "錢不夠 \n\n";
            coin = coins - 0;
            return coin;
        }
        break;
    }
    case 3:  break;
    default:
        break;
    }
    return coin;
    }

}


void data(int coins){
    Art logo;
    int ch;
    cout << "[1]錢包\n[2]商店\n[3]傳送\n";
    cin >> ch;
    switch (ch)
    {
    case 1: cout << coins << endl; break;
    case 2: shop(coin); break;
    case 3: {
        if (ticket < 1){
            cls();
            cout << "\n\n票呢~票呢~,沒票怎麼傳送呢~ ==\n\n";
        } else {
            cls();
            logo.portal();
            cout << "恭喜通關";
            save(0,0,0);
            exit(1);
        }
        break;
    }

    default:
        break;
    }
}

void Cgambling(int ch){
    gamblingCH gc;
    switch (ch)
    {
        case 1: gc.dice(coin); break;
        case 2: gc.BlackJack(coin); break;
        case 3: gc.rps(coin); break;
        case 4: gc.RussianRoulette(coin); break;
        case 5: cout << coin << endl; break;
        case 0: break;
        default:break;
    }
}

void Cchoose(int choose){
    Hunter H;
    ShowChoose SC;

    switch (choose)
    {
        case 1: data(coin); break;
        case 2: H.hunt(coin); break;
        case 3: H.adventure(coin); break;
        case 4: SC.gambling(); break;
        case 5: save(coin,ticket,lucky); break;
        case 0: cout << "登出...\n"; break;

        default:break;
    }
}

int read(){
    int coins,tk,lu;
    ifstream NF("save.sav");
    if (!NF.is_open()) {
        cerr << "Could not open the file "<< endl;
    } else{
        NF >> coins >> tk >> lu;
        coin = coins;
        ticket = tk;
        lucky = lu;

        return coin,ticket,lucky;
    }
}

void save(int coins,int tk ,int lu){  
    ofstream NF;
    NF.open("save.sav", ios::trunc | ios::in);
    if (!NF.is_open()) {
        cerr << "Could not open the file "<< endl;
    } else{
        
        NF << coins << "\n" << tk << "\n" << lu << "\n";
        NF.close();
    }
}

int main(){ 
    read();
    int choose,i=0;
    ShowChoose SC;
    welcome();

    while (1){    
        choose = SC.GoWhere();
        Cchoose(choose);
        if (choose == 0){
            break;
        }   
    }
    //system("pause");
    return 0;
}

