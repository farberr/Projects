using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Web;

namespace TaskProject.Models
{
    public class TaskInitializer : DropCreateDatabaseIfModelChanges<TaskContext>
    {
        protected override void Seed(TaskContext context)
        {
            var employees = new List<Employee>
            {
                new Employee{EmployeeName = "James Dean"},
                new Employee{EmployeeName = "Lynda Berry"}
            };
            foreach (var temp in employees)
            {
                context.Employees.Add(temp);
            }
            context.SaveChanges();

            var statuses = new List<Status>
            {
                new Status{StatusName = "Open"},
                new Status{StatusName = "Code Review"}
            };
            foreach (var temp in statuses)
            {
                context.Statuses.Add(temp);
            }
            context.SaveChanges();

            var tasks = new List<TaskDetail>
            {
                new TaskDetail{TaskName = "Learn C#", TaskDescription="Learn C# using video", AssignDate = DateTime.Parse("2014-01-02"), EmployeeId = 1, StatusId = 2},
                new TaskDetail{TaskName = "Learn MVC", TaskDescription="Learn MVC using sample projects", AssignDate = DateTime.Parse("2014-02-04"), EmployeeId = 1, StatusId = 1}
            };
            foreach (var temp in tasks)
            {
                context.Tasks.Add(temp);
            }
            context.SaveChanges();
        }
    }
}