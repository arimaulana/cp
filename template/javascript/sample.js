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

function main() {
    const T = readline();
    const tc = 1;

    for (let tc = 1; tc <= T; tc++) {
        const n = readline();

        process.stdout.write("Case #" + tc + ": "); // without auto newline
        console.log(n); // with auto newline
    }

    // do something
    
}
