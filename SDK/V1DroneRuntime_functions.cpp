
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

// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InHalfHeight                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::SetCapsuleSize(float* InRadius, float* InHalfHeight, bool* bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleSize");

	UDroneCapsuleComponent_SetCapsuleSize_Params params;
	params.InRadius = InRadius;
	params.InHalfHeight = InHalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::SetCapsuleRadius(float* Radius, bool* bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleRadius");

	UDroneCapsuleComponent_SetCapsuleRadius_Params params;
	params.Radius = Radius;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleHalfHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::SetCapsuleHalfHeight(float* HalfHeight, bool* bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.SetCapsuleHalfHeight");

	UDroneCapsuleComponent_SetCapsuleHalfHeight_Params params;
	params.HalfHeight = HalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OutRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutHalfHeightWithoutHemisphere (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::GetUnscaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere");

	UDroneCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadius != nullptr)
		*OutRadius = params.OutRadius;
	if (OutHalfHeightWithoutHemisphere != nullptr)
		*OutHalfHeightWithoutHemisphere = params.OutHalfHeightWithoutHemisphere;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OutRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutHalfHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleSize");

	UDroneCapsuleComponent_GetUnscaledCapsuleSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadius != nullptr)
		*OutRadius = params.OutRadius;
	if (OutHalfHeight != nullptr)
		*OutHalfHeight = params.OutHalfHeight;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetUnscaledCapsuleRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleRadius");

	UDroneCapsuleComponent_GetUnscaledCapsuleRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetUnscaledCapsuleHalfHeight_WithoutHemisphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere");

	UDroneCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetUnscaledCapsuleHalfHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetUnscaledCapsuleHalfHeight");

	UDroneCapsuleComponent_GetUnscaledCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetShapeScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetShapeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetShapeScale");

	UDroneCapsuleComponent_GetShapeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OutRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutHalfHeightWithoutHemisphere (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::GetScaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere");

	UDroneCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadius != nullptr)
		*OutRadius = params.OutRadius;
	if (OutHalfHeightWithoutHemisphere != nullptr)
		*OutHalfHeightWithoutHemisphere = params.OutHalfHeightWithoutHemisphere;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OutRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutHalfHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDroneCapsuleComponent::GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleSize");

	UDroneCapsuleComponent_GetScaledCapsuleSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadius != nullptr)
		*OutRadius = params.OutRadius;
	if (OutHalfHeight != nullptr)
		*OutHalfHeight = params.OutHalfHeight;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetScaledCapsuleRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleRadius");

	UDroneCapsuleComponent_GetScaledCapsuleRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetScaledCapsuleHalfHeight_WithoutHemisphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere");

	UDroneCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneCapsuleComponent::GetScaledCapsuleHalfHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1DroneRuntime.DroneCapsuleComponent.GetScaledCapsuleHalfHeight");

	UDroneCapsuleComponent_GetScaledCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
