/**
 * Function to determine if the player can win the Nim Game.
 * @param n - The number of stones in the heap.
 * @returns True if the player can win, otherwise False.
 */
function canWinNim(n: number): boolean {
    return n % 4 !== 0;
}

// Test cases for TypeScript solution
console.log(canWinNim(4));  // False
console.log(canWinNim(1));  // True
console.log(canWinNim(2));  // True
