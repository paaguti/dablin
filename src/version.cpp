/*
    DABlin - capital DAB experience
    Copyright (C) 2016-2019 Stefan Pöschel

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "version.h"

void fprint_dablin_banner(FILE *f) {
	fprintf(f, "DABlin v%s - capital DAB experience\n", DABLIN_VERSION);
	fprintf(f, "Plays a DAB/DAB+ audio service from an ETI-NI or an EDI AF stream.\n");
	fprintf(f, "  https://github.com/Opendigitalradio/dablin\n");
	fprintf(f, "\n");
}
