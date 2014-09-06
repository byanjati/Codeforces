#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int evo7Sum [8] = {0 , 0, 0, 0, 0, 0};
    string evo7 [8] = { "jolteon" , "umbreon" , "leafeon" , "glaceon" , "sylveon" , "flareon" };
    string evo8 [2] = { "vaporeon" };
    string evo6 [2] = { "espeon" };

    char str[input];
    cin >> str;

    for(int i = 0;i < input;i++){
        if( input == 7 ){
            switch( str[i] ){
                case 'y' :  evo7Sum[4]++;
                            break;

                case 's' :  evo7Sum[4]++;
                            break;

                case 'v' :  evo7Sum[4]++;
                            break;

                case 'f' :  evo7Sum[2]++;
                            evo7Sum[5]++;
                            break;

                case 'a' :  evo7Sum[2]++;
                            evo7Sum[3]++;
                            evo7Sum[5]++;
                            break;

                case 'l' :  evo7Sum[0]++;
                            evo7Sum[2]++;
                            evo7Sum[3]++;
                            evo7Sum[4]++;
                            evo7Sum[5]++;
                            break;

                case 'c' :  evo7Sum[3]++;
                            break;

                case 'g' :  evo7Sum[3]++;
                            break;

                case 'm' :  evo7Sum[1]++;
                            break;

                case 'j' :  evo7Sum[0]++;
                            break;

                case 'u' :  evo7Sum[1]++;
                            break;

                case 'b' :  evo7Sum[1]++;
                            break;

                case 'r' :  evo7Sum[1]++;
                            evo7Sum[5]++;
                            break;

                case 'e' :  evo7Sum[0]++;
                            evo7Sum[1]++;
                            evo7Sum[2]++;
                            evo7Sum[3]++;
                            evo7Sum[4]++;
                            evo7Sum[5]++;
                            break;

                case 'o' :  evo7Sum[0]++;
                            evo7Sum[1]++;
                            evo7Sum[2]++;
                            evo7Sum[3]++;
                            evo7Sum[4]++;
                            evo7Sum[5]++;
                            break;

                case 'n' :  evo7Sum[0]++;
                            evo7Sum[1]++;
                            evo7Sum[2]++;
                            evo7Sum[3]++;
                            evo7Sum[4]++;
                            evo7Sum[5]++;
                            break;
            }
        }
    }

    if(input == 7){
        int max = 0;

        for(int i=0;i<input;i++){
            if( evo7Sum[max] < evo7Sum[i] ){
                max = i;
            }
        }

        cout << evo7[ max ] << endl;

    }else if( input < 7 ){
        cout << evo6[0] << endl;
    }else if( input > 7 ){
        cout << evo8[0] << endl;
    }

    return 0;
}
