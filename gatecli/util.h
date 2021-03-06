/**
 * Various helper utilities to make writing/understanding
 * the CLI code a little bit easier.
 */

#ifndef GATE_UTIL_H
#define GATE_UTIL_H

/**
 * Checks to see whether the two given strings are equal to
 * each other, ignoring case.
 *
 * @param one the first string
 * @param two the second string
 * @return 1 to indicate equality, 0 otherwise
 */
int eq_ignore_case(const char *one, const char *two);

#endif // GATECLI_UTIL_H
