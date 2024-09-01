#include<iostream>
using namespace std;
int main()
{ int finalresult =0;
int playQuiz(void);
char playagain;
play:
 finalresult = playQuiz ();
 cout<<"your total score is "<<finalresult;
if (finalresult>=6){
    cout<<"you are pass"<<endl;
    cout<<"Do you want to play again the QUIZ yes or no ? "<<endl;
    cin>>playagain;
    if(playagain=='y' || playagain=='y'){
       goto play;
    }
    else{
        cout<<"thankyou you to play quiz"<<endl;
    }
}
else {
    cout<<"you are fail"<<endl;
       cin>>playagain;
    if(playagain=='y' || playagain=='Y'){
        playQuiz();
    }
    else{
        cout<<"thankyou you to play quiz"<<endl;
    }
}
}
int playQuiz (){
    char c;
    char option;
    int score=0;
   playInsidefunction:
    cout<<"------------Welcome to QUIZ APPLICATION------------"<<endl;
 cout<<"-------Please follow the instruction----------"<<endl;
 cout<<"Step 1 : Quiz contains total 10 question"<<endl;
  cout<<"Step 2 : You will given 1 marks for each right ans"<<endl;
 cout<<"Step 3 : There will be no negative markng"<<endl;
  cout<<"Step 4 : Please press s to start the quiz "<<endl;
  cout<<" Step 5 :please select option a, b, c, d"<<endl;
    cout<<" Step 6 : If your score is greater than >=6, you will pass the quiz"<<endl;
cin>>c;

    if(c=='s'|| c=='S'){
        cout<<"Q1.  what is the capital of India "<<endl;
         cout<<"(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai"<<endl;
    
    cin>>option;
    if(option=='a' || option=='A'){
        score=score+1;
    }
    else{
        score=score+0;
    }
        cout<<"Q2. Who is the Prime Minister  of India "<<endl;
         cout<<"(a) Aditynath (b) Narendra Modi (c) kejriwal (d) Mamta Banerjee"<<endl;
    
    cin>>option;
    if(option=='b' || option=='B'){
        score=score+1;
    }
    else{
        score=score+0;
    }
        cout<<"Q3.  What is the national bird of India "<<endl;
         cout<<"(a)Pigeon (b) Sparrow (c) Peacock (d) Parrot"<<endl;
    
    cin>>option;
    if(option=='c' || option=='C'){
        score=score+1;
    }
    else{
        score=score+0;
    }    cout<<"Q4.  what is the national animal of India "<<endl;
         cout<<"(a) Tiger (b) Lion (c) Zebra (d) Wolf"<<endl;
    
    cin>>option;
    if(option=='a' || option=='A'){
        score=score+1;
    }
    else{
        score=score+0;
    }    cout<<"Q5.  what is the national flower of India "<<endl;
         cout<<"(a) lily (b) Sunflower (c) Rose (d) Loutus"<<endl;
    
    cin>>option;
    if(option=='d' || option=='D'){
        score=score+1;
    }
    else{
        score=score+0;
    }  
      cout<<"Q6. Who is th Chief Minister of UP "<<endl;
         cout<<"(a) Yogi Aditynath (b) Shivraj singh chouhan (c) Amit Shah (d) Ram Gopal"<<endl;
    
    cin>>option;
    if(option=='a' || option=='A'){
        score=score+1;
    }
    else{
        score=score+0;
    }
    cout<<"Q7. What is the capital of UP "<<endl;
         cout<<"(a) luckhnow (b) Praygraj (c) Mirzapur (d) Itawa"<<endl;
    
    cin>>option;
    if(option=='a' || option=='A'){
        score=score+1;
    }
    else{
        score=score+0;
    }
    cout<<"Q8. What is the capital of Jharkhand  "<<endl;
         cout<<"(a) Plamu (b) Ranchi (c) Ramgarh (d)  dhaanbad"<<endl;
    
    cin>>option;
    if(option=='b' || option=='B'){
        score=score+1;
    }
    else{
        score=score+0;
    }
    cout<<"Q9. Who is leader of congress "<<endl;
         cout<<"(a) Rahul (b) Soniya (c) kamalnath  (d) Ram gopal"<<endl;
    
    cin>>option;
    if(option=='a' || option=='A'){
        score=score+1;
    }
    else{
        score=score+0;
    }
    cout<<"Q10. Which of the following state comes in North "<<endl;
         cout<<"(a) Mumbai (b) gujarart (c) pune (d) Delhi"<<endl;
    
    cin>>option;
    if(option=='d' || option=='D'){
        score=score+1;
    }
    else{
        score=score+0;
    }
    } 
    else{
        cout<<"You Have entered wrong value, please enter the right text to start : s"<<endl;
    goto playInsidefunction;
    }
    return score;
}