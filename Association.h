#pragma once
#include <vector>
#include <iostream>
#include <string.h>
//using namespace std;
class association
{
    private:
        std::vector<Member> list_of_members;
        std::vector<Track> list_of_tracks;
        std::vector<Race> list_of_races;
        League cuurent_league;
};

class Member
{
    struct Participation
    {
        std::vector<Race*> races;
        int place;
        Participation *next;
    };
    private:
        std::string         Name;
        int                 Age;
        bool                Gender;
        std::string         Membership;
        long                Performance_index;
        std::vector<Track*> Best_times;
    public:
};

class Track
{
    struct Best
    {
        float time;
        Member* runner; 
    };
    struct Schedule
    {
        Race *race;
        Schedule *next;
    };
    private:
        std::string         Name;
        std::string         Mountain;
        int                 elevation[2];
        long                Difficulty;
        Schedule            Race_schedule;
        double              Average_time;
        Best                Best_runner;
    public:
};

class Race
{
    private:
    public:
};

class League
{
    private:
};