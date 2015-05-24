package com.snailman.thread;

public class MainThread implements Runnable {

  private int health = 10;
  private int eHealth = 10;
  private String status = "Normal";
  private String eStatus = "Normal";

  @Override
  public void run () {
    int stillRun = 0;
    printGreeting();
    while (stillRun >= 0) {
      //current status
      printStatus();

      //menu for things to choose
      printMenu();

      //calc fight
      
      //check for win cond.

      //show results

    }
  }

  public void printGreeting() {
    System.out.println("Welcome to this program. FIGHT!");
  }

  public void printMenu() {
    System.out.println("Choose an option:");
    System.out.println("1 - Basic");
    System.out.println("2 - Special");
    System.out.println("3 - Items");
    System.out.println("4 - Run");
  }

  public void printStatus() {
    System.out.println("Your health: "+health);
    System.out.println("Status Effect:"+status);
    System.out.println("Enemy's health: "+eHealth);
    System.out.println("Status Effect:"+eStatus);
  }
}

