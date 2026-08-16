# Student Portal

A simple student portal application designed to provide students with a centralized interface for accessing their academic information and account features.

## Project Purpose

The Student Portal is intended to organize common student-related activities in a single application. It provides a structured foundation for authentication, profile management, dashboard access, and application preferences.

## Features

The application is planned around the following core features:

- Student login and authentication
- Student profile management
- Academic dashboard
- Application settings
- Basic student information management

## Project Structure

The project separates application source code, documentation, and configuration files to keep the repository organized.

<!-- ```text -->
student-portal/
├── src/
├── docs/
├── README.md
└── .gitignore


## Prerequisites

The project requires a C++ development environment and Git for source-code management.

Recommended tools include:

- GCC or another C++ compiler
- Git
- Visual Studio Code
- A Linux environment such as Ubuntu

## Getting the Project

Clone the repository using Git:

<!-- ```bash -->
git clone https://github.com/abhayamanasa/student-portal.git
cd student-portal

## Building the Application

After cloning the repository, compile the source files using a C++ compiler.

For a simple project containing a main source file, the application can be compiled with:

<!-- ```bash -->
g++ src/main.cpp -o student-portal

## Running the Application

After successful compilation, start the application from the terminal:

<!-- ```bash -->
./student-portal

## Login

The login feature provides a basic authentication flow for students. Users provide their credentials, which are validated before access to protected portal functionality is provided.

## Student Profile

The profile section is intended to provide students with access to their personal academic information. It also provides functionality for viewing and managing relevant profile details.

## Dashboard

The dashboard provides a central view of important student information. It is designed to give users a convenient starting point for accessing academic and account-related functionality.

## Settings

The settings section allows students to manage application preferences. It provides a dedicated location for configurable options and user-specific preferences.

## Development Workflow

The project follows a structured Git workflow where feature development, testing, and integration are performed through dedicated branches.

Feature branches are used for functionality such as:

- Login
- Profile
- Dashboard
- Settings

## Contribution Guidelines

Changes should be developed in focused feature branches and committed with descriptive messages. Each commit should represent a meaningful change to the project.

Before merging changes into the main branch, the implementation should be reviewed and tested.

## Useful Git Commands

Some commonly used commands during development are:

<!-- ```bash -->
git status
git add .
git commit
git branch
git switch
git merge
git log
