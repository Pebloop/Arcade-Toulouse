/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** api
*/

#ifndef API_H_
#define API_H_

#ifdef _WIN32 // windows is shit
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>

/**
 * @brief A structure containing global metadata about a library
 */
typedef struct library_info {
    void *data; // Is the same
} library_info_t;

/**
 * @brief Instanciate the library
 *
 * @return void* A pointer to an instance of a class implementing IGame for game
 * libraries or an instance of a class implementing IGraphic for graphical
 * libraries
 */
EXPORT void* library_create();

/**
 * @brief Destroy and delete a library instance
 *
 * @param library The instance to delete
 */
EXPORT void library_delete(void* library);

/**
 * @brief Retrieve the library metadata structure
 *
 * @return library_info_t A structure giving information about this library
 */
EXPORT library_info_t library_get_data();

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* !API_H_ */
