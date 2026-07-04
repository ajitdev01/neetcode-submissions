class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        num = 0
        op = '+'

        for i, ch in enumerate(s):

            if ch.isdigit():
                num = num * 10 + int(ch)

            if (not ch.isdigit() and ch != ' ') or i == len(s) - 1:

                if op == '+':
                    stack.append(num)

                elif op == '-':
                    stack.append(-num)

                elif op == '*':
                    stack.append(stack.pop() * num)

                elif op == '/':
                    # truncate toward zero
                    stack.append(int(stack.pop() / num))

                op = ch
                num = 0

        return sum(stack)