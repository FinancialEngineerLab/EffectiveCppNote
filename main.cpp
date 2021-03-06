
#include "NS.hpp"


namespace NS
    {     
     template<typename T>
     class CLS    
     {     public:       
     ....    
     virtual void blink() {}     
     CLS(int A = 0, int B =0);     
     int A() const;     
     int B() const;     
     void setA(int newVar);     
     void setB(int newVar);          
     
     struct CLS2DATA     
     {     CLS left;     CLs right;     };          
     class CLS2     
     {     
     public:     
     const CLS& leftFUNC() const {return pDatat->left;}     
     const CLS& rightFUNC() const {return pDatat->right;}     
     
     private:     
     std::tr1::shared_ptr<CLSDATA> pData;     
     };     
     // vs of CLS2     
     class CLS2TEMP { };     
     const CLS2 CLS2FUNC(const CLS2TEMP& obj); 
     // up : class, down func with same role for showing eg     
     CLS2TEMP *pgo; // pgo pointing CLS2TEMP    
     const CLS *pLeft = &(CLS2FUNC(*pgo).pLeft());//=CLS2FUNC's left of pointer from pgo pointing CLS2TEMP     
     };
     // out of class, non-member functions     
     void FUNC(CLS& var);     
     const CLS operator*(const CLS& rhs, const CLS& lhs); // when type converting
     template<typename T>     
     void swap(CLS<T>& a,_swap CLS<T>& b_swap)     
     {     
     a_swap..swap(b_swap)     
     };          
     void doSomething(T& obj1, T& obj2)     
     {     
     using std::swap;     
     swap(obj1, obj2) 
     // X std::swap(obj1, obj2)     
     }

     // Children Class     
     class CLSCHILD : public CLS     
     {     
     public:     
     virutal void blink() { ... } ;     
     virtual void FUNCCHILD()     
     {     
     CLS::FUNCCHILd();     
     }     
     };     
     
     typedef std::vector<std::tr1::shared_ptr<CLS>>VPW;     
     VPW winPtrs; // all pointers from CLS     
     for(VPW::iterator iter = winPtrs.begin(); iter != winPtrs.end(); ++iter)     
     {     
     (*iter)->blink();     
     }
     for (int i =0; i<n ; ++i)
     {     
     CLS w( ~ i); // no outside declaration : CLS w 
     }
     
     // 29 : exception safety //
     struct STRUCT29
     {
         std::tr1::shared_ptr<TYPE29> element; // **
         int changes;
     };
    
     class Menu
     {
     public:
     void change(std::istream& memberVar);
     
     private:
     Mutex mutex;
     std::tr1::shared_ptr<STRUCT29> pImpl;
     int changes; // change numbers
     void Menu::change(std::istream& memberVar)
     {
     using std::swap;
     Lock ml(&mutex); // **
     std::tr1::shared_ptr<STRUCT29> pNew(new PMImpl(*pImpl)); // copy
     pNew->element.reset(new FUNC29(memberVar)); // modify
     ++pNew->changes;
     swap(pImpl, pNew); // pImpl -> pNew
     //unlock(&mutex);
        
     // 30 : inline function : small & frequent function, etc X
     
     // 31 : complie independancy : 
     //private:
     //    std::tr1::shared_ptr<CLASSImpl> pImpl; // Remember this pattern
     class CLS31
     {
         public:
         static std::tr1::shared_ptr<CLS31> FUNC(const std::string& a, const Date& b, const TYPE31& c);
     };
         
     class CLSChild31 : public CLS31
     {
         public:
         CLSChild31(const std::string& a, const Date& b, const TYPE31& c) : theA(a), theB(b), theC(c) {}
         virtual ~CLSChild31() {}
         std::string FUNC3101() const;
         std::string FUNC3102() const;
         std::string FUNC3103() const;
         
         private:
         std::string theA;
         Date theB;
         TYPE31 theC;
     }
     //parent user
     std::string aa;
     Date bb;
     TYPE31 cc;
     std::tr1::shared_ptr<CLS31> pp(CLS31::FUNC(aa, bb, cc);
     std::cout << pp->aa() << pp->bb() << pp->cc() << std::endl;
     //child user
     std::tr1::shared_ptr<CLS31> CLS31::FUNC31(const std::string& a, const Date& b, const TYPE31& c)
     {
          return std::tr1::shared_ptr<CLS31>(new CLSChild31(a, b, c));
     }
     // 31 end //
     
     // 32 : Public inheritance: base class's all details should be adjusted into derived class(child class) 
                                    
     // 33: Do not hide Base's names in public derived-child class
     class BaseCLS32
     {
       public:
       virtual void mf1() = 0;
       virtual void mf1(int);
       virtual void mf2();
       void mf3();
       void mf3(double);
       
       private:
       int x;
     }
     class DerivedChildCLS32 : Public Base
     {
       public:
       using BaseCLS32::mf1; // **
       using BaseCLS32::mf3; // **
       virtual void mf1();
       void mf3();
       void mf4();
     }
     DerivedChildCLS32 d;
     d.mf1();
     d.mf1(int 3);
     d.mf2();
     d.mf3();
     d.mf3(int 3);
     
     // 34: interface inheritance vs implement inheritance
     // Virtual, nonVirtual
     class ShapeCLS
     {
         public:
         // ** simple virtual -> implement inheritance : declare in child if you do not want use base !
         virtual void draw(const ShapeCLS& art) = 0;
         // ** pure virtual  -> interface inheritance : declare in child!
         virtual void erase(const ShapeCLS& art) const = 0;
         // ** nonvirtual -> cannot declare in derived/child, use base funciton in both base and child!
         int objectID() const;
         
         protected:
         void defaultErase(const ShapeCLS& art);  //** pure virtual default func      
     };
                                    
     void ShapeCLS::draw(const ShapeCLS& art)
     {
         ... // base function for base and childs
     }
                                    
     void ShapeCLS::defaultErase(const ShapeCLS& art)
     {
         ... // base function for childs
     }
                                    
     // not using Special Function of base virtual function
     // using base virtual function
     class RectangleChild1: public Shape 
     {
         public:
         virtual void draw(const ShapeCLS& art) { ShapeCLS::draw(art) }// virtual not using special
         virtual void erase(const ShapeCLS& art) // pure virtual + special
     };
     // pure virtual SPEICAL DECLARATION                            
     void RectangleChild1::erase(const ShapeCLS& art)
     {
     }     
                                                   
     // using SPECIAL Function of base virtual function
     class RectangleChild2 : public Shape
     {
         public:
         virtual void draw(const ShapeCLS& art); // virtual using special
         virtual void erase(const ShapeCLS& art){ ShapeCLS::defaultErase(art) } // pure virtual + base; 
     };
     // virtual SPECIAL DECLATION
     void RectangleChild2::draw(const ShapeCLS& art)
     {
     }
                                    
     // 35 : Alternative Design Pattern not using virtual //
     // 1) vitural clocking
     class GameCharacter
     {
         public:
         int healthValue() const
         {
             ...
             int retVal = doHealthValue(); // **
             ...
             return ret Val;
         }
         
         // **
         private:
         virtual int doHealthValue() const
         {
             ...
         } 
     };
     
     // 2) Function Pointer
     class GameCharacter;
     int defaultHealthCalc(const gameCharacter& gc);
                                    
     class GameCharacter
     {
         public:
         typedef int (*HealthCareFunc) (const GameCharacter&);
         
         explicit GameCharacter(HealthCalcFunc hcf = defaultHealathCalc):
         healthFunc(hcf) {}
         
         int healthValue() const
         {
             return healthFunc(*this);
         }
         
         private:
         HealthCalcFunc healthFunc;
     };
     // 3) tr1::fucntion
     class GameCharacter;
     int defaultHealthCalc(const gameCharacter& gc); 
     class GameCharacter
     {
         public:
         typedef std::tr1::function<int (const GameCharacter&)> HealthCalcFunc; //**
         explicit GameCharacer(HealthCalcFunc hcf = defaultHealthCalc):healthCalc(hcf) {}
         int healthValue() const
         {
             return helathFunc(*this);
         }
         ...
             
         private:
         HealthCalcFunc healthFunc;
     };
     short calcHealth(const gameCharacter&);
     struct HealthCalculator
     {
         int operator() (const GameCharacter&) const { ... }
     };
     class GameLevel
     {
         public:
         float health(const GameCharacter&) const;
         ...
     };
     class EvilBadGuy: public GameCharacter
     {
         ...
     };
     class EyeCandyCharacter:public GameCharacter
     {
         ...
     };
                                    
     EvilBadGuy ebg1(calcHealth);
     EyeCandyCharacter ecc1(HealthCalculator());
                                    
     GameLevel currentLevel;
     ...
     EvilBadGuy ebg2(std::tr1::bind(&GameLevel::health, currentLevel, _1);
     
     //4 Classical Design Pattern
                     
     class GameCharacter;
     class HealthCalcFunc
     {
         public:
         ...
         virtual int calc(const GameCharacter& gc) const
         {
             ...
         }
         ...
      };
      HealthCalcFunc defaultHealthCalc;             
      class GameCharacter
      {
          public:
          explicit GameCharacter(HealthCalcFunc *phcf = &defaultHealthCalc):pHealthCalc(phcf) {}
          
          int healthValue() const
          {
              return pHealthCalc->calc(*this);
          }
          ...
          private:
          helathCalcFunc *pHealthcalc;
                         
      };
      // 36. do not redeclare herited nonvirtual function  in derived class                                         
                                    
      // 37. do not redeclare herited basic parameter in derived class
      //X
      class Base { public : virtual void FUNC(enum color = Red) const = 0; } 
      class Child : Base { public: virtual void FUNC(enum color = Green) const ; } // X
                  
      // O
      class Base
      {
          public:
          virtual void FUNC(enum color = Red) const  { doIt(color) }; // **
          private:
          virtual void doIt(enum color) const = 0; // **
      };
      class Child : public Base
      {
          public:
          ...
          private:
          virtual void doIt(enum color) const; // **
      };        
     
                     
      // 39 : private inheritance : using for protected member approach, virtual function redeclarre
      // 40 : multiple inheritance ? : no recommend!
      class CLSA
      {
          public:
          virtual ~CLSA();
          virtual std::string name() const = 0;
          virtual std::string birthDate() const = 0;
      };
      class CLSB { ... };
      class CLSC
      {
          public:
          explicit CLSC(CLSB pid);
          virtual ~CLSC();
          virtual const char* theName() const;
          virtual const char* theBirthDate() const;
          virtual const char* valueDelimOpen() const;
          virtual const char* valueDelimClose() const;
          ...
       };
       class CLSD : public CLSA, private CLSC
       {
           public:
           explicit CLSA(CLSB pid):CLSC(pid) {}
           virtual std::string name() const { return CLSC::theName() ;} // A & C 
           virtual std::string birthDate() const { return CLSC::theBirthDate();} // A & C
           
           private:
           const char* valueDelimOpen() const { return "";} // C
           const char* valueDelimClose() const {return "";} // C
       };
           
                         
       // 41. Implicit Interface & complie time polymorphism        
       template<typename T>
       void doProcessing(T& w)
       {
           if (w.size() > 10 && w!=someNastyWidge)
           {
               T temp(w);
               temp.normalize();
               temp.swap(w);
           }
       }
                     
       // 42. typename
       // typename : tmeplate<typename A> = template<class A>
       // but typename when using overlapped dependant typename
       template<typename C>
       void print2nd(const C& container)
       {
           if (container.size() >= 2)
           {
               typename C::const_iterator iter(container.begin()); // **
               ...
           }
       }
       
       template<typename IterT>
       void workWithIterator(IterT iter)
       {
           typedef typename std::iterator_traits<IterT>::value_type value_type;
           value_type temp(*iter);
           ...
       }
                     
       // 43. approaching base class in template
       template<typename Company>
       class MsgSender
       {
           public:
           void sendClear(const MsgInfo& info)
           {
               std::string msg;
               Company c;
               c.SendCleartext(msg);
           }
           
           void sendSecret(const MsgInfo& info)
           {
               ...
           }
       };
       class LoggingMsgSender : public MsgSender<Company>
       {
           public:
           void sendClearMsg(const MsgInfo& info)
           {
               this->sendCelar(info);
           }
           ...
       };
                     
       // 44. code that is independant to parameter should be seperated into template
       template<typename T>
       class SquareMatrixBase
       {
           protected:
           SquareMatrixBase(std::size_t n, T *pMem) : size(n), pData(pMem) {}
           void setDataPtr(T *ptr) { pData = ptr;}
           ...
           private:
           std::size_t size;
           T *pData;
       };
       template<typename T, std::size_t n>
       class SquareMatrix : private SquareMatrixBase<T>
       {
           public:
           SquareMatrixBase<T>(n, data) {}
           ...
           private:
           T data[n*n];
       };
       ;
                     
       // 45. Member Function Template
       template<typename T>
       class SmartPtr
       {
           public:
           template<typename U>
           SmartPtr(const SmartPtr<U>& other) : helpPtr(other.get()) { ... }
           T* get() const { return helpPtr; }
           ...
           private:
           T *helpPtr;
       };
       
       template<class T> class shared_ptr
       {
           public:
           shared_ptr<shared_ptr const& r);
           template<class Y> shared_ptr<Y> const& r);
           shared_ptr& operator=(shared_ptr const& r);
           template<class Y> shared_ptr& operator=(share_ptr<Y> const& r);
       };
       
       // 46. Declare nonmember funtion in class template when type conversion
       template<typename T>
       class Rational
       {
           public:
           Rational(const T& numerator = 0, const T& denominator = 1);
           const T numerator() const;
           const T denominator() const;
           
           friend
               const Rational operator*(const Rational& lhs, const Rational& rhs)
           {
               return Rational(lhs.numerator() * rhs.numerator(),
                               lhs.denominator() * rhs.denominator());
           }
           
       };
               
           ...
       };
       template<typename T>
       class Rational<T> operator*(const Rational<T>& lhs, const Rational<T>& rhs) { ... }
                     
       // 47. traits with info class
       template<typename IterT, typename DistT>
       void doAdvance(IterT& iter,DistT d, std::random_access_itertator_tag)
       {
           iter += d;
       }
       // bidirectioanl iterator
       template<typename IterT, typename DistT>
       void doAdvance(IterT& iter,DistT d, std::bidirectional_iterator_tag)
       {
           if(d>=0) { while (d--) ++iter;}
           else { while (d++) --iter;}
       }
       // input iterator
       template<typename IterT, typename DistT>
       void doAdvance(IterT& iter,DistT d, std::std::input_iterator_tag)
       {
           if(d<0)
           {
               throw std::out_of_range("Negative distance");
           }
           while (d--) ++iter;
       }
       // call
       template<typename IterT, typename DistT>
       void advance(IterT& iter, DistT d)
       {
           doAdvance(iter, d, typename std::iterator_traits<IterT>::iterator_category());
       };
   
                         
                     
                     
       template<typename IterT, typename DistT>
       void advance(IterT& iter, DistT d)
       {
           if ()
           {
               iter += d;
           }
           else
           {
               if (d>=0) (wile (d--) ++iter;)
                   else
                   {
                       while (d++) --iter;
                   }
           }
       }
       
       // 48. template meta programming
       template<unsigned n>
       struct Factorial
       {
           enum { vlaue = n*Factorial<n-1>::value };
       };
       template<>
       struct Factorial<0>
       {
           enum {value = 1};
       };
       int main()
       {
           std::cout << Factorial<5>::value;
       }
           
       // 49. new oprator
       namespace std
       {
           typedef void (*new_handler)();
           new_handler set_new_handler(new_handler p) throw();
       }
       void outOfMem()
       {
           std::cerr << "Unable to satisfy request for memory";
           std::abort();
       }
       int main()
       {
           std::set_new_handler(outOfMem);
           int *pBigDataArray = new int[10000000L];
       }
                         
       class Widget
       {
           public:
           static std::new_handler set_new_handler(std::new_handler p) throw();
           static void * operator new(std::size_t size) throw(std::bad_alloc);
           
           private:
           static std::new_handler currentHandler;
       };
       std::new_handler Widget::set_new_handler(std::new_handler p) throw()
       {
           std::new_handler oldHandler = currentHandler;
           currentHandler = p;
           return oldHandler;
       }
                     
       class NewHandlerHolder
       {
           public:
           explicit NewHandlerHolder(std::new_handler nh) : handler(nh) {}
           ~NewHandlerHolder() { std::set_new_handler(handler);}
          
           private:
           std::new_handler handler;
           NewHandlerHolder(const NewHandlerHolder&);
           NewHandlerHolder& operator=(const NeewHandlerHolder&);
       };
       void * Widget::operator new(std::size_t size) throw(std::bad_alloc)
       {
           NewHandlerHolder h(std::set_new_handler(currentHandler));
           return ::operator new(size);
       }
       
       template<typename T>
       class NewHandlerSupport
       {
           public:
           static std::new_handler set_new_handler(std::new_handler p) throw();
           static void * operator new(std::size_t size) throw(std::bad_alloc);
           
           private:
           static std::new_handler curentHandler;
       };
                     
       template<typename T>
       std::new_handler
       NewHandlerSupport<T>::set_new_handler(std::new_handler p) throw()
       {
           std::new_handler oldHandler = currentHandler;
           currentHandler = p;
           return oldHandler;
       }
       
       template<typename T>
       void* NewHandlerSupport<T>::operator new(std::size_t size) throw(std::bad_alloc)
       {
           NewHandlerHolder h(std::set_new_handler(currentHandler));
           return ::operator new(size);
       }
                     
       template<typename T>
       std::new_handler NewHandlerSupport<T>::currentHandler = 0;
                     
       class Widget: public NewHandlerSUpport<Widget>
       {
           ...
       };
                         
       Widget *pw2 = new (std::nothrow) Widget;
                         
       // 50. why use new?
       // 51. standard of new & delete
       class Base
       {
           public:
           static void * operator new(std::size_t size) throw(std::bad_alloc);
           static void operator delete(void *rawMemory, std::size_t size) throw();
           ...
       };
       void Base::operator delete(void *rawMemory, std::size_t size) throw()
       {
           if (rawMemory == 0) return;
           if (size != sizeof(Base))
           {
               ::operator delete(rawMemory);
               return ;
           }
           return;
       }
       
       // 52. placement new & placement delete
       class Widget
       {
           public:
           // **** REMEMBER **** //
           // Basic new / delete 
           static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc) { return ::operator new(size); }
           static void operator delete(void *pMemory) throw() { ::operator delete(pMemory); }
           // placement new / delete
           static void* operator new(std::size_t size, void *ptr) throw() { return ::operator new(size, ptr); }
           static void operator delete(void *pMemory, void *ptr) throw() { return ::operator delete(pMemory, ptr); }
           // no exception new / delete
           static void* operator new(std::size_t size, const std::nothrow_t& nt) throw() { return ::operator new(size, nt); }
           static void operator delete(void *pMemory, const std::nothrow_t&) throw() { ::operator delete(pMemory); }
       };
       class Widget: public StandardNewDeleteForms
       {
           public:
           using StandardNewDeleteForms::operator new;
           using StandardNewDeleteForms::operator delete;
           
           static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc);
           static void operator delete(void *pMemory, std::ostream& logStream) throw();
       };
                     
       // 54. do not ignore warning message from complier
       // 55. STL
       // 56. Boost
                     
                         
         
                         
}




