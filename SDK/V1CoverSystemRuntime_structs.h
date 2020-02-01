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

// Enum V1CoverSystemRuntime.eCoverOccupancyState
enum class EeCoverOccupancyState : uint8_t
{
	eCoverOccupancyState__Vacant   = 0,
	eCoverOccupancyState__Claimed  = 1,
	eCoverOccupancyState__Occupied = 2,
	eCoverOccupancyState__Invalid  = 3,
	eCoverOccupancyState__eCoverOccupancyState_MAX = 4
};


// Enum V1CoverSystemRuntime.eCoverFlag
enum class EeCoverFlag : uint8_t
{
	eCoverFlag__HighRightEdge      = 0,
	eCoverFlag__HighLeftEdge       = 1,
	eCoverFlag__LowRightEdge       = 2,
	eCoverFlag__LowLeftEdge        = 3,
	eCoverFlag__TopEdge            = 4,
	eCoverFlag__Low                = 5,
	eCoverFlag__High               = 6,
	eCoverFlag__NONE               = 7,
	eCoverFlag__eCoverFlag_MAX     = 8
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1CoverSystemRuntime.PrimitiveCoverDataDyanmic
// 0x0018
struct FPrimitiveCoverDataDyanmic
{
	class UPrimitiveComponent*                         primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct V1CoverSystemRuntime.ActorCoverDataStatic
// 0x0058
struct FActorCoverDataStatic
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct V1CoverSystemRuntime.CoverNodeTile
// 0x00D0
struct FCoverNodeTile
{
	struct FIntPoint                                   tileCoords;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                tileIndex;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UCoverNode*>                          coverNodes;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
	class ACoverSystemActor*                           m_coverSystem;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UPrimitiveComponent*, struct FPrimitiveCoverDataDyanmic> m_dynamicPrimitiveCoverDataMap;                           // 0x0028(0x0050) (ZeroConstructor, Transient)
	TMap<class AActor*, struct FActorCoverDataStatic>  m_staticActorCoverDataMap;                                // 0x0078(0x0050) (ZeroConstructor, Transient)
	int                                                m_generatedCoverNodeCount;                                // 0x00C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
