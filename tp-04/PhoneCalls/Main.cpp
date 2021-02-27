#include "Person.h"
#include "Phone.h"
#include "HomePhone.h"
#include "MobilePhone.h"

int main()
{
    Person paul { "Paul", 3 };
    HomePhone phone { paul, 3 };
    phone.ring();
    HomePhone far_phone { paul, -10 };
    far_phone.ring();

    const Phone& normal_phone = far_phone;
    normal_phone.ring();

  //  MobilePhone mobile_phone { paul };
    //const Phone& normal_phone = mobile_phone;
    //normal_phone.ring();

    //const Phone normal_phone = far_phone;
   // normal_phone.ring();
   
    return 0;
}
