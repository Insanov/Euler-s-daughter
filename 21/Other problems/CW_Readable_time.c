char *human_readable_time (unsigned seconds, char *time_string);

int main(){
    char time_string[9];

    human_readable_time(86400, time_string);

    return 0;
}

char *human_readable_time (unsigned seconds, char *time_string){
    *time_string = '\0'; // write to time_string
	int hours = seconds / 3600;
    int minutes = seconds % 3600 / 60;
    int secs = seconds % 3600 % 60 / 60;
    *(time_string) = hours / 10 + 48;
    *(time_string + 1) = hours % 10 +  48;
    *(time_string + 2) = ':';
    *(time_string + 3) = minutes / 10 + 48;
    *(time_string + 4) = minutes % 10 + 48;
    *(time_string + 5) = ':';
    *(time_string + 6) = secs / 10 + 48;
    *(time_string + 7) = secs % 10 + 48;
    *(time_string + 8) = '\0';

    return time_string; 
}