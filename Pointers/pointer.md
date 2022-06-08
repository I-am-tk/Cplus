# Pointer in C++

It stores address of variable

## Declare a pointer

```c++
int number {30};
int* p_number {}; // will initilize with null pointer
```

## Dynamic memory

```c++
int *p_number {new int{34}};
*p_number = 90;
delete p_number;
p_number = nullptr;
```

```c++
int *p_number {new(std::nothrow) int{34}};
if(p_number == nullptr){
  cout<< "Memory Allocation failed."
}
*p_number = 90;
delete p_number;
p_number = nullptr;
```

### Allocate dynamic array

```c++
int *p_number {new(std::nothrow) int[10]{}};
if(p_number == nullptr){
  cout<< "Memory Allocation failed."
}
delete[] p_number;
p_number = nullptr;
```

## References

```c++
int n = 1;
int &s = n;
s = 8;
cout<< n << "\n"; // 8
```

## Difference between Reference and Pointer

- Reference can't be chanaged.
- Reference need to initialized on declaration.
- References are somewhat like const pointer
