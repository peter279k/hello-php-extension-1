--TEST--
say_hello() test without parameters
--SKIPIF--
<?php
if (!extension_loaded('hello')) {
	echo 'skip';
}
?>
--FILE--
<?php 
say_hello();
?>
--EXPECT--
Hello World!
