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
function isPalindrome(p) {
    return p == p.split('').reverse().join('');
}

function generate(p, idx) {
    let c = p.charCodeAt(idx);

    p = p.split('');
    p[idx] = c <= 97 ? String.fromCharCode(c + 1) : String.fromCharCode(97);
    p = p.join('');

    return p;
}

function breakPalindrome(p) {
    if (!isPalindrome(p)) return "";

    const n = p.length;

    if (n == 1) return "";

    let smallest = p;
    for (let i = 0; i < n; i++) {

        let tmp = generate(p, i);
        //console.log(`tmp: ${tmp} smallest: ${smallest}`);

        if (isPalindrome(tmp)) continue;
        if (isPalindrome(smallest)) {
            smallest = tmp;
            continue;
        } 

        smallest = tmp < smallest ? tmp : smallest;

    }

    return smallest;
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
