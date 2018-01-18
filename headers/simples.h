#ifndef __CISCORD_SIMPLES_H__
#define __CISCORD_SIMPLES_H__

#define DMSG const char*
#define SNOWFLAKE_LEN 256
#define SNOWFLAKE snowflake_t
#define PERMISSIONS long // TODO: does this need to be 'long long'?
#define ROLE SNOWFLAKE


typedef char snowflake_t[SNOWFLAKE_LEN+1];
//                         room for \0 ^

#define SNOWFLAKE snowflake_t
#endif