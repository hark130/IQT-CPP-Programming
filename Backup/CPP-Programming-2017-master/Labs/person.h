#include <iostream> 
#include <string>



namespace IQT
{
    const int MAX_STR_LEN = 20;

    class Person
    {
    private:
        std::string fname;
        std::string lname; 
        char gender; 
        int age; 
    public:
        Person(std::string firstname = "", std::string lastname = "", int per_age = 0, char per_gender = 'F'):
        fname(firstname), lname(lastname), age(per_age), gender(per_gender){}

        ~Person(){};

        std::string getFname();
        void setFname(std::string);
        std::string getLname();
        void setLname(std::string);
        char getGender();
        void setGender(char);
        int getAge();
        void setAge(int);
        
    };

    std::string Person::getFname()
    {
        return fname;
    }

    void Person::setFname(std::string fname)
    {
        this->fname = fname;
    }

    std::string Person::getLname()
    {
        return lname;
    }

    void Person::setLname(std::string lname)
    {
        this->lname = lname;
    }

    char Person::getGender()
    {
        return gender;
    }

    void Person::setGender(char gender)
    {
        if(gender == 'M' || gender == 'F' || gender == 'm' || gender == 'f')
            this->gender = gender;
        else    
            this->gender = 'F';
    }

    int Person::getAge()
    {
        return age;
    }

    void Person::setAge(int age)
    {
        if(age > 0 && age < 120)
            this->age = age;
        else
            this->age = 0;
    }
}