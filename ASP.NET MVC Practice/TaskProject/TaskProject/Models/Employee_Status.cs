using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace TaskProject.Models
{
    public class Employee_Status
    {
        public List<Employee> employees { get; set; }
        public List<Status> statuses { get; set; }
    }
}