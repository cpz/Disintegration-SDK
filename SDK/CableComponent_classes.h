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

// Class CableComponent.CableActor
// 0x0008 (0x0398 - 0x0390)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0650 - 0x05D0)
class UCableComponent : public UMeshComponent
{
public:
	bool                                               bAttachStart;                                             // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachEnd;                                               // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05D2(0x0006) MISSED OFFSET
	struct FComponentReference                         AttachEndTo;                                              // 0x05D8(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x05F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x05F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableLength;                                              // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x0608(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x060C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0615(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0616(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x061C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0630(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0638(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndToComponent(class USceneComponent** Component, struct FName* SocketName);
	void SetAttachEndTo(class AActor** Actor, struct FName* ComponentProperty, struct FName* SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
