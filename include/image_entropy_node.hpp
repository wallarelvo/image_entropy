
const int width = 160;
const int height = 120;
const int interval = 10;
const int num_events = 255 / interval + 1;
const int queue_size = 1;

void initialize_occs(int occs[width][height][num_events]);
double calculate_entropy(int occs[width][height][num_events], int x, int y);
int sum_row(int occs[width][height][num_events], int x, int y);
void reset_occs(int occs[width][height][num_events], int x, int y);
void pose_callback(geometry_msgs::PoseStamped);
