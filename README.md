# deep-c-rsc
runescape classic ported to C with SDL. utilizes
[jcgo](https://github.com/ivmai/JCGO) to transpile the java to C, and patched
with [SDL](https://libsdl.org/) for audio/video output and keyboard/mouse input.

# build & run

    $ sudo apt install openjdk-11-jre gcc libsdl2-dev
    $ ./build.sh && ./mudclient

## license
Copyright 2021  2003Scape Team

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU Affero General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License along
with this program. If not, see http://www.gnu.org/licenses/.
