#include <stdio.h>

int main(){
    int lines, line;

    scanf("%d", &lines);

    int total_runs[lines], current_runs[lines], balls_left[lines];
    for(line = 1; line<=lines; line++){
        scanf("%d %d %d", &total_runs[line], &current_runs[line], &balls_left[line]);
    }
    printf("\n");
    int balls_played;
    double cur_run_rate, req_run_rate, overs_played, overs_left;
    for(line = 1; line<=lines; line++){
        balls_played = 300 - balls_left[line];
        overs_played = (double) balls_played/6;
        overs_left = (double) balls_left[line]/6;
        cur_run_rate = (double) current_runs[line]/overs_played;
        req_run_rate = (double) (total_runs[line]-current_runs[line]+1)/overs_left;
        printf("%0.02lf %0.02lf", cur_run_rate, req_run_rate);
        printf("\n");
    }

    return 0;
}
