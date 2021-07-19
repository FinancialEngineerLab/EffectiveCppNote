
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
      
         
         
 }




