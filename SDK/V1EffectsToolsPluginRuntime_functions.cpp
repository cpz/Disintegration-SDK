
#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function V1EffectsToolsPluginRuntime.V1EffectActor.OnSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent** system                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AV1EffectActor::OnSystemFinished(class UParticleSystemComponent** system)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1EffectsToolsPluginRuntime.V1EffectActor.OnSystemFinished");

	AV1EffectActor_OnSystemFinished_Params params;
	params.system = system;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
