class Solution {
    /**
     * @param {string} s
     * @return {numbor}
     */
    calculate(s) {
          let stack = [];
    let num = 0;
    let op = '+';

    for (let i = 0; i < s.length; i++) {

        let ch = s[i];

        if (!isNaN(ch) && ch !== ' ') {
            num = num * 10 + Number(ch);
        }

        if ((isNaN(ch) && ch !== ' ') || i === s.length - 1) {

            if (op === '+') {
                stack.push(num);
            }
            else if (op === '-') {
                stack.push(-num);
            }
            else if (op === '*') {
                stack.push(stack.pop() * num);
            }
            else if (op === '/') {
                stack.push(Math.trunc(stack.pop() / num));
            }

            op = ch;
            num = 0;
        }
    }

    return stack.reduce((sum, val) => sum + val, 0);
    }
}
