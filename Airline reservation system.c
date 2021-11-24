using system;
using system.collections.Generic;
using system.Linq;
using system.Text;
using system.Threading.Tasks

namespace ch8_19_AirlineReservationSystemYT
{
    class Program
    {
     public static bool[] seats;
     public static int totalAssignedFirstClass;
     public static int totalAssignedSecondClass;

     static void Main(string[] args)
     {
         seats = new bool[11];
         int selectedClass = 0;

         for(int i = 0;i<=10;i++)
         {
             seats[i] = false;

             for(int i = 1;i<=10;i++)
             }
             Console.WriteLine("Please type i for first class or 2 for economy class");
             SelectedClass = Convert.ToInt32(Console.Readline());

             while(SelectedClass < 1 || SelectedClass > 2)
             {
                 console.WriteLine("Please only enter 1 or 2 for first class or economy class");
                 SelectedClass = Convert.ToInt32(Console.ReadLine());
             }
             if (SelectedClass == 1)
             {
                if (totalAssignedFirstclass == && totalAssignedSecondclass < 5)
               {
                   console.WriteLine("Sorry, first class is full.Do you want to get ticket for economy class? Y-N");
                   if (Console.ReadLine().Equals("N"))
                   {
                       Console.writeLine("Next plane leaves in 3 hours");
                       i--;
                   }
               }
               totalassignedFirstClass();
             }
             else
             {
             assignedSecondClass();
             }
     }
     else if(totalAssignedFirstClass < 5)
     {
         assignFirstClass();
     }
     else
    }
    if (totalAssignedFirstclass == && totalAssignedSecondclass < 5)
      console.WriteLine("Sorry, first class is full.Do you want to get ticket for First class? Y-N");
      if (Console.ReadLine().Equals("N"))
      {
       Console.writeLine("Next plane leaves in 3 hours");
       i--;
      }
      else
      {
          assignFirstClass();
      }
    }
    Console.writeLine();
    Console.writeLine("sorry, the plane is full. Next one leaves in 3 hours.");
    Console.ReadLine();
}
public static assignFirstClass()
{
    bool noDuplicate = false;
    Random rand = new Random();
    int index = 0;

    while (!noDuplicate)
    {
        noDuplicate = true;
        index = rand.Next(1,6);
        if(seats[index] == true)
            noDuplicate = false;
        {
            seats[index] = true;
            totalassignedFirstClass++;
            console.WriteLine("Assigned Seat {0:N0}",index);
        }
        public static void assignSecondClass()
        {
        bool noDuplicate = false;
      Random rand = new Random();
      int index = 0;

       while (!noDuplicate)
       {
         noDuplicate = true;
        index = rand.Next(6, 11);
        if(seats[index] == true)
            noDuplicate = false
       }
        seats[index] = true;
            totalassignedSecondClass++;
            console.WriteLine("Assigned Seat {0:N0}",index);
        }
    }
}
    console.writeLine();
