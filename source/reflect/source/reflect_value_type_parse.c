/*
*	Reflect Library by Parra Studios
*	Copyright (C) 2016 - 2017 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
*
*	A library for provide reflection and metadata representation.
*
*/

/* -- Headers -- */

#include <reflect/reflect_value_type.h>
#include <reflect/reflect_value_type_parse.h>

/* -- Methods -- */

value value_type_parse(value v, type_id id)
{
	/* TODO: Implement complete parse between all types
	 * with correct abstraction like value_type_stringify
	 * 			String -> Boolean
	 *			String -> Numbers
	 * 			String -> Floats
	 * 			...
	 */
	value result = NULL;

	/* TODO: Remove this, implement a table */
	if (id == TYPE_CHAR)
	{
		char c[2];

		c[0] = value_to_char(v);

		c[1] = '\0';

		result = value_create_string(c, 1);

		if (result == NULL)
		{
			return NULL;
		}
	}

	if (result == NULL)
	{
		return NULL;
	}

	value_destroy(v);

	return result;
}