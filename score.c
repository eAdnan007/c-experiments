#include <stdio.h>

int main(){
    int lines, c;

    printf("Lines:");
    scanf("%d", &lines);

    printf("Provide your input(as \"Total opposition runs\" \"Current batting runs\" \"Balls left\")\n");
    int total_runs[lines], current_runs[lines], balls_left[lines];
    for(c = 1; c<=lines; c++){
        scanf("%d %d %d", &total_runs[c], &current_runs[c], &balls_left[c]);
    }

    int balls_played;
    double cur_run_rate, req_run_rate, overs_played, overs_left;
    for(c = 1; c<=lines; c++){
        balls_played = 300 - balls_left[c];
        overs_played = (double) balls_played/6;
        overs_left = (double) balls_left[c]/6;
        cur_run_rate = (double) current_runs[c]/overs_played;
        req_run_rate = (double) (total_runs[c]-current_runs[c]+1)/overs_left;
        printf("%0.02lf %0.02lf\n", cur_run_rate, req_run_rate);
    }

    return 0;
}
