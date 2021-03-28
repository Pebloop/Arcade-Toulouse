/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** api
*/

#ifndef API_H_
#define API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#include <time.h>

typedef struct library_info {
    enum { GAME, GRAPHIC } type;
    const char *name;
    time_t date;
    const char *desc;
} library_info_t;

EXPORT void *library_create();
EXPORT void library_delete(void *library);
EXPORT library_info_t library_get_data();

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* !API_H_ */
