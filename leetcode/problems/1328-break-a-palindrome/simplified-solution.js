'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readline() {
    return inputString[currentLine++];
}
// Write your logic below and in main() function

function breakPalindrome(p) {
    const n = p.length;

    if (n == 1) return "";

    const mid = n >> 1;

    for (let i = 0; i < mid; i++) {
        if (p[i] == 'a') continue;

        return p.substring(0, i) + 'a' + p.substring(i + 1, n);
    }

    return p.substring(0, n - 1) + 'b';
}

function main() {
    let T = readline();

    for (let tc = 1; tc <= T; tc++) {
        let p = readline();
        p = breakPalindrome(p);
        process.stdout.write(`Case #${tc}:\n`);
        console.log(p);
    }
}
