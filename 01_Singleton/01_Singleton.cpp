#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton* p_instance;
    Singleton() {}
    Singleton(const Singleton& other) = delete;
    Singleton& operator =(const Singleton& other) = delete;
   
public:
    static Singleton* GetInstance()
    {
        if (p_instance == nullptr)
            p_instance = new Singleton();
        return p_instance;
    }
    void Log(string msg)
    {
        cout << "Msg : " << msg << endl;
    }
};

Singleton* Singleton::p_instance = nullptr;

int main()
{
    Singleton * s1 = Singleton::GetInstance();
    Singleton * s2 = Singleton::GetInstance();
    Singleton * s3 = Singleton::GetInstance();

    s1->Log("Hello world");
    s1->Log("GoodBye");
    s1->Log("dssd hfghfdjfjgj");

    Singleton::GetInstance()->Log("dslgdsk jsdfkjs kjskjfjk s");
    Singleton::GetInstance()->Log("dslgdsk jsdfkjs kjskjfjk s");

    //Singleton clone(*s1);//copy ctor
    //Singleton clone = *s1;//operATOR =
    //clone.Log("Xaxaxaxaxaxaxaxaxa..... I am a clone");
    delete s1;


    
}

