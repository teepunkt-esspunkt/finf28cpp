// enum.cpp 
// enum-Konstanten in einer Klasse verwenden.
// ---------------------------------------------------

#include <iostream>
using namespace std;

class Ampel
{
  public:      // Aufzählung für Klasse Ampel
    enum Status { aus, rot, gruen, gelb };

  private:
    Status status;

  public:  
    Ampel( Status s = aus) : status(s) {}
    Status getStatus() const {  return status; }
    void setStatus( Status s)
    { 
      switch(s)
      { case aus:    cout << "    AUS      ";  break;
        case rot:    cout << "    ROT      ";  break;
        case gruen:  cout << "    GRUEN    ";  break;
        case gelb:   cout << "    GELB     ";  break;
        default:     return; 
      }
      status = s;
    }
};

int main()
{
   cout << "Einige Anweisungen mit Ampel-Objeken!\n"
        << endl;
    
   Ampel A1, A2(Ampel::rot);

   Ampel::Status as;
   as = A2.getStatus();

   if( as == Ampel::rot)
   {
      A1.setStatus( Ampel::rot);
      A2.setStatus( Ampel::gelb);
   }
   cout << endl;

   return 0;
}
