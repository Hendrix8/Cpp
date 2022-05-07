if(NOT EXISTS "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/install_manifest.txt")
   message(FATAL_ERROR
      "Cannot find install manifest: \"/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/install_manifest.txt\"")
endif(NOT EXISTS "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/install_manifest.txt")

file(READ "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")

foreach(file ${files})
message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
   exec_program("/usr/local/Cellar/cmake/3.22.3/bin/cmake"
      ARGS "-E remove -f \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
   )
   if(NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
   endif(NOT "${rm_retval}" STREQUAL 0)
endforeach(file)
