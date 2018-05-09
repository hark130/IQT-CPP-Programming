# C++ Standard Template Library

---

![](/assets/5h7ir719arzz.jpg)

### What is the STL?

The **Standard Template Library **is a software library for C++ programming language. It contains a number of useful ready to use functionality, to include:

**Containers**

* **Strings: **length, substr, find, append, operator\[\], data, c\_str
* **Vectors: **operator\[\], front, back, data, emplace\_back, empty, clear
* **Maps:** emplace, operator\[\], at, erase

**Streams:** cin, cout, ofstream, ifstream

**Templates:** using generic types with the STL.

**Iterators:** range based for loops, flavors, begin, end, back\_inserter

**Algorithms:** erase, remove, accumulate, iota, find, copy, transform, replce, sort

**Lambdas:** using anonymous functions.

### Why use the STL?

* Don’t work harder than you have to
* The STL probably has a cleaner solution than your custom made one
* When programming, try and find a solution that is in the STL.
* If you need a data structure, there is probably already a container in the STL
* If writing a common algorithmic task, there is probably already a generic version of it in the STL \(think counting, searching, replacing, finding\)

**If you don't use the STL you'll...**

* probably make mistakes
* waste your time
* generate less efficient code

#### 

---

## Let's Take a Look at an Example...

#### What's going on here?

```cpp
int g(int a[],int l, int r)
{
    int pivot, i, j, t;
    pivot = a[l];
    i = l; j = r + 1;
    while (true) 
    {
        do ++i, while(a[i] <= pivot && i <= r);
        do --j, while(a[j] > pivot);
        if (i >= j) break;
        t = a[i]; a[i] = a[j]; a[j] = t;
    }
    t = a [l]; a[l] = a[j]; a[j] = t;
    return j;
}

void f(int a[], int l, int r)
{
    int j;
    if (l < r)
    {
        j = g(a, l, r);
        f(a, l, j-1);
        f(a, j+1, r);
    }
}

int a[] = {2, 8, 5, 6, 1, 1, 0};
f(a);
```

#### Yeah, it's a mess. This isn't though...

```cpp
vector<int> a({2, 8, 5, 6, 1, 1, 0});
std::sort(a.begin(), a.end());
```

If you use the std::sort, it's clear what you are doing.

Writing your own common algorithm makes your code obscure, more error-prone, and a waste of time.

### **Use the STL!**

---

### Accessing the Standard Library

As you may have guessed,** std::&lt;library routine&gt;** is how you access standard library routines. **std **stands for _standard**. **_The :: allows you to access the _namespace. _And the **&lt;library routine&gt; **is what we wish to utilize from the standard library. As stated in Ch1: Namespaces... it's often bad practice to bring in the entire std namespace. This could result in namespace collisions and such; though this generally isn't the case in smaller programs. You are not restricted from using the entire std library in your source code. Just understand it's risks. 

