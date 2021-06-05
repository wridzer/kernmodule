//
// Created by wridz on 27/05/2021.
//

#pragma once



class Score {
public:
    Score();
    ~Score();
    void AddScore(int point);
    int GetScore();
    void RetractScore(int point);
private:
    int points = 0;
};

