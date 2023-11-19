document.addEventListener("DOMContentLoaded", function () {
  const projects = [
    { title: "Project 1", description: "Description of project 1" },
    { title: "Project 2", description: "Description of project 2" },
    // Add more projects here
  ];

  const projectList = document.getElementById("project-list");
  projects.forEach((project) => {
    let projectItem = document.createElement("div");
    projectItem.className = "project-item";
    projectItem.innerHTML = `<h3>${project.title}</h3><p>${project.description}</p>`;
    projectList.appendChild(projectItem);
  });
});
