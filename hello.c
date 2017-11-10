/* hello extension for PHP */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_hello.h"

const zend_function_entry hello_functions[] = {
    PHP_FE_END
};

zend_module_entry hello_module_entry = {
    STANDARD_MODULE_HEADER,
    "hello", /* Extension name */
    hello_functions, /* zend_function_entry */
    NULL, /* PHP_MINIT - Module initialization */
    NULL, /* PHP_MSHUTDOWN - Module shutdown */
    NULL, /* PHP_RINIT - Request initialization */
    NULL, /* PHP_RSHUTDOWN - Request shutdown */
    NULL, /* PHP_MINFO - Module info */
    PHP_HELLO_VERSION, /* Version */
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_HELLO
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(hello)
#endif
