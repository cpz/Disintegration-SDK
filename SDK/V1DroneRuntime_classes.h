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

// Class V1DroneRuntime.BTTask_DroneFlyTo
// 0x0138 (0x01A8 - 0x0070)
class UBTTask_DroneFlyTo : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      FlightLocationKey;                                        // 0x0070(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FlightResultKey;                                          // 0x0098(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      KeyToFlipFlopWhenTaskExits;                               // 0x00C0(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     WaypointProximity;                                        // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndpointProximity;                                        // 0x00F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDroneNavQueryParams                        QueryParams;                                              // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FDroneFlyToDebugParams                      DebugParams;                                              // 0x0128(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class ADroneNavMesh*                               NavMesh;                                                  // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToDestinationUponFailure;                        // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0151(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.BTTask_DroneFlyTo");
		return ptr;
	}

};


// Class V1DroneRuntime.DroneCapsuleComponent
// 0x0010 (0x05D0 - 0x05C0)
class UDroneCapsuleComponent : public UShapeComponent
{
public:
	float                                              CapsuleHalfHeight;                                        // 0x05C0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x05C4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.DroneCapsuleComponent");
		return ptr;
	}


	void SetCapsuleSize(float* InRadius, float* InHalfHeight, bool* bUpdateOverlaps);
	void SetCapsuleRadius(float* Radius, bool* bUpdateOverlaps);
	void SetCapsuleHalfHeight(float* HalfHeight, bool* bUpdateOverlaps);
	void GetUnscaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void GetScaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight_WithoutHemisphere();
	float GetScaledCapsuleHalfHeight();
};


// Class V1DroneRuntime.DroneNavMesh
// 0x0308 (0x0698 - 0x0390)
class ADroneNavMesh : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0390(0x0118) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAutoGenerateBounds;                                      // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZGridSize;                                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_worldExtents;                                           // 0x04C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoxelCollisionProfileName;                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnoreForCollision;                               // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBoxComponent*                               WorldBoundaryVisualizer;                                  // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDisplayWorldBoundary;                                    // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              DebugVoxelsLineThickness;                                 // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1A0];                                     // 0x04F8(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.DroneNavMesh");
		return ptr;
	}

};


// Class V1DroneRuntime.DronePathFollowingComponent
// 0x0000 (0x0358 - 0x0358)
class UDronePathFollowingComponent : public UV1PathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.DronePathFollowingComponent");
		return ptr;
	}

};


// Class V1DroneRuntime.DronePathVisualizationActor
// 0x0030 (0x03C0 - 0x0390)
class ADronePathVisualizationActor : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               m_meshComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.DronePathVisualizationActor");
		return ptr;
	}

};


// Class V1DroneRuntime.EnvQueryGenerator_AerialGrid
// 0x00F8 (0x0148 - 0x0050)
class UEnvQueryGenerator_AerialGrid : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   GridExtentsX;                                             // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   GridExtentsY;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   GridExtentsZ;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   GridSpacing;                                              // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GridCenter;                                               // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderBoolValue                    MustBeTraversable;                                        // 0x0118(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.EnvQueryGenerator_AerialGrid");
		return ptr;
	}

};


// Class V1DroneRuntime.EnvQueryItemType_AerialPoint
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_AerialPoint : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.EnvQueryItemType_AerialPoint");
		return ptr;
	}

};


// Class V1DroneRuntime.EnvQueryTest_AerialCeiling
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_AerialCeiling : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.EnvQueryTest_AerialCeiling");
		return ptr;
	}

};


// Class V1DroneRuntime.EnvQueryTest_AerialCover
// 0x0008 (0x01C8 - 0x01C0)
class UEnvQueryTest_AerialCover : public UEnvQueryTest
{
public:
	class UClass*                                      CoverContext;                                             // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.EnvQueryTest_AerialCover");
		return ptr;
	}

};


// Class V1DroneRuntime.GPTask_DronePathPostProcess
// 0x0038 (0x00D8 - 0x00A0)
class UGPTask_DronePathPostProcess : public UV1GameplayTask
{
public:
	class APawn*                                       m_queryOwner;                                             // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1DroneRuntime.GPTask_DronePathPostProcess");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
