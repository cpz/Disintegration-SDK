#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x0060 (0x03F0 - 0x0390)
class AChaosSolverActor : public AActor
{
public:
	float                                              TimeStepMultiplier;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionDataSizeMax;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDataTimeWindow;                                  // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoCollisionDataSpatialHash;                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              CollisionDataSpatialHashRadius;                           // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionPerCell;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BreakingDataSizeMax;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakingDataTimeWindow;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoBreakingDataSpatialHash;                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              BreakingDataSpatialHashRadius;                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBreakingPerCell;                                       // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TrailingDataSizeMax;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailingDataTimeWindow;                                   // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinSpeedThreshold;                                // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinVolumeThreshold;                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasFloor;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         SpriteComponent;                                          // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
