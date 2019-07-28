/**
It is often recommended to use scanf/printf instead of cin/cout for a fast input and output.
 However, you can still use cin/cout and achieve the same speed as scanf/printf
 by including the following two lines in your main() function:

    ios_base::sync_with_stdio(false);
It toggles on or off the synchronization of all the C++ standard streams with their corresponding standard C streams
if it is called before the program performs its first input or output operation.
Adding ios_base::sync_with_stdio (false); (which is true by default) before any I/O operation avoids this synchronization.
It is a static member of function of std::ios_base.

    cin.tie(NULL);
tie() is a method which simply guarantees the flushing of std::cout before std::cin accepts an input.
This is useful for interactive console programs which require the console to be updated constantly but
also slows down the program for large I/O. The NULL part just returns a NULL pointer.





Moreover, you can include the standard template library (STL) with a single include:

    #include <bits/stdc++.h>
So your template for competitive programming could look like this:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
It is recommended to use cout << “\n”; instead of cout << endl;.
endl is slower because it forces a flushing stream, which is usually unnecessary (See this for details).
(You’d need to flush if you were writing, say, an interactive progress bar, but not when writing a million lines of data.)
Write ‘\n instead of endl.
**/



#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
    IOS
    cout<<"Gd"<<endl;

}
