gcc version 15.2.0 (Ubuntu 15.2.0-16ubuntu1)
Ubuntu clang version 21.1.8 (6ubuntu1)
GCC_OK/CLANG_OK

-- The C compiler identification is GNU 15.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/dimitrios/code/tiny-c/build

cmake --build build
[ 50%] Building C object CMakeFiles/hello.dir/hello/hello.c.o
[100%] Linking C executable hello
[100%] Built target hello

cmake --build build -v --clean-first
Change Dir: '/home/dimitrios/code/tiny-c/build'

Run Clean Command: /usr/bin/cmake -E env VERBOSE=1 /usr/bin/gmake -f Makefile clean
/usr/bin/gmake  -f CMakeFiles/Makefile2 clean
gmake[1]: Entering directory '/home/dimitrios/code/tiny-c/build'
/usr/bin/gmake  -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/clean
gmake[2]: Entering directory '/home/dimitrios/code/tiny-c/build'
/usr/bin/cmake -P CMakeFiles/hello.dir/cmake_clean.cmake
gmake[2]: Leaving directory '/home/dimitrios/code/tiny-c/build'
gmake[1]: Leaving directory '/home/dimitrios/code/tiny-c/build'

Run Build Command(s): /usr/bin/cmake -E env VERBOSE=1 /usr/bin/gmake -f Makefile
/usr/bin/cmake -S/home/dimitrios/code/tiny-c -B/home/dimitrios/code/tiny-c/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/bin/cmake -E cmake_progress_start /home/dimitrios/code/tiny-c/build/CMakeFiles /home/dimitrios/code/tiny-c/build//CMakeFiles/progress.marks
/usr/bin/gmake  -f CMakeFiles/Makefile2 all
gmake[1]: Entering directory '/home/dimitrios/code/tiny-c/build'
/usr/bin/gmake  -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/depend
gmake[2]: Entering directory '/home/dimitrios/code/tiny-c/build'
cd /home/dimitrios/code/tiny-c/build && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/dimitrios/code/tiny-c /home/dimitrios/code/tiny-c /home/dimitrios/code/tiny-c/build /home/dimitrios/code/tiny-c/build /home/dimitrios/code/tiny-c/build/CMakeFiles/hello.dir/DependInfo.cmake "--color=" hello
gmake[2]: Leaving directory '/home/dimitrios/code/tiny-c/build'
/usr/bin/gmake  -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/build
gmake[2]: Entering directory '/home/dimitrios/code/tiny-c/build'
[ 50%] Building C object CMakeFiles/hello.dir/hello/hello.c.o
/usr/bin/cc   -std=c2x -Wall -Wextra -Werror -g -fsanitize=address,undefined -MD -MT CMakeFiles/hello.dir/hello/hello.c.o -MF CMakeFiles/hello.dir/hello/hello.c.o.d -o CMakeFiles/hello.dir/hello/hello.c.o -c /home/dimitrios/code/tiny-c/hello/hello.c
[100%] Linking C executable hello
/usr/bin/cmake -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=1
/usr/bin/cc -fsanitize=address,undefined -Wl,--dependency-file=CMakeFiles/hello.dir/link.d CMakeFiles/hello.dir/hello/hello.c.o -o hello
gmake[2]: Leaving directory '/home/dimitrios/code/tiny-c/build'
[100%] Built target hello
gmake[1]: Leaving directory '/home/dimitrios/code/tiny-c/build'
/usr/bin/cmake -E cmake_progress_start /home/dimitrios/code/tiny-c/build/CMakeFiles 0

