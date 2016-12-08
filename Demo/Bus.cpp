#pragma once
#include "Includes.h"
#include "Bus.h"

//It's different, but not TOO different

Bus::Bus()
{
	model = BUS;
	acceleration = 59;
	maxSpeed = 74;
	weight = 24000;
	length = 540;
	width = 100;
	oversized = true;
	emergencyVehicle = false;
	activeEmergency = false;
}

Bus::~Bus()
{

}
