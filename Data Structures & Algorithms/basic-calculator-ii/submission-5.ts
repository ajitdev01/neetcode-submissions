class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    calculate(s: string): number {
    const stack: number[] = [];
    let num = 0;
    let op = '+';

    for (let i = 0; i < s.length; i++) {

        const ch = s[i];

        if (!isNaN(Number(ch)) && ch !== ' ') {
            num = num * 10 + Number(ch);
        }

        if ((isNaN(Number(ch)) && ch !== ' ') || i === s.length - 1) {

            if (op === '+') {
                stack.push(num);
            }
            else if (op === '-') {
                stack.push(-num);
            }
            else if (op === '*') {
                stack.push(stack.pop()! * num);
            }
            else if (op === '/') {
                stack.push(Math.trunc(stack.pop()! / num));
            }

            op = ch;
            num = 0;
        }
    }

    return stack.reduce((sum, val) => sum + val, 0);
    }
}
