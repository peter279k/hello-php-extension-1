# Hello World PHP Extension

This is a simple php extension that demonstrates the extension development process. This extension was used as example for the "PHP: Extending The Core - Why You Should Learn It" talk, presented at the The Developer's Conference 2k17 at Porto Alegre - Brazil.

## Requirements

As this extension is simple, you don't need all the development environment tools installed, but if you want to make changes you must configure the php devel environment as described in the [official documentation](http://php.net/manual/en/internals2.buildsys.environment.php).

## Installation

To install the extension just perform the commands described below:

```
$ git clone git@github.com:devsdmf/hello-php-extension.git && cd hello-php-extension
$ phpize
$ ./configure
$ make
$ sudo make install
```

## Documentation

This extension has only one function that is described below:

### say_hello

(PHP 5 >= 5.5, PHP 7)
say_hello - Say hello to someone.

#### Description
`void say_hello( string $who = 'World' )`

Say hello to _$who_.

## Examples

Say hello to world.

Code:
```php
say_hello();
```

Output:
```
Hello World!
```

Say hello to TDC.

Code:
```php
say_hello('TDC');
```

Output:
```
Hello TDC!
```

## License

This project is licensed under the [MIT license](LICENSE).

