#include <iostream>
#include <ctime>
#include <cstdlib>


void randwalk(int N, int M){
    std::srand(std::time(0));
    int D[M]; //finalposition
    for (int trials = 0; trials < M; ++trials){
        int currentPosition = 0;

        for (int steps = 0; steps < N; ++steps){
            int flip = std::rand() % 2;
            if (flip ==0){
                currentPosition--;
            } else{
                currentPosition++;
            }
        }
        D[trials] = currentPosition;
    }

    std::cout << "Trials: " << M << "   Steps: "<< N << "\n";
    for (int i = 0; i < M; ++i){
        std::cout << "Trial: " << i+1 << " Final position: "<< D[i] <<"\n";

    }
    
    double sum = 0;
    for (int i = 0; i < M; ++i){
        sum += D[i];
    }
    double average = sum / M;
    std::cout << "Average final position: " << average << "\n";
}

int main(){
    int N,M;
    std::cout << "Trials (M): ";
    std::cin >> M;
    std::cout << "Steps (N): ";
    std::cin >> N;

    randwalk(N,M);
    return 0;

}