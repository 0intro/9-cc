Highly portable C compiler suite, including supporting tools, originally developed for Plan 9 from Bell Labs and later also used for Inferno.

It targets x86, amd64, SPARC, MIPS, ARM, and PowerPC. ARM64 will shortly be added.

The 680x0 and Alpha suites have been retired, but the source is still available for study.

It is small and fast. It includes a stripped-down preprocessor.

Because all components are written portably, it is easy to use as a cross-compiler. (On Plan 9 itself, a cross-compiler is made simply by compiling a target compiler with the host compiler. There are no extra configuration files.)

The suite is pleasant to port, partly because the distribution of effort across the components is unusual.

The source code of the compiler suite is included in both Plan 9 and Inferno distributions, but this provides an independent source that might be used by other projects.

The project contains the source of the assemblers, compilers and loaders; supporting commands such as ar, nm, size etc.; the Acid debugger; supporting libraries; and the portable build environment, including mk.