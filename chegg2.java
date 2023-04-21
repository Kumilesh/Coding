import java.util.*;
class chegg2
{
public static void main(String[] args)
{
    List<String> list=new ArrayList<String>(); 
    Scanner sc=new Scanner(System.in);
    int ch;
    System.out.println("1.Build Guitar:");
     System.out.println("2.Display List of Guitar:");
      System.out.println("3.Exit:");
    do{
        System.out.print("choose menu[1..3]:");
        ch=sc.nextInt();
        if(ch==1)
        {
        System.out.println("1.Acoustic");
        System.out.println("2.Electric");
        System.out.println("3.Acoustic Electric");
         System.out.print("Input guitar type[1..3]:");
         int gui=sc.nextInt();
         String st=" ";
         if(gui==1)
         {
            st+="Acoustic Guitar";
            if(Math.random()>0.5)
            {
                st+=" - warm";
            }
            else{
                st+=" - bright";
            }
         }
         else if(gui==2)
         {
             st+="Electric guitar";
            System.out.println("Enter type");
             String ty=sc.nextLine();
             sc.nextLine();
             System.out.print("input switch position:");
             int pos=sc.nextInt();
             System.out.print("Input tone :");
             int tone=sc.nextInt();
             System.out.print("Input volume :");
             int vol=sc.nextInt();
             st+= " - "+ ty;
             st+=" - "+tone;
             st+=" - "+vol;
             st+=" - "+pos;

         }
         else if(gui==3)
         {
             st+="Acoustic Electric Guitar - crunch - 0 - 0";
         }
        list.add(st);

        }
        if(ch==2)
        { System.out.println("[Guitar type]-[GuitarSoundType]-[Tone]-[Volume]-[SwitchPosiyion]");
            for( String str: list)
            {
                System.out.println(str);
            }
        }
    }while(ch!=3);
}
}