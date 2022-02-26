# From C# to Common C
_© 2022 Daniel Giversen_

The foundation is the books __C Programming for Dummies__ (Gookin 2020) and __C Programming Language__ (Kernighan & Ritchie 1988). The goal is to help experienced C# developers transition their experience to C programming.

It is a project in continous development, along the path, that I comprehend the C-languge. This repository will include the relevant 

## Key differences between C# and C
- _C_ has no `string` or `byte` keywords
- _C_ has no `namespaces`
- _C_ is not __Object Oriented Programming__ (OOP) 
- _C_ has no _garbage collection_
- _C_ has pointers, which is considered _unsafe code_ in _C#_

## Common C
Along with the transition, I will develop a minor language library called [_Common C_][1]. The main purpose is to achieve optimized _ahead of time_ compilation. Atm. you need to _build_ the C# code, and then _publish_ it as a _single file application_ to achieve that goal. but _trimming_ does not work well with _.NET_, resulting in bulky file sizes.

Along the way, I might add options for . For now _OOP_ can only be achieved by making libraries with the reused code. Avoid naming variables, functions etc. with identical names as i C#. It is allowed in _C_, but might result in unintended behaviour (read __result in bugs__).

The inspiration will be from _C#_,_C++_, _Objective-C_, _Object Pascal_, Comal80 etc. to even out the differences between _C#_ and _C_.

In a perfect world _c# code_ could be compiled with a _C compiler_, but this is not yet possible. In time _Common C_ might be _THE LANGUAGE to rule them all!_ as well as the favoured programming language for beginners.

## Guide to reading _C Programming for Dummies_
As an experienced C# programmer, the chapters 1-10 can be skimmed:
- most data types are the same as in _C#_ (p. 423)
- there is no `string` type in _C_ - instead _C_ has `char *` e.g. `char *stringField` - _Common C_ adds `string`
- there is no `byte` type in _C_ - instead _C_ has `unsigned char` - _Common C_ adds `byte`
- _C_ use `printf()` instead of `Console.Write()`& `Console.WriteLine()`
- _Gookin_ scorns `gets`, but Visual Studio 2022 will not compile `fgets` due to _buffer overload_

## C Development in Visual Studio
### Previous requirements
- Download and install [_Visual Studio 2022 Community Edition_](https://visualstudio.microsoft.com/downloads/) with
	-_Linq to SQL tools_
	- relevant _workloads_
		- _.NET desktop development_
		- _Desktop development with C++_
		- _Mobile development with C++_
		- _Universal Windows Platform_
		- _Mobile Development with C++_
		- _Linux and embedded development with C++_
		- _Data Storage and processing_
- Download [ConsoleApp_cc.zip](https://github.com/comcf/commonc/tree/main/bin/ConsoleApp_cc.zip) and place it in your project templates folder e.g. _%USERPROFILE%\Documents\Visual Studio 2022\Templates\ProjectTemplates\_

You might not need all workloads at first, but most will be needed for future development.

### Business as usual
I shall not elaborate on using Visual Studio, but _Microsoft_ (MS) has a [tutorial][2].

Create a new Common C project:
- press _Crtl+Shift+N_
- set language as _C_
- set platform as _All platforms_
- set project type as _Console_
- choose _Console App_
- press _Next_
- ...

## Intended improvements
- __Common C__ _Nuget-package_ with templates
- _OOP_ and _namespaces_ in _Common C
- Få Net-API'et til at virke

## References
[1]: https://github.com/comcf/commonc/
[2]: https://visualstudio.microsoft.com/vs/getting-started/

## Litteratur
- Gookin, D. (2020). _C Programming For Dummies_ (2nd ed.). Hoboken, NJ: John Wiley & Sons, Inc.
- Kernighan, B. & Ritchie, D. (1988). _C Programming Language_ (2nd ed.). London: Pearson.
