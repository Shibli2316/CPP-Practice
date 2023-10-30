#include <iostream>
#include <stack>
struct Move {
    int n;
    char source, auxiliary, destination;
};
void towerOfHanoiNonRecursive(int n, char source, char auxiliary, char destination) {
    std::stack<Move> moves;
    Move initialMove = {n, source, auxiliary, destination};
    moves.push(initialMove);
    while (!moves.empty()) {
        Move currentMove = moves.top();
        moves.pop();
        n = currentMove.n;
        source = currentMove.source;
        auxiliary = currentMove.auxiliary;
        destination = currentMove.destination;
        if (n == 1) {
            std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        } else {
            moves.push({n - 1, auxiliary, source, destination});
            moves.push({1, source, auxiliary, destination});
            moves.push({n - 1, source, destination, auxiliary});
        }
    }
}
int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;
    towerOfHanoiNonRecursive(numDisks, 'A', 'B', 'C');
    return 0;
}
