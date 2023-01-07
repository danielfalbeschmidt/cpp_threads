<h1>Thread using benefits</h1>

The purpose of this project is to compare two c++ programs, both assigned to complete a simple job of filling an array of the size one hundred million (100,000,000) integers. The first program completes the task only in the main thread while the second program utilises 10 additional threads. The processor times for both processes were recorded using the Linux Bash simple command <i>time</i>. The <i>.cpp</i> files were compiled using the <i>g++</i> compiler (<i>-pthread</i> flag added to <i>eleven_threads.cpp</i> compilation).

<h2>Results</h2>
<b>one_thread.cpp</b>: Using only one (the main) thread, the average processing time for six tests was <b>387 ms</b>. This time was also the sum of user and kernel times.
<b>eleven_threads.cpp</b>: Using eleven (10 + the main) threads, the average processing time for six test was <b>97 ms</b>. This time was approximately one seventh of the sum of user and kernel times.

<h2>Conclusion</h2>
Compared to using only one thread to complete the task, with ten additional threads the process speed <b>quadrupled</b> while totally consuming 1 ½ times more CPU time.
