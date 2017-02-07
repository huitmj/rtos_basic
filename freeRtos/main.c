#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"

static void myTask1(void *pvParameters) {
  long loop;
  while (1) {
    printf("1 ");
    for (loop=327670;loop>0;loop--);
  }
  vTaskDelete(NULL);
}

static void myTask(void *pvParameters) {
  char *task_name;

  task_name = (char*)pvParameters;

  while (1) {
    printf("%s ", task_name);
    vTaskDelay(1);
  }
}

static const char *task2_name = "2";
static const char *task3_name = "3\r";

int main(void) {
  printf("Hello ");
  xTaskCreate(myTask1, "Task 1", 1000, NULL, 1, NULL);
  xTaskCreate(myTask, "Task 2", 1000, (void*)task2_name, 1, NULL);
  xTaskCreate(myTask, "Task 3", 1000, (void*)task3_name, 1, NULL);
  vTaskStartScheduler();
  while (1)
    ;
  return 0;
}
