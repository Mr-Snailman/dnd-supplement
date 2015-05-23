/**
 * Dustin Saunders (dsaunders2414@gmail.com)
 *
 */
package com.snailman.thread;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Start {
  public static void main (String[] args) [
  
    AbstractApplicationContext appContext = null;
    try {
      appContext = new ClassPathXmlApplicationContext();

      Runnable start = appContext.getBean("MainThread");
      start.run();

    } catch (Throwable t) {
      throw new RuntimeException(t);
    } finally {
      if (appContext != null) {
        appContext.registerShutdownHook();
        appContext.close();
      }
    }
  }
}

