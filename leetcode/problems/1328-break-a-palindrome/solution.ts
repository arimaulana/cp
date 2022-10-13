function breakPalindrome(p: string): string {
    if (p.length == 1) return "";
    
    let tmp = p;
    for (let i = 0, n = p.length; i < n; i++) {
        let t = p[i];
        let c = p[i];

        if (c == 'a') {
            c = String.fromCharCode(c.charCodeAt(0) + 1);
        } else {
            c = String.fromCharCode(c.charCodeAt(0) - 1);
        }
        
        tmp.replaceAt(i, c);
        if (tmp < p) {
            return tmp;
        }
        tmp.replaceAt(i, t);
    }

    return tmp;
};
