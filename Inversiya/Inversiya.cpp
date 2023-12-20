// Inversiya.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>


class IService {
public:
    virtual void performTask() const = 0;
};


class LowLevelService : public IService {
public:
    void performTask() const override {
        std::cout << "Low-level task performed." << std::endl;
    }
};


class HighLevelModule {
public:
    HighLevelModule(IService* service) : service(service) {}

    void executeTask() const {
       
        service->performTask();
    }

private:
    IService* service;
};

int main() {
   
    LowLevelService lowLevelService;
    HighLevelModule highLevelModule(&lowLevelService);

    
    highLevelModule.executeTask();

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
