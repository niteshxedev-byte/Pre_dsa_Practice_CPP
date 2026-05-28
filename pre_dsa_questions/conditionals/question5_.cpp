#include <iostream>
using namespace std;



int main(){
    int total_assignments;
    cout<<"Enter total Assisments and exams";
    cin>> total_assignments;

    double weighted_sum = 0;
    double total_weight =0;
    for(int i=1;i<=total_assignments;i++){
        double score,weight;
    
        cout<<"\nAsignment"<<i<<"ka score (out of 100): ";
        cin >> score;

        cout<<"\nAsignment"<<i<<"ka weight  (%): ";
        cin >> weight;


weighted_sum = weighted_sum + (score*weight);
total_weight = total_weight + weight;

    }

    double final_grade = weighted_sum/total_weight;
    cout<<"final grade"<< final_grade<<endl;
    return 0 ;
}