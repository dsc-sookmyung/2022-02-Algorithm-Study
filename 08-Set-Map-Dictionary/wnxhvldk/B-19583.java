import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.ParseException;
import java.util.HashSet;
public class no19583 {
    public static void main(String args[]) throws IOException, ParseException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String temp[] = reader.readLine().split(" ");
        String s = temp[0];
        String e = temp[1];
        String q = temp[2];
        String input;
        HashSet<String> chance = new HashSet<>();
        HashSet<String> result = new HashSet<>();
        int cnt = 0;
        while((input = reader.readLine()) != null){
            temp = input.split(" ");
            if(s.compareTo(temp[0]) >= 0){
                chance.add(temp[1]);
            }
            else if(e.compareTo(temp[0]) <= 0 && q.compareTo(temp[0]) >= 0){
                result.add(temp[1]);
            }
        }
        for(String str : chance){
            if(result.contains(str)){
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}