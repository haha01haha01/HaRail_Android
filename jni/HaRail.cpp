/* HaRail - Public transport fastest-route finder for Israel Railways
* Copyright(C) 2014  haha01haha01

* This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

* This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#include "HaRail/HaRail/lib_main.h"
#include <string.h>
#include <jni.h>

extern "C" jstring
Java_com_haha01haha01_harail_MainActivity_mainHaRail( JNIEnv* env,
                                                  jobject thiz,
												  jint date,
												  jint source_station,
												  jint time,
												  jint dest_station)
{
	string result = HaRail::lib_main(date, source_station, time, dest_station);
    return env->NewStringUTF(result.c_str());
}
