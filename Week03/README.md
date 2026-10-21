# Условни оператори

### Тернарен оператор

```c++
(<condition>) ? <result_if_true> : <result_if_false>
```

```c++
(num / 10 > 1) ? 12 : 13;
```

### Оператор If

```c++
if (<condition>) {
    // code
} else if (<condition>) {
    // code
} else {
    // code
}
```

```c++
int num = 10;

if (num < 5) {
    std::cout << "Lower than five";
} else if (num < 15) {
    std::cout << "Lower than fifteen and higher than five";
} else {
    std:: cout << "Higher than fifteen";
}
```

### Оператор Switch

```c++
switch(<expression>) {
    case(<condition>):
        //code
        break;
    case(<condition>):
        //code
        break;
    ....
    default:
        //code
        break;
}
```

```c++
char c = 'a';
switch(c) {
    case 'n':
        std::cout << "letter is n";
        break;
    case 'b':
        std::cout << "letter is b";
        break;
    case 'd':
        std::cout << "letter is d";
        break;
    default:
        std::cout << "letter is undefined";
}
```

Какво става, ако няма break?

```c++
char c = 'y';
switch (c)
{
    case 'y':
    case 'Y':
        cout << "The user entered \"Yes\".\n";
        break;
    case 'n':
    case 'N':
        cout << "The user entered \"No\".\n";
        break;
    default:
        cout << "The user entered something else.\n";
}
```

### Влагане на условни оператори

```c++
if (<condition>) {
    if (<condition>) {
        ...
    } else {

    }
}
```
