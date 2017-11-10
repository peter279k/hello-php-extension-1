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

PHP_MINIT_FUNCTION(hello)
{
    /* Here the module is being initialized */
    return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(hello)
{
    /* Here the module is deinitialized */
    return SUCCESS;
}

PHP_RINIT_FUNCTION(hello)
{
#if defined(ZTS) && defined(COMPILE_DL_HELLO)
    ZEND_TSRMLS_CACHE_UPDATE();
#endif

    return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(hello)
{
    return SUCCESS;
}

PHP_MINFO_FUNCTION(hello)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "hello support", "enabled");
    php_info_print_table_end();
}

zend_module_entry hello_module_entry = {
    STANDARD_MODULE_HEADER,
    "hello", /* Extension name */
    hello_functions, /* zend_function_entry */
    PHP_MINIT(hello), /* PHP_MINIT - Module initialization */
    PHP_MSHUTDOWN(hello), /* PHP_MSHUTDOWN - Module shutdown */
    PHP_RINIT(hello), /* PHP_RINIT - Request initialization */
    PHP_RSHUTDOWN(helo), /* PHP_RSHUTDOWN - Request shutdown */
    PHP_MINFO(hello), /* PHP_MINFO - Module info */
    PHP_HELLO_VERSION, /* Version */
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_HELLO
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(hello)
#endif
