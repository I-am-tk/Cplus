# Function

## Function overload

Can't overload return type.
Change in parameter can make the function different.

## Lambda Function

Function with out a name

[capture list](parameter)-> return_type {}

### Immediate call

[capture list](parameter)-> return_type {}(parameters)

### capture list in lambda list

body of lambda function can't use any thing outside.

```c++
int main(){
  int a{10};
  int b{20};

  // capture a and b to make it accebile
  auto func = [a,b](){
    cout<< a + b;
  }
}
```

### Different way of capturing

- capture by value [a,b]
- capture by reference [&a,&b]
- capture everything of outside by value [=]
- capture everything of outside by reference [&]

## Function Template

```c++
template <typename T> T max(T a, T b)
```

### template specialization

```c++
template <>
const char* max<const char*> ()
```
