using System.Runtime.InteropServices;
class Application
{
	static void Main()
	{
		Hello();
	}
	[DllImport("Hello.dll")]
	static extern void Hello();
}