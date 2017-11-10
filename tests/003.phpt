--TEST--
hello_test2() Basic test
--SKIPIF--
<?php
if (!extension_loaded('hello')) {
	echo 'skip';
}
?>
--FILE--
<?php 
say_hello('TDC');
?>
--EXPECT--
Hello TDC!
