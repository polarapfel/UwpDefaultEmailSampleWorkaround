# UwpDefaultEmailSampleWorkaround
Working around a parsing bug when using mailto protocol activation in UWP/C#

Using mailto protocol activation in UWP using C# is currently broken as parsing email addresses from the People app fails due to a parsing problem.

You can work around this issue by doing your own parsing, in this sample using a little C++ written helper.

The issue is known and will be fixed eventually.
