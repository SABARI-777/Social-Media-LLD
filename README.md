 Console-Based Social Media System (C++ OOPS Project)

 Project Overview

This project is a **console-based social media application** developed using **C++ and Object-Oriented Programming principles**.
It simulates core features of modern social media platforms like user accounts, posts, stories, chat systems, friend management, notifications, and privacy controls.

The goal of this project is to demonstrate strong understanding of:

* Object-Oriented Programming (OOPS)
* Modular System Design
* Layered Architecture
* SOLID Principles (partially applied)
* Real-world feature modeling

---

 Features Implemented

👤 User Management

* User Registration
* Secure Login
* Profile Creation & Viewing
* Public / Private Account Handling

 📝 Post System

* Create Posts
* Like Posts
* Comment on Posts
* View User Posts
* View All Posts
* Privacy Control (Only friends can view private accounts)

 📖 Story System

* Add Stories
* Like & Comment
* View Stories
* Similar logic to Post System

 👥 Friend System

* Send Friend Requests
* Accept / Reject Requests
* View Friend List
* Mutual friend logic
* Friend-based privacy access

 💬 Chat System

* One-to-One Messaging
* Chat History Storage
* Real-time style message simulation

 🔔 Notification System

* Notifications for:

  * Posts
  * Stories
  * Likes
  * Comments
  * Friend Requests
  * Logins
* User-specific notification storage

 📰 Feed System

* View posts from multiple users
* Like and comment directly from feed

---

 🏗️ Architecture

The project follows a **layered modular architecture**:

 1️⃣ UI Layer

Handles user interaction via console menus
Examples:

* LoginUI
* ProfileUI
* PostUI
* FriendUI
* ChatUI

 2️⃣ Service Layer

Contains core business logic
Examples:

* PostService
* StoryService
* FriendManager
* ChatService
* NotificationService

 3️⃣ Model Layer

Represents data structures
Examples:

* User
* Profile
* Post
* Story
* Comment
* Like
* Friend

---

 🧩 OOPS Concepts Used

| Concept        | Usage                                                     |
| -------------- | --------------------------------------------------------- |
| Encapsulation  | Private data with public getters/setters                  |
| Abstraction    | UI interacts with services without knowing internal logic |
| Inheritance    | (Partially applicable) Shared behavior modeling           |
| Polymorphism   | Virtual functions & overriding                            |
| Modularity     | Separate classes for each feature                         |
| Static Members | Shared storage simulation                                 |

---

 🔒 Privacy Logic

* Public accounts → Anyone can view posts
* Private accounts → Only friends can view posts
* Friend system integrated with content visibility

---

 🛠️ Technologies Used

* Language: C++
* Concepts: OOPS, STL
* Platform: Console Application
* Compiler: g++

---

 Learning Outcomes

This project demonstrates:

 Real-world system modeling
 Multi-module architecture
 Feature integration
 Clean separation of concerns
 Practical OOPS implementation

---

 Future Improvements

1 Apply SOLID principles fully
2 Introduce Database Manager layer
3 Use inheritance for Post/Story common logic
4 Add file-based persistent storage
5 Build GUI version
6 Add follower system

---

 How to Run

1. Compile all files
2. Run main.cpp
3. Use menu-driven options to explore features

Comments to run:
1 g++ main.cpp -o main.exe
2 main.exe
---

 Author

Sabari D
OOPS & System Design Enthusiast
