### C++ is C with Classes, advance version of C, develope by Bjarne Stroustrups in 1979 at Bells Lab

---

## Applications 

 1. Operating systems- mac Os X, microsoft windows, microsoft office, IDE Visual studio, internet explorer are written in c++.

 2. Games - 3d games

 3. GUI based applications-  most applications from Adobe- photoshop, illustrator,etc. are developed using c++.

 4. Web browsers- mozilla firefox

 5. Embedded systems, Banking, Compilers, Database Management Software - MySQL, Cloud / Distributed Systems, Libraries- Tensorflow, Switches

---

 ## Code Editors

 ### Codeblocks, VS code, DevC++, TurboC

---

 ### Header files (compulsory): 
   ```
   #include<iostream>
   ```
---

### Structure of Basic c++ code: 

```
  #include<iostream>
  using namespace std;

  int main(){

    int x=5;
    char y='>';
    cout<<"Hello, World! "<<x<<" Bye";
    cout<<y;
  return 0;
  }

```

### User Input in C++:
```
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 2 nos.: ";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition result is: "<<c;
    
    return 0;

}
```
### If-else statement

Checks condition, if true executes statements inside if block, otherwise it executes statements inside else block when conditon will be false

```
if(condition){
    statements;
}
else{
    statements;
}
```

