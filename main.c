//
// Created by nicole on 2017/3/5.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "ccronexpr.h"


int
main ()
{
    char expression[] = "/5 * * * * ? ";

    printf("%s\n", expression);
    cron_expr *expr = NULL;

    const char* err;
    expr = cron_parse_expr("*/85700 * * * * ? ", &err);
    printf("second size is %d\n", sizeof(expr->seconds));

    return 0;

}