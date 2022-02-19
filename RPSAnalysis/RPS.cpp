#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
    float wins, losses, ties;
    
    float rocks, papers, scissors, total;

    int input;
    int rng;

    bool end = false;
    std::cout<<"Welcome to Rock Paper Scissors\n";
    rocks = 0.0f;
    while(end == false){
        std::cout<<"1:Rock, 2:Paper, 3:Scissors, 4:Quit\n";
        std::cin>>input;
        
        rng = rand() % 3 + 1;//you can probably tell it's generating a random number that the choice for the opponent 
        
        //adds your choice to the data
        switch(input)
        {
        case 1:
            ++rocks;
            break;
        case 2:
            ++papers;
            break;
        case 3:
            ++scissors;
            break;
        case 4:
            end = true;
            break;
        default:
            break;
        }

        //win logic (probably bad)
        if(input == 1 && rng == 3){
            ++wins;
            std::cout << "Win!\n";
        }
        else if(input == 2 && rng == 1){
            ++wins;
            std::cout << "Win!\n";
        }    
        else if(input == 3 && rng == 2){
            ++wins;
            std::cout << "Win!\n";
        }    
        else if(input == 1 && rng == 2){
            ++losses;
            std::cout << "Loss\n";
        }  
        else if(input == 2 && rng == 3){
            ++losses;
            std::cout << "Loss\n";
        }    
        else if(input == 3 && rng == 1){
            ++losses;
            std::cout << "Loss\n";
        }
        else if(input == rng){
            ++ties;
            std::cout << "Tie\n";
        }
    }
    total = rocks + papers + scissors;

    //big ass block of stuff that probably could've been done in one line of code but this looks a bit neater
    std::cout << "Wins:" << wins << " Losses:" << losses << " Ties:" << ties << " Total:" << total << "\n";
    std::cout << "Rocks:" << rocks << " Papers:" << papers << " Scissors:" << scissors << "\n";

    std::cout << "-=-Percentages-=-\n";

    std::cout << "Rocks:" << (rocks/total)*100 << "%\n";
    std::cout << "Papers:" << (papers/total)*100 << "%\n";
    std::cout << "Scissors:" << (scissors/total)*100 << "%\n";

    std::cout << "\nWins:" << (ties/total)*100 << "%\n";
    std::cout << "Losses:" << (losses/total)*100 << "%\n";
    std::cout << "Ties:" << (ties/total)*100 << "%\n";
}