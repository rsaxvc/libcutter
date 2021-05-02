/*
 * libcutter - xy cutter control library
 * Copyright (c) 2010 - libcutter Developers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Should you need to contact us, the author, you can do so at
 * http://github.com/vangdfang/libcutter
 */
#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

struct xy
{
    double x;
    double y;
	xy(){};
	xy(double _x, double _y){x=_x;y=_y;};
	~xy(){};

    //These comparison operators have no idea of floating point tolerance
    //Nor that of the underlying machines, so they should only be used
    //for exact comparisons.
    bool operator==(const xy & that)
    {
        return x == that.x && y == that.y;
    }
    bool operator!=(const xy & that)
    {
        return x != that.x || y != that.y;
    }

};

typedef uint32_t individual_key_t;
typedef individual_key_t ckey_type[4];
#endif
