/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** api
*/

#ifndef API_H_
#define API_H_

#ifdef __cplusplus
extern "C"
{
#endif

void *library_create();
void library_delete(void *library);
char *library_get_data();

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* !API_H_ */
