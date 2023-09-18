#pragma once
# include <iostream>

class Brain {
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);

        ~Brain();

        const std::string *getIdeas();



    private:
        std::string *ideas;
};