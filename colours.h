class colours {
    public:
        const char* reset = "\033[0m";
        const char* bold = "\033[01m";
        const char* disable = "\033[02m";
        const char* underline = "\033[04m";
        const char* reverse = "\033[07m";
        const char* strikethrough = "\033[09m";
        const char* invisible = "\033[08m";
        class fg{
            public:
                const char* black = "\033[30m";
                const char* red = "\033[31m";
                const char* green = "\033[32m";
                const char* orange = "\033[33m";
                const char* blue = "\033[34m";
                const char* purple = "\033[35m";
                const char* cyan = "\033[36m";
                const char* white = "\033[37m";
                const char* grey = "\033[90m";
                const char* lightred = "\033[91m";
                const char* lightgreen = "\033[92m";
                const char* yellow = "\033[93m";
                const char* lightblue = "\033[94m";
                const char* pink = "\033[95m";
                const char* lightcyan = "\033[96m";
        };
        class bg{ 
            public:
                const char* black = "\033[40m";
                const char* red = "\033[41m";
                const char* green = "\033[42m";
                const char* orange = "\033[43m";
                const char* blue = "\033[44m";
                const char* purple = "\033[45m";
                const char* cyan = "\033[46m";
                const char* lightgrey = "\033[47m";
        };
};
colours::fg fg;
colours::bg bg;
colours cl;
