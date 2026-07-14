            else if (s[i] == '?')
            {
                if (s[i - 1] == 'B')
                    s[i] = 'R';
                if (s[i - 1] == 'R')
                    s[i] = 'B';
            }