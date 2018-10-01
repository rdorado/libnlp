#include<string>

namespace libnlp{
   class vectorizer{
      public:
         virtual int transform() = 0;
   };
}

class vectorizerImpl : public libnlp::vectorizer{
   public:
      int transform(){
         return 1;
      }
};

class A{};

class B : A {};


int main(){


   vectorizerImpl vec();

   B();
}
