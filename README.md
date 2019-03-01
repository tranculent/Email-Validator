# Email-Validator
Simple program that checks if an email is valid under the conditions that I have given.

The good part about this program is that it could be a template for you. For example, if you want to check for other conditions, you can just copy paste my code and change it to whatever conditions you want to apply.

Once it gets to '!', make *at* equal to 1 and after that if there a dot is encountered, add one to a variable I created called *dotCounted*. Once it hits two, break from the loop and print a message.
```
if(dotCounted == 2) {
  printf("Invalid email address, more than 1 dots in the domain name!");
  break;
}
```

If there is a '+', then break.

```
if(newArr[i] == '+'){
  printf("Invalid email address, a '+' has been detected in the domain name.");
  isThereAPlus = 1;
  break;
}
```

And in the end of the program, I say if there are not 2 dots encountered and there are not any '+' encountered, then print a vmessage that says the given email address has been valid.

```
if(dotCounted != 2 && isThereAPlus == 0) {
  printf("It is a valid email address.");
}
```
