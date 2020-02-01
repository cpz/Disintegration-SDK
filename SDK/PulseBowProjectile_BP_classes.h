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

// BlueprintGeneratedClass PulseBowProjectile_BP.PulseBowProjectile_BP_C
// 0x0028 (0x0618 - 0x05F0)
class APulseBowProjectile_BP_C : public AProjectileActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UForceFeedbackEffect*                        rumbleEvent;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraShake*                                CameraShake;                                              // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnFXDuration;                                           // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	class UForceFeedbackAttenuation*                   Attenuation;                                              // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PulseBowProjectile_BP.PulseBowProjectile_BP_C");
		return ptr;
	}


	void Event_OnStick(struct FHitResult* HitResult);
	void ExecuteUbergraph_PulseBowProjectile_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
