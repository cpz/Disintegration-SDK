#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum V1DroneRuntime.eFlyToState
enum class EeFlyToState : uint8_t
{
	eFlyToState__Staging           = 0,
	eFlyToState__Planning          = 1,
	eFlyToState__Flying            = 2,
	eFlyToState__Success           = 3,
	eFlyToState__Failed            = 4,
	eFlyToState__Aborted           = 5,
	eFlyToState__eFlyToState_MAX   = 6
};


// Enum V1DroneRuntime.eDroneNavQueryStatus
enum class EeDroneNavQueryStatus : uint8_t
{
	eDroneNavQueryStatus__Unscheduled = 0,
	eDroneNavQueryStatus__InProgress = 1,
	eDroneNavQueryStatus__Success  = 2,
	eDroneNavQueryStatus__Failure  = 3,
	eDroneNavQueryStatus__QueryHasNoSolution = 4,
	eDroneNavQueryStatus__TimedOut = 5,
	eDroneNavQueryStatus__eDroneNavQueryStatus_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1DroneRuntime.DroneNavQueryParams
// 0x0028
struct FDroneNavQueryParams
{
	bool                                               bPlanTakeOffAndLanding;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FlightAltitude;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingAngle;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlexibleOriginGoal;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              QueryTimeout;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRescheduleQuery;                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipOptimizationPass;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x001A(0x000E) MISSED OFFSET
};

// ScriptStruct V1DroneRuntime.DroneNavDebugParams
// 0x0018
struct FDroneNavDebugParams
{
	bool                                               DrawOriginDestination;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizePath;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeInRealTime;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeWaypointFixup;                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineDuration;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PreviousLineColor;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurrentLineColor;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      NextLineColor;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1DroneRuntime.DroneFlyToDebugParams
// 0x0004 (0x001C - 0x0018)
struct FDroneFlyToDebugParams : public FDroneNavDebugParams
{
	bool                                               bVisualizePawnAsVoxels;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct V1DroneRuntime.DroneFlyToContext
// 0x01B8
struct FDroneFlyToContext
{
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0000(0x01B8) MISSED OFFSET
};

// ScriptStruct V1DroneRuntime.DroneNavPathTask
// 0x0170
struct FDroneNavPathTask
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct V1DroneRuntime.DroneNavQueryData
// 0x0130
struct FDroneNavQueryData
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
