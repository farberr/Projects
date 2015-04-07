using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Linq;
using System.Net;
using System.Web;
using System.Web.Mvc;
using TaskProject.Models;

namespace TaskProject.Controllers
{
    public class TaskController : Controller
    {
        private TaskContext db = new TaskContext();

        public ActionResult Search(string SearchBox)
        {
            var tasks = from t in db.Tasks select t;
            DateTime searchDate;
            if(!String.IsNullOrEmpty(SearchBox))
            {
          
                    bool isDateSearch = DateTime.TryParse(SearchBox, out searchDate);
                    if (isDateSearch)
                    {
                        tasks = tasks.Where(s => s.AssignDate.Equals(searchDate));
                    }
                    else
                    {

                        tasks = tasks.Where(t =>                                  
                                     t.TaskName.Contains(SearchBox)
                                     || t.TaskDescription.Contains(SearchBox)
                                     || t.employee.EmployeeName.Contains(SearchBox)
                                     || t.status.StatusName.Contains(SearchBox));
                    }
            }

            return View("Index", tasks.ToList());
                
            
        }

        // GET: /Task/
        public ActionResult Index()
        {
            var tasks = db.Tasks.Include(t => t.employee).Include(t => t.status);
            return View(tasks.ToList());
        }

        // GET: /Task/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            TaskDetail taskdetail = db.Tasks.Find(id);
            if (taskdetail == null)
            {
                return HttpNotFound();
            }
            return View(taskdetail);
        }

        // GET: /Task/Create
        public ActionResult Create()
        {
            ViewBag.EmployeeId = new SelectList(db.Employees, "EmployeeId", "EmployeeName");
            ViewBag.StatusId = new SelectList(db.Statuses, "StatusId", "StatusName");
            return View();
        }

        // POST: /Task/Create
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create([Bind(Include="TaskDetailId,TaskName,TaskDescription,AssignDate,EmployeeId,StatusId")] TaskDetail taskdetail)
        {
            if (ModelState.IsValid)
            {
                db.Tasks.Add(taskdetail);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            ViewBag.EmployeeId = new SelectList(db.Employees, "EmployeeId", "EmployeeName", taskdetail.EmployeeId);
            ViewBag.StatusId = new SelectList(db.Statuses, "StatusId", "StatusName", taskdetail.StatusId);
            return View(taskdetail);
        }

        // GET: /Task/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            TaskDetail taskdetail = db.Tasks.Find(id);
            if (taskdetail == null)
            {
                return HttpNotFound();
            }
            ViewBag.EmployeeId = new SelectList(db.Employees, "EmployeeId", "EmployeeName", taskdetail.EmployeeId);
            ViewBag.StatusId = new SelectList(db.Statuses, "StatusId", "StatusName", taskdetail.StatusId);
            return View(taskdetail);
        }

        // POST: /Task/Edit/5
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include="TaskDetailId,TaskName,TaskDescription,AssignDate,EmployeeId,StatusId")] TaskDetail taskdetail)
        {
            if (ModelState.IsValid)
            {
                db.Entry(taskdetail).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            ViewBag.EmployeeId = new SelectList(db.Employees, "EmployeeId", "EmployeeName", taskdetail.EmployeeId);
            ViewBag.StatusId = new SelectList(db.Statuses, "StatusId", "StatusName", taskdetail.StatusId);
            return View(taskdetail);
        }

        // GET: /Task/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            TaskDetail taskdetail = db.Tasks.Find(id);
            if (taskdetail == null)
            {
                return HttpNotFound();
            }
            return View(taskdetail);
        }

        // POST: /Task/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            TaskDetail taskdetail = db.Tasks.Find(id);
            db.Tasks.Remove(taskdetail);
            db.SaveChanges();
            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}
