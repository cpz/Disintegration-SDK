#pragma once

#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleSize
struct UDroneCapsuleComponent_SetCapsuleSize_Params
{
	float*                                             InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InHalfHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleRadius
struct UDroneCapsuleComponent_SetCapsuleRadius_Params
{
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleHalfHeight
struct UDroneCapsuleComponent_SetCapsuleHalfHeight_Params
{
	float*                                             HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere
struct UDroneCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeightWithoutHemisphere;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize
struct UDroneCapsuleComponent_GetUnscaledCapsuleSize_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleRadius
struct UDroneCapsuleComponent_GetUnscaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere
struct UDroneCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight
struct UDroneCapsuleComponent_GetUnscaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetShapeScale
struct UDroneCapsuleComponent_GetShapeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere
struct UDroneCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeightWithoutHemisphere;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize
struct UDroneCapsuleComponent_GetScaledCapsuleSize_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleRadius
struct UDroneCapsuleComponent_GetScaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere
struct UDroneCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight
struct UDroneCapsuleComponent_GetScaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
