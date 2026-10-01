impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack: Vec<char> = Vec::new();

        for ch in s.chars() {
            match ch {
                '(' | '[' | '{' => {
                    stack.push(ch);
                }

                ')' | ']' | '}' => {
                    if let Some(top) = stack.pop() {
                        if (ch == ')' && top != '(')
                            || (ch == ']' && top != '[')
                            || (ch == '}' && top != '{')
                        {
                            return false;
                        }
                    } else {
                        return false;
                    }
                }

                _ => return false,
            }
        }

        stack.is_empty()
    }
}