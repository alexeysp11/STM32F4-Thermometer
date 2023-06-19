/**
 * Project Stm32Project
 */


#include "Temperature.h"        // for Temperature class definition. 

/**
 * Temperature implementation
 */


/**
 * @return void
 */
void Temperature::Measure() 
{
    value = m_filter.Calculate( m_sensor.Get() ); 
}

/**
 * @return float
 */
float Temperature::GetValue() 
{
    return value;
}