/*
 * IMU.c
 *
 *  Created on: Sep 11, 2024
 *      Author: PC_6285_YÄ°
 */

//merhababenguven


#include "bmi160/bmi160_wrapper.h"
#include "imu.h"

extern I2C_HandleTypeDef hi2c3;
BMI160_t bmiimu_t;


void IMU_Init()
{
	BMI160_init(&bmiimu_t);
}


void IMU_Get_Data(IMU *IMU_t)
{

	bmi160ReadAccelGyro(&bmiimu_t);

	IMU_t -> Ivmeolcer_t.x_ekseni = bmiimu_t.BMI160_Ax_f32 ;
	IMU_t -> Ivmeolcer_t.y_ekseni = bmiimu_t.BMI160_Ay_f32 ;
	IMU_t -> Ivmeolcer_t.z_ekseni = bmiimu_t.BMI160_Az_f32 ;
	IMU_t -> Aciolcer_t.x_ekseni  = bmiimu_t.BMI160_Gx_f32 ;
	IMU_t -> Aciolcer_t.y_ekseni  = bmiimu_t.BMI160_Gy_f32 ;
	IMU_t -> Aciolcer_t.z_ekseni  = bmiimu_t.BMI160_Gz_f32 ;

}
