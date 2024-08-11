import java.util.*;

class Job {
    char id;
    int deadline;
    int profit;

    Job(char id, int deadline, int profit) {
        this.id = id;
        this.deadline = deadline;
        this.profit = profit;
    }
}

public class JobScheduling {
    public static int scheduleJobs(List<Job> jobs) {
        // Sort jobs based on their profit in descending order
        Collections.sort(jobs, (a, b) -> b.profit - a.profit);

        int maxDeadline = 0;
        for (Job job : jobs) {
            maxDeadline = Math.max(maxDeadline, job.deadline);
        }

        // Array to store the scheduled jobs
        char[] result = new char[maxDeadline];

        // Array to track if a deadline is occupied
        boolean[] slots = new boolean[maxDeadline];

        // Fill all slots as available initially
        Arrays.fill(slots, false);

        // Schedule jobs
        int totalProfit = 0;
        for (Job job : jobs) {
            // Find a slot before the deadline for this job
            for (int i = Math.min(maxDeadline - 1, job.deadline - 1); i >= 0; i--) {
                if (!slots[i]) {
                    result[i] = job.id;
                    slots[i] = true;
                    totalProfit += job.profit; // Add profit of the scheduled job
                    break;
                }
            }
        }

        // Print scheduled jobs
        System.out.println("Scheduled jobs:");
        for (char jobId : result) {
            if (jobId != '\u0000') {
                System.out.print(jobId + " ");
            }
        }
        System.out.println();

        return totalProfit;
    }

    public static void main(String[] args) {
        List<Job> jobs = new ArrayList<>();
        jobs.add(new Job('a', 2, 100));
        jobs.add(new Job('b', 1, 19));
        jobs.add(new Job('c', 2, 27));
        jobs.add(new Job('d', 1, 25));
        jobs.add(new Job('e', 3, 15));
        
        System.out.println("Jobs:");
        for (Job job : jobs) {
            System.out.println("Job: " + job.id + ", Deadline: " + job.deadline + ", Profit: " + job.profit);
        }
        int totalProfit = scheduleJobs(jobs);
        System.out.println("Total Profit: " + totalProfit);
    }
}
