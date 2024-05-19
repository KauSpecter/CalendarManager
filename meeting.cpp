#include "meeting.h"


meeting::meeting(string ho , date dt,timee tm , string des , string loc) {
        host=ho;
        d=dt;
        t=tm;
        des=description;
        loc=location;
    }
void meeting::sethost(int hos) {
    host=hos;
}

string meeting::gethost() {
      return host;
}
        