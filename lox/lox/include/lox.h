//
// Created by Camilo Parra on 2019-11-06.
//

#ifndef lox_h
#define lox_h


/* opens the desired storage by using keyring, enclave, etc
*
*  @param [in] `config` - a json string that details what or where key is stored, type of storage, name of storage
*  @param [out] `error` - an error structure that can be checked if an error occurs. Includes a code and string message. If success, no further checking is needed
*  @return 1 - success, 0 otherwise
*/


extern int32_t lox_open(const char * const config)

#endif //lox_h
