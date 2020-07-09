#include <iostream>

//Boost, GTest


// >> add task TaskName [due date, priority, label]
// >> add subtask Parent TaskName [due date, priority, label]
// >> show today [sort priority]
// >> show this_week
// >> show label <label>

// >> postpone date <date> | day | week
// >> delete (also completes subtasks)
// >> complete (also completes subtasks)

// >> save to file, load from file



///  console (command processor) -> TaskManager -> Task Memory Model

struct Task {
  std::string name;
  uint date;
  uint priority;
  std::string label;
  std::vector<Task*> sub_tasks;
};

class TaskManager {
 public:
  void AddTask(Task*);
  void RemoveTask(Task*);
  Task* GetTask(const std::string& name);
};



class FileWrapper
{
 public:
  FileWrapper(const std::string& name, const std::string& mode) {
    f = fopen(name.c_str(), mode.c_str());
  }
  ~FileWrapper() {
    fclose(f);
  }
  FILE get() {return f;}
 private:
  FILE f;
};
//
//
//class FlagWrapper
//{
// public:
//  FlagWrapper(bool& b)
//  : b_(b)
//  {
//    b_ = true;
//  }
//  ~FlagWrapper() {
//    b_ = false;
//  }
// private:
//  bool& b_;
//};

class MyClass
{
 public:
  explicit MyClass(const std::string&){}
  ~MyClass(){}

  void foo() { std::cout << "foo" << std::endl;}

  IncreaseCount()
  DecreaseCount()

};


void bar(MyClass*); // wrong
std::unique_ptr<MyClass> bar(std::unique_ptr<MyClass> inside) {
  inside->foo();
  return std::move(inside);

};

void bar(std::shared_ptr<MyClass> inside) {


}
// OK
void bar(MyClass&); // OK
void bar(std::*_ptr<MyClass>); // OK


int main()
{
  {
    //
    //auto_ptr<MyClass> ptr1 {new MyClass};
                    //     <----
    //auto_ptr<MyClass> ptr2 = ptr1;          //<<<   new MyClass{p_};    delete p_;


    
    auto ptr = std::make_unique<MyClass>("sdfdsfdsf");
    auto s_ptr = std::make_shared<MyClass>("dsfdsffds");

    bar(std::move(ptr));
    ptr->foo();
    //std::unique_ptr<MyClass> ptr2 = ptr


    std::shared_ptr<MyClass> s_ptr2 = s_ptr;
    std::shared_ptr<MyClass> s_ptr3 = s_ptr;
    bar(s_ptr);
    s_ptr3.reset();

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //MyClass* ptr = new MyClass[10];
    //delete [] ptr;
//    ptr->foo();
//    delete ptr;

    MyClass my_local_class;
    my_local_class.foo();

    //free func
    //static func
    //std::function
    //lambda
    
    
    typedef std::unique_ptr<FILE, my_l}> MyFileWrapper;

    MyFileWrapper myclass { fopen() };
    unique_ptr(FILE* ptr)
    {
      p_ = ptr;
    }
//    ~unique_ptr()
//    {
//      delete[] p_;
//    }
~unique_ptr()
    {
      D(p_);
    }
   private:
    FILE p_;

    myclass->foo();
  }


  bool busy = false;

  {
    FlagWrapper fw(busy);
    

  }
  return 0;
}


