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

// Class V1CoverSystemRuntime.CoverHintComponent
// 0x0000 (0x0290 - 0x0290)
class UCoverHintComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoverSystemRuntime.CoverHintComponent");
		return ptr;
	}

};


// Class V1CoverSystemRuntime.CoverManagerComponent
// 0x0000 (0x0290 - 0x0290)
class UCoverManagerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoverSystemRuntime.CoverManagerComponent");
		return ptr;
	}

};


// Class V1CoverSystemRuntime.CoverNode
// 0x0038 (0x0060 - 0x0028)
class UCoverNode : public UObject
{
public:
	unsigned char                                      coverTypeFlags;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     WorldPosition;                                            // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	EeCoverOccupancyState                              m_occupancyState;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoverSystemRuntime.CoverNode");
		return ptr;
	}

};


// Class V1CoverSystemRuntime.CoverSystemActor
// 0x0030 (0x03C0 - 0x0390)
class ACoverSystemActor : public AActor
{
public:
	TArray<struct FCoverNodeTile>                      m_coverNodeTiles;                                         // 0x0390(0x0010) (Edit, ZeroConstructor, EditConst)
	class ARecastNavMesh*                              m_coverNavMesh;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoverSystemRuntime.CoverSystemActor");
		return ptr;
	}


	void OnTileRebuilt(class ARecastNavMesh** NavMesh, int* tileIndex);
	class UCoverNode* GetClosestCoverNode(struct FVector* Position, float* MaxDistance);
};


// Class V1CoverSystemRuntime.CoverSystemSettings
// 0x0030 (0x0058 - 0x0028)
class UCoverSystemSettings : public UObject
{
public:
	float                                              MaxAgentRadius;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              radiusTolerance;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              additionalDistanceBetweenCoverSpots;                      // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              highCoverHeight;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              lowCoverHeight;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              lowCoverAimHeight;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              aimSphereCheckRadius;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              aimCheckDistance;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               useSimpleCoverGenerator;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              coverHullScale;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              hullSimplificationEpsilon;                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoverSystemRuntime.CoverSystemSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
